#include <stdio.h>
#include <stdlib.h>
//linha 150
int main(int argc, char * argv[])
{
    FILE* curfile = fopen("curriculo.jsp", "r");
    FILE* newfile = fopen("modifed.jsp", "w");

    char ch;
    int row, col;
    if((curfile == NULL)){
        printf("Erro");
        exit(0);
    }

    row = 0;
    col = 0;

    printf("#####\n\nAntigo arquivo#####\n\n");
    while((ch=fgetc(curfile))!=EOF){
        if(ch == '\n'){
            col = -1;
            row++;
        }

        if(col==0 && row>=149){
            if(!fputs("\t\t", newfile)){
                printf("Impossível gravar dados");
                exit(0);
            }
        }

        col++;
        fputc(ch, newfile);
        printf("%c", ch);
    }

    fputs("Tudo certo", stdout);
    fclose(curfile);
    fclose(newfile);
}
