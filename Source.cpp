#include <iostream>
using namespace std;

double clac(double num1, double num2, char operation) {
	if (num2 == 0 || operation == '/') cout << "������ �� ���� ������!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";

	switch (operation)
	{
	case '+': return num1 + num2;
	case '-': return num1 - num2;
	case '*': return num1 * num2;
	case '/': return num1 / num2;
	case '%': return int(num1) % int(num2);
	case '^': 
	{
		double z = num1;
		for (int i = 1; i < num2; i++) {
			z *= num1;
		};
		return z;
	}
	case '#': return num1 + num2*4;
	default: cout << "�� �� ������";
	}
}
int main() {
	setlocale(0, "");

	for (int i = 0; i < 300; i++)
	{
		cout << "\x1b[" << i << "m"<<i<<"\n";
	}
	double num1;
	double num2;
	char operation;
	cout << "\t\t[-=-]�����������[-=-]\n\n";
	cout << "\t������� ���a����� - ";
	cin >> num1 >> operation >> num2;
	cout << "\n\t��� ����� �� ���� ��������� - " << clac(num1, num2, operation);

	int _; cin >> _;
	return 0;
}