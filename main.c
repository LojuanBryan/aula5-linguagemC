#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
// Escreva um programa que solicita dois numeros inteiros que informa qual é o maior e qual é o menor
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2;

    printf("Digite um número: ", numero1);
    scanf("%d", &numero1);

    printf("Digite outro número: ", numero2);
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("%d é maior do que %d",numero1, numero2);
    }

    else
    {
        printf("%d é menor do que %d",numero1, numero2);

    }
    return 0;
}
*/

// Escreva um programa que solicita um numero inteiro e responde dizendo se numero é par ou impar
/*
int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O numero digitado é par", numero);
    }
    else
    {
        printf("O numero digitado é impar", numero);
    }

    return 0;
}
*/

// Escreva um programa que solicita o valor do raio de um circulo. Depois calcula e exibe o perimetro da circuferencia e a area do circulo.

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    float raio, c, area;
    const float pi = 3.14;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);


    c = 2*pi* raio;
    area = pi * raio*raio;

    printf("A circunferencia do circulo é: %.2f \n", c);
    printf("A área do circulo é: %.2f", area);

}


// Escreva e execute um programa que solicita a base e a altura de um retangulo. E depois calcula e exibe o valor do perimetro e da area do retangulo.

/*
int main()
{
    setlocale(LC_ALL, "Portuguese");

     float base, altura, area, perimetro;

     printf("Digite o valor da base: ");
     scanf("%f", &base);

     printf("Digite o valor da altura: ");
     scanf("%f", &altura);

     area = base * altura;
     perimetro = 2 * (base + altura);

     printf("Área do retangulo = %.2f \n", area);

     printf("Perimeto do retangulo = %.2f", perimetro);

     return 0;
}
*/
