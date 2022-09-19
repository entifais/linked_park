#include "linkedlist2.h"
#include <iostream>
#include <string>
#include <algorithm>
linkedlist::linkedlist(){
	std::vector<pair> linklist();
	this->linklist;
}
linkedlist::~linkedlist(){
	for (int i=0;i<this->linklist.size();++i){
		this->linklist.pop_back();
	}
}
//mmm for one and more
linkedlist::add(string name,string password){
	pair<string,string> node;
	node.frist=name;
	node.second=password;
	this->linklist.push_back(node);
}
linkedlist::del(int pos){
	
}

linkedlist::print(){
	string username;
	string password;
	node *tmp1=this->head;
	while (tmp1!=NULL) {

        cout<<"username:"<<tmp1->dato1<<endl;
        cout<<"password:"<<tmp1->dato2<<endl;

        tmp1 = tmp1->sgte;
    }
}
linkedlist::printWithStyle(){
	node *tmp1=this->head;
	while (tmp1!=NULL) {
		nodestryle(tmp1->dato1,tmp1->dato2);
        tmp1 = tmp1->sgte;
    }
}
linkedlist::nodestryle(string u,string p){

	cout<<"-------------------"<<endl
	cout<<"|\t\t\t\t\t"<<endl
	cout<<"|\t*"<<u<<endl
	cout<<"|"<<endl
	cout<<"|\t*"<<p<<endl
	cout<<"|"<<endl
	cout<<"-------------------"<<endl

}