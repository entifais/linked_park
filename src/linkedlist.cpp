#include <iostream>
#include "linkedlist.h"

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
		return;
		//error
	}
	if(pos>i;){
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

