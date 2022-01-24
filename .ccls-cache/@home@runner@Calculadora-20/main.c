#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>



int main(void) {
  float num1, num2, resultado = 0; // aqui declaramos nossas varáveis para execução do calculo
  int x = 0;
  char op = '0'; //declaramos nossa vriavel de atribuição para nosso loop

  do{
    printf("########### CALULADORA 2.0 #############\n\n"); // apresentação
    printf("Escolha uma das opções abaixo para fazer um calculo!!\n\n"); // nosso Menu de operações
    
    printf(" (1) SOMAR \n");
    printf(" (2) SUBTRAIR \n");
    printf(" (3) MULTIPLICAR \n");
    printf(" (4) DIVIDIR \n\n\n");

    printf("Informe a OPERAÇÃO ou Digite '0' para SAIR: \n"); // pedimos ao usuário a operação uo sair o programa
    printf("\t\t\t\t\t\t\t\t\t\t\t>>> ");
    setbuf(stdin, NULL); // operador de descarregamento de bufer
    scanf(" %c", &op);// lemos a intenção do usuário
    printf("\n\n");
//iniciamos nosso loop pedir os valores ao usuário
    if(op != '0'){

    printf("Digite o primeiro número: \n");
    printf("\t\t\t\t\t\t\t>>> ");
    scanf(" %f", &num1);
    setbuf(stdin, NULL);
    printf("Digite o segundo número: \n");
    printf("\t\t\t\t\t\t\t>>> ");
    scanf(" %f", &num2);
    setbuf(stdin, NULL);
    printf("\n");
// loop utilizando a concatenação de if's e elses..
      if( op == '1'){
         resultado = num1 + num2;
      }else{
        if(op == '2'){
          resultado = num1 - num2;
        }else{
          if(op == '3'){
            resultado = num1 * num2;
          }else{
            if(op == '4')
            resultado = num1 / num2;
          }
        }
      }
    printf("O resultado da operação é >>> > %f <\n\n", resultado);//imprimimos o resultado para o usuário
    printf("Para continuar digite ""QUALQUER TECLA!!"": \n\n");//damos uma pausa no programa
    getchar();
    system("clear");//limpamos a tela
     
    }
   
  
       
  }while(op != '0');// fim do nosso loop e finaliza o programa
   
  

  printf("Programa Finalizado!!\n");
  return 0;
}