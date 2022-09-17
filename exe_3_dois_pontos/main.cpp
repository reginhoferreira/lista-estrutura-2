#include <iostream>
#include <string.h>
#include <math.h>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Distancia
{
	double xa;
	double xb;
	double ya;
	double yb;
	double cal;
}d_Distancia;
//avisa ao computador da entrada da funçao
d_Distancia calculo();
//função
d_Distancia calculo()
{
d_Distancia aux; 
	aux.xa=-3;
	aux.xb=2;
	aux.ya=-11;
	aux.yb=1;
	aux.cal=sqrt(pow(aux.xb-aux.xa,2)+pow(aux.yb-aux.ya,2));
return aux;
}

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//variavel pontos recebe a função calculo
	d_Distancia pontos; 
	pontos=calculo();
	cout<<"O calculo de dois pontos é igual a:"<<pontos.cal<<endl;
	return 0;
}
