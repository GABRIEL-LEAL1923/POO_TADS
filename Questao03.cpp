/* - Leia 8 números inteiros para dentro de um vetor e determine:
    O maior valor e em qual posição ele está
    O menor valor e em qual posição ele está */
    
#include <iostream>

int main(){
	int vetor[8];
	int maior,menor, pos_maior, pos_menor, i;
	
	//entrada usúario
	for(int i = 0; i<8; i++){
		std::cout << "Digite o "<< i+1 << "numero" << std::endl;
		std::cin >> vetor[i];
		
	}
	//maior e sua posição
	maior = vetor[0];
	pos_maior = 0;
	
	for(i = 1; i < 8; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
			pos_maior = i;
		}
	}
	
	//menor e sua posição
	menor = vetor[0];
	pos_menor = 0;
	
	for(i = 1; i < 8; i++){
		if(vetor[i] < menor){
			menor = vetor[i];
			pos_menor = i;
		}
	}
	
	std::cout << "\nO maior valor: "<< maior << " ,Sua posição: " << pos_maior + 1<< std::endl;
	std::cout << "\nO menor valor: "<< menor << " ,Sua posição: " << pos_menor + 1 << std::endl;
	
	return 0;
	
}    

