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
;;             Prosodic Phrasing                                      ;;
;;                                                                    ;;
;;             Author :  Alan W Black                                 ;;
;;             Date   :  August 2002                                  ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; Load any necessary files here
(require 'phrase)

(define (cmu_us_kal_com_hts::select_phrasing)
  "(cmu_us_kal_com_hts::select_phrasing)
Set up the phrasing module for English."
  (Parameter.set 'Phrase_Method 'prob_models)
  (set! phr_break_params english_phr_break_params)
)

(define (cmu_us_kal_com_hts::reset_phrasing)
  "(cmu_us_kal_com_hts::reset_phrasing)
Reset phrasing information."
  t
)

(provide 'cmu_us_kal_com_hts_phrasing)