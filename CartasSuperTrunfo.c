#include <stdio.h>

int main() {
int população, númerodepontosturísticos;
float area, PIB;

printf("Cadastro de informações: \n\n");// linha em branco adicional

printf("Carta 01 - São Paulo. \n\n");// linha em branco adicional

printf("Digite a população total: ");
scanf("%d", &população);

printf("Adicione o valor da área total: ");
scanf("%f", &area);

printf("Adicione o valor do PIB: ");
scanf("%f", &PIB);

printf("Adicione o número de pontos turísticos: ");
scanf("%d", &númerodepontosturísticos);// linha em branco adicional

printf("População total: %d\n", população);
printf("Área total: %f\n", area);
printf("PIB: %f\n", PIB);
printf("Números de pontos turísticos: %d\n\n", númerodepontosturísticos);// linha em branco adicional

printf("Carta 02 - Minas Gerais. \n\n");// linha em branco adicional

printf("Digite a população total: ");
scanf("%d", &população);

printf("Adicione o valor da área total: ");
scanf("%f", &area);

printf("Adicione o valor do PIB: ");
scanf("%f", &PIB);

printf("Adicione o número de pontos turísticos: ");
scanf("%d", &númerodepontosturísticos);// linha em branco adicional

printf("População total: %d\n", população);
printf("Área total: %f\n", area);
printf("PIB: %f\n", PIB);
printf("Números de pontos turísticos: %d\n\n", númerodepontosturísticos);// linha em branco adicional


// tentei por varias vezes fazer a parte de divisão para PIB por capita e densidade populacional e consegui apenas os resultados (-0.000000 e int), procurei muitos conteudos para corrigir mas não tive sucesso.

    return 0;
}
