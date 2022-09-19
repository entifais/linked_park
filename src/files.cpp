#include "files.h"
#include "linkedlist"
#include <fstream>
files::files(){};
files::files(string name){
	linkedlist ll =new linkedlist();
	int i=0;
	string line,username,password;
	ifstream myfile(name);
	this->myfile;
	if(this->myfile.is_open()){
		do{
			this->myfile>>line;
			cout<<line<<endl;
			if (i%2==0){
				if(i!=0){
					this->ll.add(name,password);
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
files::loadData(linkedlist data){
	for(int i=0;i<data.lenght();i++){
		this->myfile<<data[i].frist<<"\n";
		this->myfile<<data[i].second<<"\n";
	}
};
files::~files(){
	this->myfile.close();
}