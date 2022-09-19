#include "files.h"
#include "linkedlist"
#include <fstream>
files::files(){};
files::files(string name){
	#ifdef linkedlist
	linkedlist ll= new linkedlist();
	this->ll=ll;
	#else
	#endif
	int i=0;
	string line,username,password;
	ifstream myfile(name);
	//myfile.open(name);
	if(myfile.is_open()){
		do{
			myfile>>line;
			cout<<line<<endl;
			if (i%2==0){
				if(i!=0){
					#ifdef linkedlist
					this->ll.add(,string name,string password);
					node *newnode=new node(username,password);
					#else
					#endif
				}
				username=line;
			}else{
				password=line;
			}
			i++;
		}while(!myfile.fail());
	}else{
	cout<<"error file not open";
	}
};
files::getData(){};
	return this->ll;
files::loadData(linkedlist data){};
files::~files(){
	myfile.close();
}