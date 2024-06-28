#include "../include/infra.h"
#include "../include/blockA.h"
#include "../include/blockB.h"
#include "../include/axi.h"
#include "../include/port.h"

int main(){
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

    return 0;
}