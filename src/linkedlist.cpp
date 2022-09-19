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
//mmm for one and more
linkedlist::add(linkedlist &head,string name,string password){
	node *newnode=new node(name,password);
	if(this->head==NULL){
		this->head=newnode;
	}else{
		head->sgte=newnode;
		/*node *tmp=this->head;
		while(tmp->sgte!=NULL){//tmp->sgte?
			tmp=tmp->sgte;
		}
		tmp->sgte=newnode;*/
	}
}
linkedlist::del(int pos){
	node *tmp1=this->head;
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