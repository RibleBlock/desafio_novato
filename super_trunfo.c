#include <stdio.h>

// SUPER TRUNFO GAME //
int main() 
{
  char estado, codigo[2], nome[9];
  int populacao, turismo;
  float area, pib, dencidadePopulacional, pibPerCaita;

  char estado2, codigo2[2], nome2[9];
  int populacao2, turismo2;
  float area2, pib2, dencidadePopulacional2, pibPerCaita2;

  // Entrada de dados carta1 //
  printf("DIGITE O NOME DA CIDADE: \n");
  scanf("%s", nome);

  printf("DIGITE O ESTADO:(A - H) \n");
  scanf(" %c", &estado);
  
  printf("DIGITE O CODIGO DA CARTA: \n");
  scanf("%s", &codigo);
  
  printf("DIGITE A POPULACAO: \n");
  scanf("%d", &populacao);
  
  printf("DIGITE A AREA: \n");
  scanf("%f", &area);
  
  printf("DIGITE O PIB: \n");
  scanf("%f", &pib);
  
  printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
  scanf("%i", &turismo);

  dencidadePopulacional = populacao / area;
  pibPerCaita = pib / populacao;
  

  // Entrada de dados carta2 //
  printf("DIGITE O NOME DA CIDADE: \n");
  scanf("%s", nome2);

  printf("DIGITE O ESTADO:(A - H) \n");
  scanf(" %c", &estado2);
  
  printf("DIGITE O CODIGO DA CARTA: \n");
  scanf("%s", &codigo2);
  
  printf("DIGITE A POPULACAO: \n");
  scanf("%d", &populacao2);
  
  printf("DIGITE A AREA: \n");
  scanf("%f", &area2);
  
  printf("DIGITE O PIB: \n");
  scanf("%f", &pib2);
  
  printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
  scanf("%i", &turismo2);
  
  dencidadePopulacional2 = populacao2 / area2;
  pibPerCaita2 = pib2 / populacao2;
  
  // SAIDA DE DADOS carta1 //
  printf("============SAIDA DE DADOS==============\n");
  printf("CARTA 1:\n");
  printf("NOME DA CIDADE: %s\n", nome);
  printf("ESTADO: %c\n", estado);
  printf("CODIGO: %s\n", codigo);
  printf("POPULACAO: %d\n", populacao);
  printf("AREA: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("NUMEROS DE PONTOS TURISTICOS: %i\n", turismo);
  printf("DENCIDADE POPULACIONAL: %.2f\n", dencidadePopulacional);
  printf("PIB PER CAPITA: %.2f\n\n", pibPerCaita);
  
  // SAIDA DE DADOS carta2 //
  printf("CARTA 2:\n");
  printf("NOME DA CIDADE: %s\n", nome2);
  printf("ESTADO: %c\n", estado2);
  printf("CODIGO: %s\n", codigo2);
  printf("POPULACAO: %d\n", populacao2);
  printf("AREA: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("NUMEROS DE PONTOS TURISTICOS: %i\n", turismo2);
  printf("DENCIDADE POPULACIONAL: %.2f\n", dencidadePopulacional2);
  printf("PIB PER CAPITA: %.2f\n", pibPerCaita2);

}
