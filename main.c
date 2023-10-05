#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     float n1;
     float n2;
     int operacao;
     float total;
     
     operacao=1;
    while(operacao!=0){
	
	 printf("Calculadora\n");
     printf("\n Escolha uma das operacoes a seguir: \n" );
     printf("1 - Subtracao \n" );
     printf("2 - Soma \n" );
     printf("3 - Multiplicacao \n" );
     printf("4 - Divisao \n" );
     printf("0 - Saida \n");
     scanf("%d", &operacao);
     
	 if(operacao==0){
     } else{
     printf("Digite o 1 numero: ");
     scanf("%f", &n1);
     printf("Digite o 2 numero: ");
     scanf("%f", &n2);
	 }
  
  switch(operacao){
                   
		case 1:		
			total = n1 - n2;
			printf("%.2f - %.2f = %.2f\n",n1,n2,total);
    		break;
    		
		case 2:
			total = n1 + n2;
			printf("%.2f + %.2f = %.2f\n",n1,n2,total);
    		break;
    		
		case 3:
			total = n1 * n2;
			printf("%.2f * %.2f = %.2f\n",n1,n2,total);
			break;
			
		case 4:	
			while(n2==0){
				printf("\nOperacao invalida\n");
				printf("Digite um novo numero\n");
				scanf("%f", &n2);
			}
			total = n1 / n2;
			printf("%.2f / %.2f = %.2f\n",n1,n2,total);
			break;
			
		case 0:
			printf("Adeus...");
			exit(0);
			break;	
		
		default:
            printf("Operação invalida");
            break;
  		}     
            
	 }		
 
  return 0;
}
