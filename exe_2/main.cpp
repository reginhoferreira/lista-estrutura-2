#include <iostream>
#include <locale>
#include <cstring>
#include <string.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Data
{
	int dia;
	int mes;
	int ano;
};
struct Pessoa
{
	string nome;
	Data DtNascimento;
	
};

int main() {
	setlocale(LC_ALL,"Portuguese");
	int aux;
	Pessoa pessoa[4];
	cout<<"Para começar, aperte qualquer tecla: \n";
	for(int i=0; i<3; i++){
		
		cin.ignore();
		cout <<"insira o "<<i+1<<"º nome: \n";
		getline(cin,pessoa[i].nome);
		cout <<"insira o dia do nascimento: \n";
		cin >>pessoa[i].DtNascimento.dia;
		cout <<"insira o mes do nascimento: \n";
		cin >>pessoa[i].DtNascimento.mes;
		cout <<"insira o ano do nascimento: \n";
		cin >>pessoa[i].DtNascimento.ano;
		cout <<"------------------------------- \n";																
	}
	for(int i=0; i<3; i++)
	{
		cout<<pessoa[i].nome<<endl;
		cout <<"nasceu no dia: "<<pessoa[i].DtNascimento.dia<<endl;
		cout <<"no mês: "<<pessoa[i].DtNascimento.mes<<endl;
		cout <<"no ano: "<<pessoa[i].DtNascimento.ano<<endl;
		cout <<"------------------------------------\n";
	}
	for(int i=0; i<3; i++)
	{
		if(pessoa[i].DtNascimento.ano <pessoa[i].DtNascimento.ano)
		{
		aux=pessoa[i].DtNascimento.ano;
		aux++;
		}
		cout <<"o mais velho é"<<pessoa[i].nome<<"ele nasceu em "<<pessoa[i].DtNascimento.ano<<endl;
	}

	return 0;
}
