#include <iostream>
#include "tools.h"
using namespace std;
int main(){
	bool a=true;
	cli interface;
	interface.banner();
	interface.options();
	string in;cin>>in;
	files file;
	while(a){
		if(in=="1" || in=="add"){
		}
		else if(in=="2" || in=="delete"){
		}
		else if(in=="3" || in=="view"){
				file.read2ll("data.txt");
		}
		else if(in=="q" || in=="exit"){
				a=false;
				cout<<"Bye bye baby"<<endl;
				break;
		}


		
	}
}