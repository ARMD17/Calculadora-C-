#include <iostream>

using namespace std;

int main() {
	cout << "======CALCULADORA======";
	
	float a,b,c;
	float op;
	
	cout << "\n -.Suma";
	cout << "\n -.Resta";
	cout << "\n -.Multiplicacion";
	cout << "\n -.Division";
	
	cout << "\n Elija una opcion (1-4): ";
	cin >> op;
	
	cout << "\n Digite el primer numero: ";
	cin >> a;
	
	cout << "\n Digite el segundo numero: ";
	cin >> b;
	
	if (op = 1) {
		c = a + b;
		cout << "\n Resultado: "<<c;
	} else {
		if (op = 2) {
			c = a - b;
			cout << "\n Resultado: "<<c;
		} else {
			if (op = 3) {
				c = a * b;
				cout << "\n Resultado: "<<c;
			} else {
				if (op = 4) {
					c = a / b;
					cout << "\n Resultado: "<<c;
				}	
			}
		}
	}
}
