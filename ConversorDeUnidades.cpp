#include <iostream>
using namespace std;
int main(){
	int escolha;
	double resultado1, resultado2, resultado3, numero;
	do{
	cout << " Qual medida de comprimento gostaria de usar: \n Metros, pressione 1. \n Pés, pressione 2. \n Milhas, pressione 3.\n";
	cin >> escolha;
	cin.ignore();
	switch(escolha){
	case 1:
		cout << "Quantos metros (M)? \n";
		cin >> numero;
		cin.ignore();
		resultado1 = numero * 3.28083989501;
		resultado2 = numero / 1609.344;
		cout << "Em pés: " << resultado1 <<" Ft. \nEm milhas: " << resultado2 <<" Mi.";
		break;
	case 2:
		cout << "Quantos pés (Ft)? \n";
		cin >> numero;
		resultado1 = numero * 0.3048;
		resultado2 = numero / 5280;
		cout << "Em metros: " << resultado1 << " M. \nEm milhas: " << resultado2 << " Mi.";
		break;
	case 3:
		cout << "Quantas milhas (Mi)? \n";
		cin >> numero;
		resultado1 = numero * 1609.344;
		resultado2 = numero * 5280;
		resultado3 = numero * 1.609344;
		cout << "Em metros: " << resultado1 << " M. \nEm Kilômetros: " <<  resultado3 << " Km.\nEm pés: " << resultado2 << " Ft.";
		break;
	default:
		cout << "Error. \nTente novamente.\n ";
		break;
	  }
	}while(escolha > 3);
	return 0;

}
