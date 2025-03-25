#include <iostream>
using namespace std;

double mem;
double c;
bool mem_used;
double add(double a, double b) {
	double c = 0;
	c = a + b;
	return c;
}
double sub(double a, double b) {
	double c = 0;
	c = a - b;
	return c;
}
double tim(double a, double b) {
	double c = 0;
	c = a * b;
	return c;
}
double div(double a, double b) {
	double c = 0;
	if (b == 0) {
		return c;
	}
	c = a / b;
	return c;
}
double mod(double a, double b) {
	double c = 0;
	c = a - (int)(a / b) * b;
	return c;
}

void memory(int m) {
	if (m == 0) {
		mem = 0.0;
		mem_used = false;
	}
	else if (m == 1) {
		mem = 0.0;
		mem = c;
		mem_used = true;
	}
	
}
void menu(int m) {
	double a;
	double b;
	if (m == 2) {
		cin >> a >> b;
		cout << add(a, b);
	}
	else if (m == 3) {
		cin >> a >> b;
		cout << sub(a, b);
	}
	else if (m == 4) {
		cin >> a >> b;
		cout << tim(a, b);
	}
	else if (m == 5) {
		cin >> a >> b;
		cout << div(a, b);
	}
	else if (m == 6) {
		cin >> a >> b;
		cout << mod(a, b);
	}
}



class Kalkulator
{
private:
	double mem;
	double c;
	bool mem_used;
	double a, b;
public:
	void menu(int m);
	void memory(int m);
	double suma(double a, double b) {
		return add(a, b);
	};
	double roznica(double a, double b) {
		return sub(a, b);
	};
	double iloczyn(double a, double b) {
		return tim(a, b);
	};
	double iloraz(double a, double b) {
		return div(a, b);
	};
	double modulo(double a, double b) {
		return mod(a, b);
	};
	/*double add(double a, double b);
	double sub(double a, double b);
	double tim(double a, double b);
	double div(double a, double b);
	double mod(double a, double b);
	*/
};


int main()
{
	int m;

	//Wybór działania:
	//Czyszczenie pamięci -> (0)
	//Dodawanie do pamięci -> (1)
	//Dodawanie -> (2)
	//Odejmowanie -> (3)
	//Mnożenie -> (4)
	//Dzielenie -> (5)
	//Modulo -> (6)
	

	cin >> m;
	menu(m);
	

	return 0;
}
