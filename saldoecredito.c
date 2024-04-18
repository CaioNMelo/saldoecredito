#include <stdio.h>
#include <stdlib.h>

int saldo;
float credito;

int main()
{
	printf("Qual seu saldo?");
	scanf("%d" , &saldo);
	
	if(saldo <=200){
		printf("Não possui credito\n");
    }else if(saldo > 200 || saldo < 400){
    
    credito = saldo * 0.2; 
    
    printf("Seu Credito é de: %.2f\n"  , credito);

	
	}else if(saldo > 400 || saldo < 600){
    
    credito = saldo * 0.3; 
    
    printf("Seu Credito é de: %.2f\n"  , credito);
	
	
	}else if(saldo > 600){
    
    credito = saldo * 0.4; 
    
    printf("Seu Credito é de: %.2f\n"  , credito);
	}
	
}