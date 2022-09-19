#include "linkedlist.h"
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
linkedlist::add(string username,string password){
	pair<string,string> node;
	node.frist=username;
	node.second=password;
	this->linklist.push_back(node);
}
linkedlist::del(int pos){
	string username=this->linklist[pos].frist;
	this->linklist.erase(this->linklist.begin() + pos);
	return username
}

linkedlist::print(){
	for (int i = 0; i < ; ++i){
		cout<<"username:"<<this->linklist[i].frist<<endl;
		cout<<"password:"<<this->linklist[i].second<<endl;
	}
}
linkedlist::search(int pos){
	string query="username:\t"this->linklist[pos].frist+"\tpassword:\t"+this->linklist[pos].second;
	return query;
}
linkedlist::printWithStyle(){
	nodestryle(this->linklist[0].frist,this->linklist[0].second);
	for (int i = 1; i < ; ++i){
		cout<<"\t\t|"<<endl
		cout<<"\t\t|"<<endl
		cout<<"\t\tV"<<endl
		nodestryle(this->linklist[i].frist,this->linklist[i].second);
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