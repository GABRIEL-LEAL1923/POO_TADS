/* - Crie um vetor de 6 nomes (strings).
    O programa deve:
    Ler os nomes
    Perguntar um nome a ser buscado
    Informar se ele existe no vetor */
    
#include <iostream>
#include <string>

int main(){
	std::string nomes[6];
	
	std::cout << "ATENCAO NAO SAO ACEITOS NOMES COM ESPAÇO " << std::endl;
	
	//armazena os nomes digitados pelo usúario
	for(int i=0;i<6;i++){
	  	std::cout << "Digite o " << i+1 << "nome: " << std::endl;
		std::cin >> nomes[i];
	}
    
    std::cout << "Digite o nome que deseja buscar: ";
    std::string nome;
    std::cin >> nome;
    
    bool encontrado = false;
    for(int i = 0; i<6; i++){
		if(nomes[i] == nome){
			std::cout << "O nome " << nome << " existe no vetor!" << std::endl;
			encontrado = true;
			break;
		}
	}
	if(!encontrado){
		std::cout << "O nome não foi encontrado" << std::endl;
	}
	
	return 0;
}