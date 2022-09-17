
#include <iostream>
#include <locale>
#include <string.h>
#include <math.h>

using namespace std;

typedef struct Produto
{
	int codigo;
	string nome;
	float preco,aux,aux2;
	double quant_estoque;
} p_produto;
p_produto prod[2];

// case 1- CADASTRO DE PRODUTOS
void Produtos()
{
	for(int i=0; i<5; i++)
	{
	 	cin.ignore();
	 	cout<<"Cadastre o"<<i+1<< "º produto \n";
	 	cout<<endl;
	 	cout<<"Informe o nome do Produto: \n";
	 	getline(cin,prod[i].nome);
	 	cout<<"Informe o codigo do produto: \n";
	 	cin >>prod[i].codigo;
	 	cout<<"Informe o preço do Produto: \n";
	 	cin >>prod[i].preco;
	 	cout<<"Quantidade de entrada do Produto: \n";
	 	cin>>prod[i].quant_estoque;
	 	
	 }
 }
 
 //case 2- LISTA OS PRODUTOS CADASTRADOS

void Lista()
{	
	for(int i=0; i<5; i++)
	{		
		cout<<"Nome do prduto: "<<prod[i].nome<<endl;
	 	cout<<"Codigo do produto: "<<prod[i].codigo<<endl;
	 	cout<<"Preço do produto: "<<prod[i].preco<<endl;
	 	cout<<"Quantidade em estoque: "<<prod[i].quant_estoque<<endl;
	 	cout<<"------------------------------------------------- \n";	 	
	}
}


int main() {
	setlocale(LC_ALL,"Portuguese");

	int op;

	do{
		cout<<"-------CADASTRO DE PRODUTOS---------\n";
		cout<<"--------------------------------------\n";
		cout<<"1- cadastrar produtos \n";
		cout<<"2- Listar produtos \n";
		cout<<"3- Selecione o produto e a quantidade desejada\n";
		cout<<"5-Sair \n";
		cin >>op;
		
		switch(op)
		{
			case 1:
				Produtos();
			break;	
			case 2:
				Lista();
				break;
				
		
			case 3:
				for(int i=0; i<5; i++)
				{
			
				cout <<"Digite o código do prduto: \n";
				cin >>prod[i].aux2;	
				cout<<endl;
				cout <<"digite a quantidade desejada: \n";
				cin >>prod[i].aux;
				
				if(prod[i].aux2 == prod[i].codigo && prod[i].aux < prod[i].quant_estoque)
				{
					prod[i].quant_estoque = prod[i].quant_estoque - prod[i].aux;
					cout<<"Pedido realizado com sucesso! \n ";
					cout<<"Restam"<<prod[i].quant_estoque<<" em estoque: "<<endl;
					
				}else
				{
					prod[i].aux ==prod[i].codigo && prod[i].aux2 > prod[i].quant_estoque;
					cout<<"quantidade insuficiente em estoque! \n";
				}
					
					
				}
	
				break;
		}
			
		
		
		
	   	
			
	}while(op!=5);

	return 0;
}
