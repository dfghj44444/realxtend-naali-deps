(define (catala_tok_rex sc)
  "(cat_tok_rex sc)
Returns 1 if King like title is within 3 tokens before or 2 after."
  (let ((kings '(rei papa pare duc tsar emperador c�sar bar� comte)))
    (if (or (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.pp.name"))
	     kings)
	    (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.pp.p.name"))
	     kings)
	    (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.n.name"))
	     kings))
	"1"
	"0")))

(define (catala_tok_queen sc)
  "(cat_tok_queen sc)
Returns 1 if Queen like title is within 3 tokens before or 2 after."
  (let ((queens '(reina duquessa tsarina emperadriu baronessa comtessa)))
    (if (or (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.pp.name"))
	     queens)
	    (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.pp.p.name"))
	     queens)
	    (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.n.name"))
	     queens))
	"1"
	"0")))

(define (catala_tok_rex_names sc)
  "(cat_tok_rex sc)
Returns 1 if King like title is within 1 token before."
    (let ((kings '(  ;; Noblessa Catalana
        ramon berenguer arnau guifr� 
	;; Reis espanyols
	carles felip ferran josep amadeu alfons joan carles 
        ;; Papes cat�lics
        alexandre sixte pius v�ctor calixte urb� f�lix marcel silvestre juli anastasi benet
        inocenci bonifaci benedicte gregori honori mart� pau climent
        ;; Altres reis
        enric llu�s jordi eduard guillem ricard napole� pere albert jaume)))
    (if (member_string (catala_downcase_string (item.feat sc "R:Token.p.name"))
	     kings)
	  
	"1"
	"0")))

(define (catala_tok_queen_names sc)
  "(cat_tok_rex sc)
Returns 1 if King like title is within 1 token before."
  (let ((queens '(caterina alexandra isabel maria joana cristina)))
    (if (member_string (catala_downcase_string (item.feat sc "R:Token.p.name"))
	     queens)
	  
	"1"
	"0")))

(define (catala_start_caps name)
 "(catala_start_caps name)
Returns 1 if name start with a caps letter and the 2nd letter isn't a cap letter"
(if (and (string-matches (string-append (car (symbolexplode name))) "[A-Z�������]") (string-matches (string-append (car (cdr (symbolexplode name)))) "[a-z�������]"))
   "1"
   "0"))

(define (tok_allcaps sc)
  "(tok_allcaps sc)
Returns 1 if sc's name is all capitals, 0 otherwise"
  (if (string-matches (item.name sc) "[A-Z]+")
      "1"
      "0"))


(define (catala_two_caps name)
  "(tok_allcaps sc)
Returns 1 if sc's name have two capitals letters (one at start) with a no capital letter between them at least, 0 otherwise"
  (if (string-matches name "[A-Z][a-z����������]+[A-Z������U��].*")
      "1"
      "0"))

(define (catala_words_ordinals_ms sc)
  "(catala_words_ordinals_ms sc )
Returns 1 if a list's word is within 1 token before or 1 after. Sing. & male words"

  (let ((words '(article vers acte llibre concurs aniversari cap�tol vol�m)))
    (if (member_string (catala_downcase_string (item.feat sc "R:Token.p.name"))
	     words)
	  
	"1"
	    (if (member_string (catala_downcase_string (item.feat sc "R:Token.n.name"))
	     words)
    	    "1"
	    "0"))))

(define (catala_words_ordinals_fs sc)
  "(catala_words_ordinals_ms sc )
Returns 1 if a list's word is within 1 token before or 1 after. Sing. & Female words "

  (let ((words '(secci� setmana part frase escena llibreta posici� secci� guerra assamblea jornada edici� olimpiada)))
    (if (member_string (catala_downcase_string (item.feat sc "R:Token.p.name"))
	    words)
	  
	"1"
	    (if (member_string (catala_downcase_string (item.feat sc "R:Token.n.name"))
	     words)
    	    "1"
	    "0"))))

(define (catala_words_ordinals_mp sc)
  "(catala_words_ordinals_ms sc )
Returns 1 if a list's word is within 1 token before or 1 after. Pl. & Male words "

  (let ((words '())) ;; I don't know any word now :P
    (if (member_string (catala_downcase_string (item.feat sc "R:Token.p.name"))
	     words)
	  
	"1"
	    (if (member_string (catala_downcase_string (item.feat sc "R:Token.n.name"))
	     words)
    	    "1"
	    "0"))))

(define (catala_words_ordinals_fp sc)
  "(catala_words_ordinals_ms sc )
Returns 1 if a list's word is within 1 token before or 1 after. Pl. & Female words "

  (let ((words '(jornades edicions olimpiades)))
    (if (member_string (catala_downcase_string (item.feat sc "R:Token.p.name"))
	     words)
	  
	"1"
	    (if (member_string (catala_downcase_string (item.feat sc "R:Token.n.name"))
	     words)
    	    "1"
	    "0"))))

(define (catala_telph sc)
  "(catala_telph sc)
Returns 1 if telephone or some call verb form is within 4, 3, 2 o 1 tokens before."
  (let ((telph '(tel�fon telf. telf tel. tel
		trucant trucam trucava truca trucada trucades trucant trucar trucaran 
		trucarem trucaren trucares trucareu trucaria trucarien trucaries
		trucar� trucar�s trucar� trucar�em trucar�eu trucat trucats trucava
		trucaven trucaves truco truc� truc�rem truc�reu truc�vem truc�veu truquem
		truquen truques truquessin truquessis truqueu truqui truquin truquis truqu�s
		truqu�ssim truqu�ssiu truqu�)))

    (if (or (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.pp.name"))
	     telph)
	    (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.pp.p.name"))
	     telph)
	    (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.pp.pp.name"))
	     telph)
	    (member_string 
	     (catala_downcase_string (item.feat sc "R:Token.p.name"))
	     telph))
	"1"
	"0")))




(provide 'upc_catalan_tokenpos)