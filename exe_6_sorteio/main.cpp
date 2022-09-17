#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Sorteio
{
	string nome[10]= {"Régis","Paulo","Bento","Eloa","João","Amanda","Daniel","Lucas","aline","Emily"};
	int x;
	int num;
	string n;
}s_sorteio;

s_sorteio Sortear()
{
s_sorteio sorte;
	

	cout<<"digite um número aleatorio entre 0 a 10: \n";
	cin >>sorte.num;
	srand(time(NULL));
	
	sorte.x= rand() % 10;
	sorte.n =sorte.nome[rand()%10];
	if(sorte.num==sorte.x)
	{
		cout<<"Parabens você ganhou!! \n";
		cout<<"A pessoa sorteada foi " <<sorte.n<< " com o numero: " <<sorte.x<< " que você escolheu "<<endl;
	}else
	{
		cout<<"Você errou!! \n";
		cout<<"A pessoa sorteada foi " <<sorte.n<< " com o numero: "<<sorte.x<<endl;
	}
	
	return sorte;
}



int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	
	Sortear();
	return 0;
}
