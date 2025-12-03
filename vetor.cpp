 /*Crie um programa que:
    Possua um vetor de 5 números inteiros
    Peça ao usuário para digitar os valores
    Exiba todos os valores digitados*/

#include <iostream>

int main(){
	int vetor[5], i;
	
//pega a sequencia dos 5 números digitados pelo usúario
	
	std::cout << "Digite cinco números inteiros e mostraremos na tela: " << std::endl;
	for(i=0;i<5;i++){
		std::cin >> vetor[i];
	
	}
//imprime os 5 números digitados

	std::cout << "_____Aqui está o resultado!_______" << std::endl;
    for(i=0;i<5;i++){
		std::cout << vetor[i] << "\n";
		
	}
	
	return 0;
};