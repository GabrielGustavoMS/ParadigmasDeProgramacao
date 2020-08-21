ano = -1
while(ano<0 or ano>2020):
    ano = int(input("Digite um ano"))
    
if( (((ano>1891 and ano<1934)or(ano>1989 and ano<2020 and ano!=1990)) and (ano%4==2)) or (ano>=1945 and ano<1965 and ano%5==0) or (ano == 1919 or ano == 1989) ):
    print(" Ano de eleição direta ")    
if(ano%4 == 2 and ano>= 1930 and ano != 1942 and ano != 1946):
    print(" Ano de copa do mundo")
if(ano%4 == 0):
    print(" Ano Bissexto")
if(ano%4 == 0 and ano>=1896 and ano!=2020 and ano!=1916 and ano!=1940 and ano!=1944):
    print(" Ano de Olipíada")
        
                
