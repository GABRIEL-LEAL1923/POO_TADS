/*Usando o vetor do exercício anterior, calcule e exiba:
    A soma total dos números
    A média aritmética dos valores*/

#include <iostream>

//para saber que há funções em baixo
int soma(int vetor[], int tamanho);
double media(int vetor[], int tamanho);

int main(){
	int vetor[5], i;
	int tamanho = 5;
	
//pega a sequencia dos 5 números digitados pelo usúario
	
	std::cout << "Digite cinco números inteiros e mostraremos na tela: " << std::endl;
	for(i=0;i<5;i++){
		std::cin >> vetor[i];
	
	}
	//chamar funções
	int total = soma(vetor, tamanho);
	double med = media(vetor, tamanho);
	
	std::cout << "Soma total: " << total << std::endl;
	std::cout << "Média aritmética: " << med << std::endl;
	
	return 0;
}

int soma(int vetor[], int tamanho){ //vetor/ tamanho
	int total = 0;
	for(int i=0; i<tamanho; i++){
		total += vetor[i]; //soma cada elemento do vetor
	}
	return total;
}

double media(int vetor[], int tamanho){ //vetor/ tamanho
	int total = soma(vetor, tamanho);
	return total / (double)tamanho;
	
}