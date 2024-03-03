#include <string>
#include <iostream>
using namespace std;

int main(){
	string diaInicial, diaFinal, horarioInicial, horarioFinal;
	//ler as strings
	getline(cin, diaInicial);
	getline(cin, horarioInicial);
	getline(cin, diaFinal);
	getline(cin, horarioFinal);

	int dia = stoi(diaFinal.substr(4)) - stoi(diaInicial.substr(4));
	int hora = stoi(horarioFinal.substr(0,2)) - stoi(horarioInicial.substr(0,2));
	int minuto = stoi(horarioFinal.substr(5,2)) - stoi(horarioInicial.substr(5,2));
	int segundo = stoi(horarioFinal.substr(10,2)) - stoi(horarioInicial.substr(10,2));

	if(segundo < 0){ //se segundo for negativo, soma com 60 e diminui em 1 o minuto
		segundo += 60;
		minuto--;
	}
	if(minuto < 0){//se minuto for negativo, soma com 60 e diminui em 1 a hora
		minuto += 60;
		hora--;
	}
	if(hora < 0){//se hora for negativo, soma com 24 e diminui em 1 o dia
		hora += 24;
		dia--;
	}
	//dia nunca vai ser negativo
	cout << dia << " dia(s)" << endl;
	cout << hora << " hora(s)" << endl;
	cout << minuto << " minuto(s)" << endl;
	cout << segundo << " segundo(s)" << endl;
	
	return 0;
}
