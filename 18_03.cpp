#include <iostream>
using namespace std;

double mem;
bool mem_used;
double add(double a, double b) {
	double suma = 0;
	suma = a + b;
	return suma;
}
double sub(double a, double b) {
	double roznica = 0;
	roznica = a - b;
	return roznica;
}
double tim(double a, double b) {
	double iloczyn = 0;
	iloczyn = a * b;
	return iloczyn;
}
double div(double a, double b) {
	double iloraz = 0;
	if (b == 0) {
		return iloraz;
	}
	iloraz = a / b;
	return iloraz;
}
double mod(double a, double b) {
	return a - (int)(a / b) * b;
}
void erase() {}
void menu(int m) {
	double a;
	double b;
	if (m == 1){
		cin >> a >> b;
		cout << add(a, b);
	}
	if (m == 2) {
		cin >> a >> b;
		cout << sub(a, b);
	}
	if (m == 3) {
		cin >> a >> b;
		cout << tim(a, b);
	}
	if (m == 4) {
		cin >> a >> b;
		cout << div(a, b);
	}
	if (m == 5) {
		cin >> a >> b;
		cout << mod(a, b);
	}
}

int main()
{
	int m;

	//Wybór działania:
	//Dodawanie -> (1)
	//Odejmowanie -> (2)
	//Mnożenie -> (3)
	//Dzielenie -> (4)
	//Modulo -> (5)
	
	cin >> m;
	menu(m);
	
	return 0;
}
