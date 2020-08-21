
f = open("testAnoCopa.txt","a")
f.write("Teste Lógica: \n")
f.close()

for ano in range(2021):
    if(ano%4 == 2 and ano>= 1930):
        f = open("testAnoCopa.txt","a")
        texto = "{}: Ano de copa do mundo \n".format(ano)
        if(ano == 1942 or ano == 1946):
            texto = "{}: Copa cancelada devido a 2ª Guerra mundial \n".format(ano)
        f.write(texto)
        f.close()
    if(ano%4 == 0):
        f = open("testAnoCopa.txt","a")
        texto = "{}: Ano Bissexto \n".format(ano)
        if(ano>=1896):            
            texto = "{}: Ano Bissexto de Olimpíada \n".format(ano)
            if(ano == 2020):
                texto = "{}: Ano Bissexto, Jogos Olímpicos não iniciados devido a Pandemia  \n".format(ano)
            elif(ano == 1916):
                texto = "{}: Ano Bissexto, Jogos Olímpicos não ocorreram devido a 1ª Guerra mundial \n".format(ano)
            elif(ano == 1940 or ano == 1944):
                texto = "{}: Ano Bissexto, Jogos Olímpicos não ocorreram devido a 2ª Guerra mundial \n".format(ano)
        f.write(texto)
        f.close()    
            
f = open("testAnoCopa.txt","r")
print(f.read())
f.close()
        

