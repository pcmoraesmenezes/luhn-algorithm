/*
Implementação de um codigo que verifica se o cartão de credito é valido ou não!
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char ** argv )
{
    char num[50];
    char nome[50];
    char marca[50];
    printf("Verificaremos se o seu cartão é válido ou não\n");
    printf("Digite o numero do cartão, observação não acrescentar espaço!:\n");
    scanf("%s", &num);
    printf("Digite o seu nome:\n");
    scanf("%s",&nome);
    printf("Digite a marca do cartão:\n");
    scanf("%s", &marca);
    int soma1 = 0;
    int soma2 = 0;
    int soma3 = 0;
    int x = 0;
    int y = 0;
    for(int i = 0; num[i] != '\0'; i++)
   { 
    
    if((num[i]-48) * 2 >=8 && i % 2 == 0)
        { 
           y = (num[i] - 48) * 2;
             x = y / 10;
            soma3 = x + (y %10) + soma3;
            x = 0, y =0 ;  
        }    
         else if(i%2 == 0){
            printf("Num:%d\n", (num[i] -48) );
            soma1 = soma1+ (((num[i] - 48) *2) );
            printf("Soma1:%d\n", soma1);
        }
    else  if(i % 2 != 0)
        {  
            soma2 = soma2 + ((num[i] - 48 ));
        }     
        }  
   int soma = soma1 + soma2+ soma3;
   printf("Soma1:%d\nSoma2:%d\nSoma3:%d\n", soma1,soma2,soma3);
   printf("Soma:%d\n", soma);
   int ultimo = soma % 10;
   printf("Ultimo digito é:%d\n", ultimo);
   if(ultimo == 0)
   {
    printf("Parabens, %s, o seu cartão da agência %s, é válido!\n", nome, marca);
   }
   else{
    printf("Infelizmente o seu cartão não é válido");
   }
}