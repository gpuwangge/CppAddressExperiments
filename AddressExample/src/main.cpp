// #include "../include/infra.h"
// #include "../include/blockA.h"
// #include "../include/blockB.h"
// #include "../include/axi.h"
// #include "../include/port.h"

#include <iostream>
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

	cout<<"a = "<< a << endl;
	//cout<<"&a = " << &a << endl;
	printf("&a = %p\n", &a);
	cout<<"sizeof(a) = " << sizeof(a) << endl;
	cout<<"typeid(a).name() = " << typeid(a).name() << endl;
	
	cout<< endl;
	cout<<"*p_int = " << *p_int <<endl;
	//cout<<"p_int = " << p_int <<endl;
	printf("p_int = %p\n", p_int);
	cout<<"sizeof(p_int) = " << sizeof(p_int) << endl;
	cout<<"typeid(p_int).name() = " << typeid(p_int).name() << endl;

    return 0;
}