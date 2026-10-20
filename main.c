#include <stdio.h>

int main (void)
{
    char nome[50] = "João Messias"; 
    float nota1 , nota2, media;
    

     printf("Qual seu nome:\n ");
     scanf("%s",nome);

     printf("Digite a primeira nota:\n");
     scanf("%f",&nota1);

     printf("Digite a segunda nota:\n");
     scanf("%f",&nota2);

     media = (nota1 + nota2) /2;

      printf("Olá %s, sua media é: %.2f\n", nome , media );
    
   
     return 0;
}
