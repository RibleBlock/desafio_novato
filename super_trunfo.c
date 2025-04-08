#include <stdio.h>

// SUPER TRUNFO GAME //
int main() 
{
  char estado, codigo[2], nome[9];
  int populacao, turismo;
  float area, pib;

  char estado2, codigo2[2], nome2[9];
  int populacao2, turismo2;
  float area2, pib2;

  // Entrada de dados carta1 //
  printf("DIGITE O NOME DA CIDADE: \n");
  scanf("%s", nome);

  printf("DIGITE O ESTADO:(A - H) \n");
  scanf(" %c", &estado);
  
  printf("DIGITE O CODIGO DA CARTA: \n");
  scanf("%s", codigo);
  
  printf("DIGITE A POPULACAO: \n");
  scanf("%d", &populacao);
  
  printf("DIGITE A AREA: \n");
  scanf("%f", &area);
  
  printf("DIGITE O PIB: \n");
  scanf("%f", &pib);
  
  printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
  scanf("%d", &turismo);

  // Entrada de dados carta2 //
  printf("DIGITE O NOME DA CIDADE: \n");
  scanf("%s", nome2);

  printf("DIGITE O ESTADO:(A - H) \n");
  scanf(" %c", &estado2);
  
  printf("DIGITE O CODIGO DA CARTA: \n");
  scanf("%s", codigo2);
  
  printf("DIGITE A POPULACAO: \n");
  scanf("%d", &populacao2);
  
  printf("DIGITE A AREA: \n");
  scanf("%f", &area2);
  
  printf("DIGITE O PIB: \n");
  scanf("%f", &pib2);
  
  printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
  scanf("%d", &turismo2);

  
  // SAIDA DE DADOS carta1 //
  printf("============SAIDA DE DADOS==============\n");
  printf("CARTA 1:\n");
  printf("ESTADO: %c\n", estado);
  printf("CODIGO: %s\n", codigo);
  printf("NOME DA CIDADE: %s\n", nome);
  printf("POPULACAO: %d\n", populacao);
  printf("AREA: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("NUMEROS DE PONTOS TURISTICOS: %.2f\n", turismo);
  
  // SAIDA DE DADOS carta2 //
  printf("CARTA 2:\n");
  printf("ESTADO: %c\n", estado2);
  printf("CODIGO: %s\n", codigo2);
  printf("NOME DA CIDADE: %s\n", nome2);
  printf("POPULACAO: %d\n", populacao2);
  printf("AREA: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("NUMEROS DE PONTOS TURISTICOS: %.2f\n", turismo2);
  
  // FIGHT //
  int resultado;
  printf("DIGITE UMA OPCAO: \n");
  printf("1 - PIB: \n");
  printf("2 - Populacao: \n");
  printf("3 - Area: \n");
  printf("4 - Numero de pontos turisticos: \n");
  printf("DIGITE A OPCAO DESEJADA: \n");
  scanf("%d", &resultado);
  
  switch (resultado)
  {
  case 1:
    if (pib > pib2) {
      printf("CARTA 1 VENCEU\n");
    } else if (pib < pib2) {
      printf("CARTA 2 VENCEU\n");
    } else {
      printf("EMPATE\n");
    }
    break;
    case 2:
      if (populacao > populacao2) {
        printf("CARTA 1 VENCEU\n");
      } else if (populacao < populacao2) {
        printf("CARTA 2 VENCEU\n");
      } else {
        printf("EMPATE\n");
      }
    break;
    case 3:
      if (area > area2) {
        printf("CARTA 1 VENCEU\n");
      } else if (area < area2) {
        printf("CARTA 2 VENCEU\n");
      } else {
        printf("EMPATE\n");
      }
    break;
    case 4:
      if (turismo > turismo2) {
        printf("CARTA 1 VENCEU\n");
      } else if (turismo < turismo2) {
        printf("CARTA 2 VENCEU\n");
      } else {
      }
      break;
      
      default:
      printf("ALGO ESTA ERRADO\n");
    break;
  }
  //  //
}
