/* 
Eduardo Agnes

Implemente um sistema utilizando funcao que leia um valor e apresente para o usuario o valor do CUBO do valor digitado

*/

#include <stdio.h>


// Funcao chamada soma - Start
void CUBO(float a){				//receber valores parametrizados
	
	float resultado;        				//variavel
	resultado = (a*a*a);					//processamento
	printf("Valor do cubo de %2.f e %2.f", a, resultado);    //saida
}

// Funcao chamada soma - End


int main()
{
	float valor; 						// declaracao de variavel
	
	printf("Digite o valor que queira saber o cubo: \n");
	scanf("%f",&valor);					// definicao de valor
	
					
	CUBO(valor);		        		// chamamento da funcao
	
	
	
	
	return 0;
}
