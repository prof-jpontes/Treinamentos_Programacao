#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float valor, soma = 0;
	int contador = 0; 
	for(int i = 0; i < 6; i++){
	    cin >> valor;
	    if(valor > 0){
	        soma += valor;
	        contador++;
	    }
	}
    cout << fixed << setprecision(1);
	cout << contador << " valores positivos\n" << soma/contador << endl;
	return 0;
}