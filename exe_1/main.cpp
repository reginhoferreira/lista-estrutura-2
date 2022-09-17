#include <iostream>
#include <locale>
#include<cstring>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


struct Banco{
	char nome[50];
	double cpf;
	float conta;
};



int main() {
	setlocale(LC_ALL,"Portuguese");
	
	
 Banco banco[3],aux;	
 
for(int i=0; i<5; i++){
	cout<<"digite seu nome: \n ";
	cin >>banco[i].nome;
	cout<<"Digite o CPF: \n";
	cin >>banco[i].cpf;
	cout <<"Informe o valor na conta: \n";
	cin >>banco[i].conta;
}
	
	for (int i=0; i<5; i++) 
	{
		for (int j=i+1; j<5; j++)
		 {
			if (banco[i].conta < banco[j].conta) 
			{
				
				strcpy(aux.nome, banco[i].nome);
				aux.cpf = banco[i].cpf;
				aux.conta = banco[i].conta;
	
			
				strcpy(banco[i].nome, banco[j].nome);
				banco[i].cpf = banco[j].cpf;
				banco[i].conta = banco[j].conta;
				
				strcpy(banco[j].nome, aux.nome);
				banco[j].cpf = aux.cpf;
				banco[j].conta = aux.conta;
			}
		}
	}

	cout<<"clientes cadastrados: \n";		
	for(int i=0; i<5; i++){

		cout <<banco[i].nome<<endl;
		cout <<banco[i].cpf<<endl;
		cout <<banco[i].conta<<endl;
	}			

	return 0;
}

