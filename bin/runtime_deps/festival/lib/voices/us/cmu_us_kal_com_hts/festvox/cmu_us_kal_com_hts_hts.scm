;;  ----------------------------------------------------------------  ;;
;;                 Nagoya Institute of Technology and                 ;;
;;                     Carnegie Mellon University                     ;;
;;                         Copyright (c) 2002                         ;;
;;                        All Rights Reserved.                        ;;
;;                                                                    ;;
;;  Permission is hereby granted, free of charge, to use and          ;;
;;  distribute this software and its documentation without            ;;
;;  restriction, including without limitation the rights to use,      ;;
;;  copy, modify, merge, publish, distribute, sublicense, and/or      ;;
;;  sell copies of this work, and to permit persons to whom this      ;;
;;  work is furnished to do so, subject to the following conditions:  ;;
;;                                                                    ;;
;;    1. The code must retain the above copyright notice, this list   ;;
;;       of conditions and the following disclaimer.                  ;;
;;                                                                    ;;
;;    2. Any modifications must be clearly marked as such.            ;;
;;                                                                    ;;
;;    3. Original authors' names are not deleted.                     ;;
;;                                                                    ;;
;;    4. The authors' names are not used to endorse or promote        ;;
;;       products derived from this software without specific prior   ;;
;;       written permission.                                          ;;
;;                                                                    ;;
;;  NAGOYA INSTITUTE OF TECHNOLOGY, CARNEGIE MELLON UNIVERSITY AND    ;;
;;  THE CONTRIBUTORS TO THIS WORK DISCLAIM ALL WARRANTIES WITH        ;;
;;  REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF      ;;
;;  MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL NAGOYA INSTITUTE   ;;
;;  OF TECHNOLOGY, CARNEGIE MELLON UNIVERSITY NOR THE CONTRIBUTORS    ;;
;;  BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR   ;;
;;  ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR        ;;
;;  PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER    ;;
;;  TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR  ;;
;;  PERFORMANCE OF THIS SOFTWARE.                                     ;;
;;                                                                    ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;     A voice based on "HTS" HMM-Based Speech Synthesis System.      ;;
;;          Author :  Alan W Black                                    ;;
;;          Date   :  August 2002                                     ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; Try to find the directory where the voice is, this may be from
;;; .../festival/lib/voices/ or from the current directory
(if (assoc 'cmu_us_kal_com_hts_hts voice-locations)
    (defvar cmu_us_kal_com_hts::hts_dir 
      (cdr (assoc 'cmu_us_kal_com_hts_hts voice-locations)))
    (defvar cmu_us_kal_com_hts::hts_dir (string-append (pwd) "/")))

;;; Did we succeed in finding it
(if (not (probe_file (path-append cmu_us_kal_com_hts::hts_dir "festvox/")))
    (begin
     (format stderr "cmu_us_kal_com_hts::hts: Can't find voice scm files they are not in\n")
     (format stderr "   %s\n" (path-append  cmu_us_kal_com_hts::hts_dir "festvox/"))
     (format stderr "   Either the voice isn't linked in Festival library\n")
     (format stderr "   or you are starting festival in the wrong directory\n")
     (error)))

;;;  Add the directory contains general voice stuff to load-path
(set! load-path (cons (path-append cmu_us_kal_com_hts::hts_dir "festvox/") 
		      load-path))

(set! cmu_us_kal_com_hts::hts_data_dir (path-append cmu_us_kal_com_hts::hts_dir "hts/"))

(set! cmu_us_kal_com_hts:feats_list
      (load
       (path-append cmu_us_kal_com_hts::hts_data_dir "feats.list")
       t)


;;;
;;; Generic HTS code for all HTS voices
;;;
;(require 'hts)

(defvar hts_synth_pre_hooks utt)
(defvar hts_synth_post_hooks utt)

(defSynthType HTS
  (let ((ffile (make_tmp_filename))
	(wfile (make_tmp_filename)))
    (apply_hooks hts_synth_pre_hooks utt)
    (hts_dump_feats utt cmu_us_kal_com_hts:feats_list ffile)

    (system
     (format
      nil
      "%s/htsvoice.pl --directory %s --infile %s --outfile %s"
      cmu_us_kal_com_hts::hts_data_dir
      cmu_us_kal_com_hts::hts_data_dir
      ffile
      wfile))

    (utt.import.wave utt wfile)

    (apply_hooks hts_synth_post_hooks utt)
    utt
)

(define (hts_dump_feats utt feats ofile)
  (let ((ofd (fopen ofile "w")))
    (mapcar
     (lambda (s)
       (mapcar
	(lambda (f)
	  (format ofd "%s " (item.feat s f)))
	feats)
       (format ofd "\n"))
     (utt.relation.items utt 'Segment))))

;;; Voice specific parameter are defined in each of the following
;;; files
(require 'cmu_us_kal_com_hts_phoneset)
(require 'cmu_us_kal_com_hts_tokenizer)
(require 'cmu_us_kal_com_hts_tagger)
(require 'cmu_us_kal_com_hts_lexicon)
(require 'cmu_us_kal_com_hts_phrasing)
(require 'cmu_us_kal_com_hts_intonation)
(require 'cmu_us_kal_com_hts_duration)
(require 'cmu_us_kal_com_hts_f0model)
(require 'cmu_us_kal_com_hts_other)
;; ... and others as required


(define (cmu_us_kal_com_hts::voice_reset)
  "(cmu_us_kal_com_hts::voice_reset)
Reset global variables back to previous voice."
  (cmu_us_kal_com_hts::reset_phoneset)
  (cmu_us_kal_com_hts::reset_tokenizer)
  (cmu_us_kal_com_hts::reset_tagger)
  (cmu_us_kal_com_hts::reset_lexicon)
  (cmu_us_kal_com_hts::reset_phrasing)
  (cmu_us_kal_com_hts::reset_intonation)
  (cmu_us_kal_com_hts::reset_duration)
  (cmu_us_kal_com_hts::reset_f0model)
  (cmu_us_kal_com_hts::reset_other)

  t
)

;; This function is called to setup a voice.  It will typically
;; simply call functions that are defined in other files in this directory
;; Sometime these simply set up standard Festival modules othertimes
;; these will be specific to this voice.
;; Feel free to add to this list if your language requires it

(define (voice_cmu_us_kal_com_hts_hts)
  "(voice_cmu_us_kal_com_hts_hts)
Define voice for limited domain: us."
  ;; *always* required
  (voice_reset)

  ;; Select appropriate phone set
  (cmu_us_kal_com_hts::select_phoneset)

  ;; Select appropriate tokenization
  (cmu_us_kal_com_hts::select_tokenizer)

  ;; For part of speech tagging
  (cmu_us_kal_com_hts::select_tagger)

  (cmu_us_kal_com_hts::select_lexicon)
  ;; For hts selection you probably don't want vowel reduction
  ;; the unit selection will do that
  (if (string-equal "americanenglish" (Param.get 'Language))
      (set! postlex_vowel_reduce_cart_tree nil))

  (cmu_us_kal_com_hts::select_phrasing)

  (cmu_us_kal_com_hts::select_intonation)

  (cmu_us_kal_com_hts::select_duration)

  (cmu_us_kal_com_hts::select_f0model)

  ;; Waveform synthesis model: hts
  (Parameter.set 'Synth_Method 'HTS)

  ;; This is where you can modify power (and sampling rate) if desired
  (set! after_synth_hooks nil)
;  (set! after_synth_hooks
;      (list
;        (lambda (utt)
;          (utt.wave.rescale utt 2.1))))

  (set! current_voice_reset cmu_us_kal_com_hts::voice_reset)

  (set! current-voice 'cmu_us_kal_com_hts_hts)
)

(provide 'cmu_us_kal_com_hts_hts)

