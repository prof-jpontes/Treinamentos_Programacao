#include <string>
#include <iostream>
using namespace std;

void calcular(int diaI, int horaI, int minI, int segI, int diaT, int horaT, int minT, int segT){
	int segInicio = horaI*3600 + minI*60 + segI;
	int segTermino = horaT*3600 + minT*60 + segT;
	int tempoSeg = segTermino - segInicio;
	if(tempoSeg > 0){
	    cout << diaT-diaI << " dia(s)" << endl;
	}else{
	    cout << diaT-diaI-1 << " dia(s)" << endl;
		tempoSeg += 24*3600;
	}
	cout << tempoSeg/3600 << " hora(s)" <<endl;
	tempoSeg = tempoSeg%3600;
	cout << tempoSeg/60 << " minuto(s)" << endl;
	tempoSeg = tempoSeg%60;
	cout << tempoSeg << " segundo(s)" << endl;

}
int main(){
	string diaInicial, diaFinal, horaInicial, horaFinal;
	getline(cin, diaInicial);
	getline(cin, horaInicial);
	getline(cin, diaFinal);
	getline(cin, horaFinal);
	
	int diaI = stoi(diaInicial.substr(4));
	int horaI = stoi(horaInicial.substr(0,2));
	int minI = stoi(horaInicial.substr(5,2));
	int segI = stoi(horaInicial.substr(10,2));
	int diaF = stoi(diaFinal.substr(4));
	int horaF = stoi(horaFinal.substr(0,2));
	int minF = stoi(horaFinal.substr(5,2));
	int segF = stoi(horaFinal.substr(10,2));
	calcular(diaI, horaI, minI, segI, diaF, horaF, minF, segF);
	
	return 0;
}
