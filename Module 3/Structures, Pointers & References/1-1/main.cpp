
#include <iostream>
using namespace std;
int main() {

	int selection;
	cout<<"Введите номер задачи (Если не из практической — введите 0)"<<endl;
	cin>>selection;
	
	switch (selection)
	{
	case 0:
		{
		cout<<"Написать программу, в которой инициализируются переменные ‘a’ и ‘b’ с типом данных int и указатели *d и *e. При помощи указателей вывести на консоль значения переменных."<<endl;
		int a = 5;
		int b = 10;
		int* d = &a;
		int *e = &b;
		std::cout<<a<<'\n'<<b<<'\n'<<d<<'\n'<<e<<'\n'<<*d<<'\n'<<*e;
		break;
		}

	case 1:
		{
		cout<<"Написать программу, в которой инициализируются переменные ‘a’ и ‘b’ с типом данных int и указатели *d и *e. При помощи указателей вывести на консоль значения переменных."<<endl;
		int a = 5;
		int b = 10;
		int* d = &a;
		int *e = &b;
		std::cout<<a<<'\n'<<b<<'\n'<<d<<'\n'<<e<<'\n'<<*d<<'\n'<<*e;
		break;
		}

	case 2:
		{
		cout<<"Написать программу, в которой инициализируются переменные ‘s’ и ‘x’ с типом данных int и указатели *d и *e. В переменные ‘s’ и ‘x’ записываются произвольные значения. При помощи указателей вывести на консоль значения переменных."<<endl;
		int s = 5;
		int x = 10;
		int* d = &s;
		int *e = &x;
		std::cout<<s<<'\n'<<x<<'\n'<<d<<'\n'<<e<<'\n'<<*d<<'\n'<<*e;
		break;
		}

	case 3:
		{
		cout<<"Написать программу, в которой инициализируются переменные ‘q’, ‘w’ и ‘res’ с типом данных int и указатель *e. В переменные ‘q’ и ‘w’ записываются произвольные значения, после чего в переменную ‘res’ записывается сумма значений переменных ‘q’ и ‘w’.  При помощи указателя *e вывести на консоль сумму."<<endl;
		int q = 5;
		int w = 10;
		int res;
		res = q+w;
		int *e = &res;
		std::cout<<q<<'\n'<<w<<'\n'<<res<<'\n'<<e<<'\n'<<*e;
		break;
		}

	case 4:
		{
		cout<<"Написать программу, в которой с клавиатуры вводится массив чисел с именем ‘x’ и 3 элементами. Вывести данный массив на консоль и отдельно вывести только первый элемент массива."<<endl;
		const int x = 3;
		int nums[x];
		for (int *ptr{nums}; ptr<=&nums[x-1];ptr++) {
			cin>>*ptr;
		}
		for (int *ptr{nums}; ptr<=&nums[x-1];ptr++) {
			cout<<"Адрес: "<<ptr<<"\tЗначение: "<<*ptr<<endl;
		}
		int *ptr{nums};
		cout<<*ptr;
		break;
		}

	case 5:
		{
		cout<<"Написать программу, в которой с клавиатуры вводится массив чисел с именем ‘w’ и 5 элементами. Вывести данный массив на консоль и отдельно вывести только первый элемент массива."<<endl;
		const int w = 5;
		int nums[w];
		for (int *ptr{nums}; ptr<=&nums[w-1];ptr++) {
			cin>>*ptr;
		}
		for (int *ptr{nums}; ptr<=&nums[w-1];ptr++) {
			cout<<"Адрес: "<<ptr<<"\tЗначение: "<<*ptr<<endl;
		}
		int *ptr{nums};
		cout<<*ptr;
		break;
		}

	default:
		break;
	}
}