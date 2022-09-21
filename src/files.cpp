#include "files.h"
#include "linkedlist.h"
#include <fstream>
#include <iostream>
using namespace std;
files::files(){};
files::files(string name){
	linkedlist ll;
	int i=0;
	string line,username,password;
	ifstream myfile(name);
	this->myfile=myfile;
	this->ll=ll;
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
linkedlist files::getData(){
	return this->ll;
}
void files::loadData(linkedlist data){
	auto datav=data.getlinklist();
	for(int i=0;i<datav.size();i++){
		this->myfile<<datav[i].first<<"\n";
		this->myfile<<datav[i].second<<"\n";
	}
};
files::~files(){
	this->myfile.close();
}