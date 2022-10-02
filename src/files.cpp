#include "files.h"
#include "linkedlist.h"
#include <fstream>
#include <iostream>
using namespace std;
files::files(){};
files::files(string name){
	this->name=name;
	linkedlist ll;
	int i=0;
	string line,username,password;
	ifstream myfile;
	myfile.open(name);
	this->ll=ll;
	if(!myfile.is_open()){
		do{
			myfile>>line;
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
	myfile.close();
};
linkedlist files::getData(){
	return this->ll;
}
void files::loadData(linkedlist data){
	ofstream file2;
	file2.open(this->name);
	for(int i=0;i<datav.size();i++){
		file2<<datav.dato1; 
		file2<<datav.dato2; 
	}
	file2.close();
};
files::~files(){
	ofstream file2;
	file2.open(this->name);
	for(int i=0;i<ll.size();i++){
		file2 <<this->ll.dato1; 
		file2 <<this->ll.dato2; 
	}
	file2.close();
}