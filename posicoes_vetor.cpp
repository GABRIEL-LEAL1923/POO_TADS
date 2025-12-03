/* Leia 8 números inteiros para dentro de um vetor e determine:
    O maior valor e em qual posição ele está
    O menor valor e em qual posição ele está */
    
#include <iostream>

//prótotipos funcões
int maiorValor(int vetor[], int tamanho);
int menorValor(int vetor[], int tamanho);
int posicaoValor(int vetor[], int tamanho);


int main(){
	int vetor[8];
	
	sdt::cout << "Digite 8 números inteiros e diremos o maior, o menor e suas posições: " << std::endl;
	
	for(int i = 0; i < 8; i++){
		cin >> vetor[i];
	}
	
	int maior = maiorValor(vetor, 8);
	int menor = menorvalor(vetor, 8);
	
}