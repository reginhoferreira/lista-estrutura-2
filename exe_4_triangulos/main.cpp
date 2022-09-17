#include <iostream>
#include <locale>
#include <math.h>
#include <string.h>

using namespace std;

typedef struct Triangulo
{
	double ladoD,ladoE,ladoF;
	
}t_triangulo;

t_triangulo trianguloB();

t_triangulo trianguloB()
{

t_triangulo auxB;

		for(int i=0; i<2; i++)
		{	
			cout <<"informe o tamanho do 1º lado do triangulo \n";
			cin >>auxB.ladoD;
			cout <<"informe o tamanho do 2º lado do triangulo \n";
			cin >>auxB.ladoE;
			cout <<"informe o tamanho do 3º lado do triangulo \n";
			cin >>auxB.ladoF;
			if(auxB.ladoD==auxB.ladoE && auxB.ladoE==auxB.ladoF)
			{
			cout<<"Triagulo equilatero \n";
			}else if(auxB.ladoD==auxB.ladoE || auxB.ladoD==auxB.ladoF || auxB.ladoE==auxB.ladoF)
			{
				cout<<"Triangulo Isóceles \n";
			}else
			{
				cout <<"Triagulo escaleno \n";
			}
			
		}
					
			
			return auxB;
	}

int main() {
	setlocale(LC_ALL,"Portuguese");

	trianguloB();
	return 0;
}
