// #include "../include/infra.h"
// #include "../include/blockA.h"
// #include "../include/blockB.h"
// #include "../include/axi.h"
// #include "../include/port.h"

#include <iostream>
//#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	/*
	CInfra infra;
	infra.print();
	infra.funcA();
	infra.funcB();
	infra.funcC();

	CBlockA blockA;
	blockA.print();

	CBlockB blockB;
	blockB.print();

	axi::CAXI axi;
	axi.print();

	CPort port;
	port.print();
	*/

	int a = 10;
	int *p_int = &a;
	int **p_p_int = &p_int;

	cout<<"Variable"<< endl;
	printf("a = %i\n", a);
	//cout<<"&a = " << &a << endl;
	printf("&a = %p\n", &a);
	cout<<"sizeof(a) = " << sizeof(a) << endl;
	cout<<"typeid(a).name() = " << typeid(a).name() << endl;
	
	cout<< endl;

	cout<<"Pointer"<< endl;
	cout<<"*p_int = " << *p_int <<endl;
	//cout<<"p_int = " << p_int <<endl;
	printf("p_int = %p\n", p_int);
	cout<<"sizeof(p_int) = " << sizeof(p_int) << endl;
	cout<<"typeid(p_int).name() = " << typeid(p_int).name() << endl;

	cout<< endl;

	cout<<"Pointer points to pointer"<< endl;
	cout<<"**p_p_int = " << **p_p_int <<endl;
	//cout<<"*p_p_int = " << *p_p_int <<endl;
	printf("*p_p_int = %p\n", *p_p_int);
	printf("p_p_int = %p\n", p_p_int);
	cout<<"sizeof(p_p_int) = " << sizeof(p_p_int) << endl;
	cout<<"typeid(p_p_int).name() = " << typeid(p_p_int).name() << endl;

	cout<<endl;

	cout<<"Array"<< endl;
	int array[5] = {1,2,3,4,5};
	cout<<"array[i] = ";
	for(int i = 0; i < 5; i++) cout<<array[i]<<" ";
	cout<<endl;
	cout<<"&array[i] = ";
	for(int i = 0; i < 5; i++) printf("%p ", &array[i]);
	cout<<endl;
	cout<<"sizeof(array) = " << sizeof(array) << endl;
	cout<<"typeid(array).name() = " << typeid(array).name() << endl;

	cout<<endl;

	cout<<"Buffer"<< endl;
	char *buffer = new char[8];
	memset(buffer, 127, 8);
	cout<<"buffer[i] = ";
	for(int i = 0; i < 8; i++) cout<<(int)buffer[i]<<" ";
	cout<<endl;
	cout<<"&buffer[i] = ";
	for(int i = 0; i < 8; i++) printf("%p ", &buffer[i]);
	cout<<endl;
	cout<<"sizeof(buffer) = " << sizeof(buffer) << endl;
	cout<<"typeid(buffer).name() = " << typeid(buffer).name() << endl;
	delete[] buffer;

	cout<<endl;

	//cout<<"Difference of variable and pointer"<< endl;
	//int address_a = &a;//not allawed


    return 0;
}