#include "linkedlist.h"
#include <iostream>
#include <string>

node::node(){}
node::node(string d1,string d2){
	this->dato1=d1;
	this->dato2=d2;
	this->sgte=NULL;
}
node::~node(){
	this->dato1="";
	this->dato2="";
	this->sgte=NULL;
}
linkedlist::linkedlist(){
	this->head=NULL;
}
linkedlist::~linkedlist(){
	this->head=NULL;
}

linkedlist::add(string name,string password){
	node *newnode=new node(name,password);
	if(this->head==NULL){
		this->head=newnode;

	}else{
		node *tmp=this->head;
		while(tmp->sgte!=NULL){//tmp->sgte?
			tmp=tmp->sgte;
		}
		tmp->sgte=newnode;
	}
}
linkedlist::del(int pos){
	Node *tmp1=this->head;
	int i=0;
	if(this->head==NULL){
		cout<<"[ERROR] can't remove node from an empty linked list\nadds items to the list"<<endl;
		return;
	}
	if(pos>i;){
		cout<<"[ERROR] IndexError: list index out of range\nadds items to the list"<<endl;
		return;
		//error
	}

	while (tmp1!=NULL && i<pos-1) {
        temp1 = tmp1->sgte;
        i++;
    }
    node *next = tmp->sgte->sgte;
    free(tmp->sgte)
    tmp->sgte=next;
	return this->name
}

linkedlist::print(){
	this->head=NULL;
}

linkedlist::printWithStyle(){
	this->head=NULL;
}