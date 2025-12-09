/* - Crie um vetor com 10 números digitados pelo usuário.
    Depois peça um número X e informe:
    Se X está no vetor
    Em qual posição ele aparece pela primeira vez */
    
#include <iostream>

int main(){
	int vetor[10], i, x; //i é o índice do for, x é o número a procurar
	
	//Entrada do usúario
	std::cout << "Digite 10 numeros abaixo, e em seguida pediremos um numero e verificamos se ele foi digitado e qual a sua posição" << std::endl;
	
	for(int i=0;i <10;i++){
		std::cout << "Digite o " << i+1 << std::endl;
		std::cin >>  vetor[i];
		
	}
	
	//pergunta o número e armazena na memória 
		std::cout << "Qual numero voce quer verificar se aa no vetor? " << std::endl;
		std::cin >> x;
	//obtenção de número e posição
	bool encontrado = false;
	
	for(int i=0; i<10; i++){
		if(vetor[i] == x){
			std::cout << "O número " << x << ", está no vetor, sua posicao: "<< i+1 << std::endl;
			encontrado = true;
			break;
		}
	}	
	
		if(!encontrado){
			std::cout << "O número " << x << ", não está no vetor "<< std::endl;
		
		}
		return 0;
}
