
#include<iostream>
#include<iomanip>
#include<string>
#include<stdlib.h>
#include<stddef.h>
#include<sstream>

#define SIZE_OF_ARRAY(ary) sizeof(ary) /sizeof(*ary)


using namespace std;

string int2str(int &);

void randStr(string* b, int num);

//string randStr(string &);

int main()
{
	
	/*
	cout << "Hello World!\n";
	
	int num1 = 123;
	double num2 = 123.456;
	char ch1 = 'A';
	double num3;

	num3 = num1 + num2;
	
	
	

	double dSizeNum = sizeof(double);
	int iSizeNum = sizeof(int);
	
	cout << (int)num3;
	cout << "\n";
	cout << (double)num3;
	cout << "\n";
	cout << ch1;
	cout << "\n";
	cout << dSizeNum;
	cout << "\n";
	cout << iSizeNum;
	cout << "\n";
	cout << "\n";

	int a = 0;
	cout << a;
	cout << "\n";
	a += 5;
	cout << a;
	cout << "\n";
	a++;
	cout << a;
	cout << "\n";
	a /= 3;
	cout << a;
	cout << "\n";
	a *= 5;
	cout << a;
	cout << "\n";
	a -= 4;
	cout << a;
	cout << "\n";
	a %= 3;
	cout << a;
	cout << "\n";
	cout << "\n";

	a = 0;
	int b;
	a += 10;
	cout << a;
	cout << "\n";
	b = a++;
	cout << b;
	cout << "\n";
	b = ++a;
	cout << b;
	cout << "\n";
	b = a--;
	cout << b;
	cout << "\n";
	b = --a;
	cout << b;
	cout << "\n";
	cout << "\n";

	double x = 51.1;
	cout << fixed << setprecision(3) << 3.1234 << endl;
	cout.unsetf(ios::fixed);
	cout << x << endl;
	*/
	

	//char nameA[5];
	//char nameB[5];
	//cin >> nameA;
	//cin.ignore();
	//cin.getline(nameB, 5);
	//cout << nameA << endl <<nameB << endl;
	/*
	int *ptr = new int(100);
	cout << "空間位置:" << ptr << endl;
	cout << "空間儲存值：" << *ptr << endl;
	
	*ptr = 200;
	cout << "空間位置:" << ptr << endl;
	cout << "空間儲存值：" << *ptr << endl;

	delete ptr;

	int size, i;

	cout << "請輸入個數 : ";
	cin >> size;
	ptr = new int[size];

	cout << "請輸入內容:" << endl;
	for (i = 0; i < size; i++) {
		cout << "ptr[" << i << "] = ";
		cin >> ptr[i];
	}
	for ( i = 0; i < size; i++)
	{
		cout << "ptr[" << i << "] = " << ptr[i] << endl;
		cout << "*ptr[" << i << "] = " << *ptr << endl;
	}
	delete[]ptr;

	cin >> i;
	*/
	string txt1;

	txt1 = "Jan ";
	txt1 += "harry";
	cout << txt1 << endl;
	cout << endl;

	
	string s[10];
	int n;

	for ( n = 0; n < SIZE_OF_ARRAY(s); n++)
	{
		string changS;
		changS = int2str(n);
		s[n] = changS;
	}

	randStr(s, 10);

	for (size_t i = 0; i < SIZE_OF_ARRAY(s); i++)
	{
		cout << s[i] << endl;
	}
	



	cin.get();
	
	

	return 0;
}

void randStr(string* b, int num) {

	for (size_t i = 0; i < num; i++)
	{
		int j = rand() % num;
		string tmp = b[i];
		b[i] = b[j];
		b[j] = tmp;
	}


}




string int2str(int &i) {

	string s;
	stringstream si(s);

	si << i;
	
	return si.str();
}

