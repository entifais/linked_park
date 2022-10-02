#include <iostream>
#include "cli.h"
#include "files.h"
#include "hash-library/sha256.h"
#include "linkedlist.h"
//#define linkedlist

using namespace std;
string FILENAME="data.txt";

int main(){
	cli interface;
	SHA256 sha256;
	files f=new files(FILENAME);
	//files f;
	linkedlist ll=f.getData();
	int input;
	do{
		interface.clear();
		interface.banner();
		interface.options();
		cin>>input;
		if(input==1){
			cout<<"enter your username\n"<<endl;
			string username;cin>>username;
			cout<<"enter your password\n"<<endl;
			string password;cin>>password;
			password=sha256(password);
			ll.add(username,password);
			cout<<"data was added"<<endl;
			//ingresar
		}
		if(input==2){
			cout<<"enter postion to delete\n"<<endl;
			int pos;cin>>pos;
			ll.del(pos);
			cout<<"data was delete"<<endl;
		}
		if(input==3){
			ll.printWithStyle();
		}
		if(input==4){
			cout<<"enter postion to search\n"<<endl;
			int pos;cin>>pos;
			cout<<ll.search(pos)<<endl;
		}
		if(input==5){
			f.loadData(ll);
			cout<<"data was save"<<endl;
		}
	}while(input!=0);

	return 0;
}