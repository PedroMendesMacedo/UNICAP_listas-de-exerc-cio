#include <stdio.h>
#include <ctype.h>
 
float far(float);
float cel(float);
 
int main()
{
    char resp, conv;
    float grausF, grausC;
    do{
        printf("Deseja fazer a conversão de °C para °F ou de °F para °C?\n");
        scanf("%s", &conv);
        fflush(stdin);
        while (conv!= 'F' && conv!='C'){
            printf("Resposta inválida. Responda com C ou F.\n");
            scanf("%s", &conv);
            fflush(stdin);
        }
        switch (conv){
            case 'F':
                printf("%.2f", far(grausC));
                break;
            case 'C':
                printf("%.2f", cel(grausF));
                break;
        }
        printf("\nDeseja continuar usando o sistema?\n");
        scanf("%s", &resp);
        fflush(stdin);
        while (resp!= 'S' && resp!='N'){
            printf("Resposta inválida. Responda com S ou N.\n");
            scanf("%s", &resp);
            fflush(stdin);
        }  
    } while (resp=='S');
    return 0;
}
 
float far( float grausC){
    float grausF;
    printf("Digite os graus em Célsius.\n");
    scanf("%f", &grausC);
    grausF =(grausC * 1.8) + 32;         
    return grausF;
}
 
float cel(float grausF){
    float grausC;
    printf("Digite os graus em Fahrenheit.\n");
    scanf("%f", &grausF);
    grausC=(grausF-32)*5/9;
    return grausC;
}
