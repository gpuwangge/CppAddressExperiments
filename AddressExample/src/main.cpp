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
	cout<<"&a = " << &a << endl;
	cout<<"*p_int = " << *p_int <<endl;
	cout<<"p_int = " << p_int <<endl;
	

    return 0;
}