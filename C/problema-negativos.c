/*Problema "negativos" 
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros 
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos. */


#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int i, n, x;

printf("Quantos numeros voce vai digitar? ");
scanf("%d", &n);

int vet[n];

for (i=0; i<n; i++)
{
    printf("Digite um numero: ");
    scanf("%d", &vet[i]);
}

printf("NUMEROS NEGATIVOS: \n");

for (i= 0; i<n; i++)
{
    if (vet[i]<0)
    {
    printf("%d\n", vet[i]);
    }
}






    return 0;
}
