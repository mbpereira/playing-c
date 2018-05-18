#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
    ########## EXEMPLO DE EXECUÇÃO ##########
    str = mateus    old_c = ma  new_c = te
    esperado = teteus

    len_oldC = 2
    str_o = mateus

    ...Iniciando Loop...
    count = 0
    ma começa em ---> tmp = 0x00
    str_o = 0x00 + 2 [len_oldC]
    count = 1
    tmp = NULL (ma não encontrado)
    ...Saindo do loop...

    len_newC = 2;
    len_newS = 1 + 6 - 1 * (2 - 2) = 7
    tmp = result[7]

    ...Inicio loop...
    count = 0
    ma começa em ---> str_c = 0x00
    x = str_c (0x00) - str (0x00) = 0x00
    tmp = strncpy(tmp, str, x) + x = 0x00 + 0
    tmp = strcpy(tmp, new_c) + len_newC = 0x00 + 2
    tmp = te ---> 0x02
    str += 0x00 + 2 = 0x02
    ...Saindo do loop...
    strcpy(tmp (0x02), str (0x02))
    tmp = teteus = result

*/
char* replace(char *str, char *old_c, char *new_c){
    int x, count, len_oldC, len_newC, len_newS;
    char *str_o, *tmp, *result;

    len_oldC = strlen(old_c);
    if(len_oldC==0)
        return NULL;
    str_o = str;
    for(count = 0; tmp = strstr(str_o, old_c); count++)
        str_o = tmp + len_oldC;

    len_newC = strlen(new_c);
    len_newS = 1 + strlen(str) - count * (len_oldC - len_newC);

    /*
        A variável result sempre será igual a tmp. No
        entanto, sua declaração é necessária, pois ao
        final das operações,  a  variável  tmp estará
        a alguns endereços a  frente  para  armazenar
        os  caracteres  "reciclados"  de  str.  Dessa
        maneira, result  é  apenas  uma  variável  de
        retorno
    */
    tmp = result = (char *) malloc(len_newS * sizeof(char));

    while(count--){
        /*
            Procura uma ocorrencia (old_c) e retorna o endereço
            do primeiro caractere desta
        */
        str_o = strstr(str, old_c);
        /*
            Encontra a diferença entre o endereço do
            primeiro  caractere  da  ocorrencia  e o
            "primeiro" endereço  da  string,  que  é
            determinado ao longo da função
        */
        x = str_o - str;
        /*
            Armazena em tmp os valores presentes na str
            até a posição x, e pega a  próxima  posição
            vazia de tmp, de  acordo  com  a  diferença
            entre o começo da str e a primeira ocorren-
            cia (x)
        */
        tmp = strncpy(tmp, str, x) + x;
        /*
            Armazena  todos os caracteres de  new_c  em
            tmp a partir da sua antiga primeira posição
            vazia, e  pega a  próxima  posição vazia de
            acordo com o tamanho de new_c
        */
        tmp = strcpy(tmp, new_c) + len_newC;

        /*
            Altera a posição de str, de acordo com x
            e com o tamanho de old_c;
        */
        str += x + len_oldC;
    }

    strcpy(tmp, str);

    return result;
}

int main()
{

    printf("%s", replace("AT AD", " ", ""));

    //printf("%s", replace("mateusmateus", "mateus", "mat"));
}
