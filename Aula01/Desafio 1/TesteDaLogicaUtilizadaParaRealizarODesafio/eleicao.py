for ano in range(2020):
    if( (((ano>1891 and ano<1934)or(ano>1989 and ano<2020 and ano!=1990)) and (ano%4==2)) or (ano>=1945 and ano<1965 and ano%5==0) or (ano == 1919 or ano == 1989) ):
        print(ano,": Ano de eleição direta ")
    
   
