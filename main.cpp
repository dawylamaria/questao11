#include <iostream>

/* Q11 */
using namespace std;

int main(int argc, char** argv) {
	double salario;
	double conversaoReais;

	cout << "Digite seu salario em dolar:" << endl;
	
	cin >> salario;
	
	conversaoReais = salario * 4.80;
	
	cout << "Salario em reais:" << conversaoReais << endl;
	system("pause");
	return 0;
}
