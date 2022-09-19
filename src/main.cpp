#include <iostream>
#include "cli"
//#define linkedlist
#ifdef linkedlist
#include "linkedlist.h"
#else
#include "linkedlist2.h"
#endif

using namespace std;
int main(){
	cli interface;
	int input;
	#ifdef linkedlist

	#else

	#endif
	do{
		interface.clear()
		interface.banner();
		interface.options();
		cin>>input;
		if(input==1){
			//ingresar
		}
		if(input==2){
			
		}
		if(input==3){
			
		}
		if(input==4){
			
		}
		if(input==5){
			
		}
	}while(input!=0);

	return 0;
}