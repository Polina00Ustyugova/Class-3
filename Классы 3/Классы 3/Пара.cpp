#include "Pair.h"
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	Pair a;//����������� ��� ����������
	Pair b; //����������� ��� ����������
	Pair c; //����������� ��� ����������
	cout << "���� �" << endl; 
	cin >> a;//���� ����������
	cout << "���� b " << endl;
	cin >> b;//���� ����������
	a = a - b;
	cout << a << endl;//����� ����������
	cout << "a + 4 = " << a + 4 << endl; //����� ����������
	cout << "b + 4.5 = " << b + 4.5 << endl; //����� ����������
}