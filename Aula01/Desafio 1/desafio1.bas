10 PRINT "DIGITE UM ANO"
20 INPUT "";ano
30 IF ano<0 or ano>2020 THEN GOTO 10
40 IF ((((ano>1891 and ano<1934)or(ano>1989 and ano<2020 and ano<>1990)) and (ano%4=2)) or (ano>=1945 and ano<1965 and ano%5=0) or (ano = 1919 or ano = 1989) ) THEN PRINT "Ano de eleição direta " 
50 IF (ano%4 = 2 and ano>= 1930 and ano <> 1942 and ano <> 1946) THEN PRINT "Ano de copa do mundo"
60 IF (ano%4 = 0) THEN PRINT "Ano Bissexto"
70 IF (ano%4 = 0 and ano>=1896 and ano<>2020 and ano<>1916 and ano<>1940 and ano<>1944) THEN PRINT "Ano de Olipíada"

' https://staging.repl.it/repls/AbleHoarseBrain#program.bas