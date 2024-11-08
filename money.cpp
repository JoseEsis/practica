#include<iostream>
using namespace std;


class Ahorro {
	private:
		double saldoInicial; 
	public:
		Ahorro(double);
		void ahorroD(double);
		void retirarDinero(double);
		void mostrarAhorro();	
};

Ahorro::Ahorro(double cantidadAhorrada)
{
	
	if(cantidadAhorrada<0)
	{
		saldoInicial = 150;
	}
	else
	{
		saldoInicial = cantidadAhorrada;
	}
}

void Ahorro::ahorroD(double cantidadAhorrada)
{
	saldoInicial = saldoInicial + cantidadAhorrada;
	cout<<"Al momento tienes un ahorro de "<<"$ "<<saldoInicial<<" pesos"<<endl;
}


void Ahorro::retirarDinero(double cantidadAhorrada)
{
	
	if(cantidadAhorrada>saldoInicial)
	{
		cantidadAhorrada = saldoInicial;
		cout<<"Al momento tienes un ahorro de "<<"$ "<<saldoInicial<<" pesos"<<endl;
		
	}
	saldoInicial = saldoInicial - cantidadAhorrada;
	cout<<"Has retirado "<<"$ "<<cantidadAhorrada<<" pesos"<<endl;
	
	
}

void Ahorro::mostrarAhorro()
{
	
	cout<<"Al momento tienes un ahorro de "<<"$ "<<saldoInicial<<" pesos"<<endl;
}



int main()
{
	
	double cantidadAhorrada;	
	cout<<"Dinero inicial: "; cin>>cantidadAhorrada;
	
	Ahorro dineroAhorro(cantidadAhorrada);
	
	dineroAhorro.mostrarAhorro();
	dineroAhorro.retirarDinero(50);
	dineroAhorro.mostrarAhorro();
	dineroAhorro.ahorroD(100);
	dineroAhorro.retirarDinero(100);
	dineroAhorro.mostrarAhorro();

	
	
	
	return 0;
	
}