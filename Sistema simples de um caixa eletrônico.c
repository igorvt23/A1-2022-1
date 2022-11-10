#include <stdio.h>

int main(void) {
  // declarando arrays
  int numconta[1000];
  int opcao;
  float saldo[1000] = {0.00};
  float saque;
  float deposito;
  int aux;
  // inicializando laço para os 1000 clientes
  for (int x = 0; x < 1000; x++) {
    printf("\n\nSeja bem-vindo(a)!\n\nPor favor digite o numero da sua conta:");
    scanf("%d", &numconta[x]);

    // iniciando laço para operações do banco
    for (int y = 0; y < 1000; y++) {
      printf("\n\nMENU:\n1 - Saldo\n2 - Saque\n3 - Deposito\n4 - Sair\n");
      scanf("%d", &opcao);

      /*lendo qual foi a opção escolhida e guiando o cliente*/
      if (1 >= opcao || opcao <= 3) {
        switch (opcao) {
          // caso saldo
        case 1:
          printf("Seu saldo e de %0.1f reais\n\n", saldo[x]);
          printf("Deseja fazer outra operacao? \nSim(1)\nNao(2)");
          scanf("%d", &aux);
          if (aux == 2) {
            printf("\n\nFinalizando atendimento!");
            y = y + 1000;
            // mostrando a conta corrente e o saldo atual
            printf("\nConta corrente: %d\nSaldo: %0.1f\n\n", numconta[x],
                   saldo[x]);
          }
          break;
          // caso saque
        case 2:
          printf("\nQuanto quer sacar? ");
          scanf("%f", &saque);
          saldo[x] = saldo[x] - saque;
          if (saldo[y] < 0) {
            printf("\nSaldo insuficiente\n\n");
          }
          printf("Deseja fazer outra operacao? \nSim(1)\nNao(2)");
          scanf("%d", &aux);
          if (aux == 2) {
            printf("\n\nFinalizando atendimento!");
            y = y + 1000;
            // mostrando a conta corrente e o saldo atual
            printf("\nConta corrente: %d\nSaldo: %0.1f\n\n", numconta[x],
                   saldo[x]);
          }
          break;
          // caso depósito
        case 3:
          printf("\nQuanto quer depositar? ");
          scanf("%f", &deposito);
          saldo[x] = saldo[x] + deposito;
          printf("Deseja fazer outra operacao? \nSim(1)\nNao(2)");
          scanf("%d", &aux);
          if (aux == 2) {
            printf("\n\nFinalizando atendimento!");
            y = y + 1000;
            // mostrando a conta corrente e o saldo atual
            printf("\nConta corrente: %d\nSaldo: %0.1f\n\n", numconta[x],
                   saldo[x]);
          }
          break;
        }
      }
      // caso escolha a opção 4
      else if (opcao == 4) {
        printf("\nFinalizando atendimento! ");
        y = y + 1000;
        // mostrando a conta corrente e o saldo atual
        printf("\nConta corrente: %d\nSaldo: %0.1f\n\n", numconta[x], saldo[x]);
      }
      // caso digite alguma opção fora do menu
      else {
        printf("Opção invalida");
      }
    }
  }
}
