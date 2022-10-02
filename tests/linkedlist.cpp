#include "linkedlist.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//only std for string
linkedlist::linkedlist(){
	//vector<pair<string,string>> linklist;
	//this->linklist=linklist;
}
linkedlist::~linkedlist(){
	for (int i=0;i<this->linklist.size();++i){
		this->linklist.pop_back();
	}
}
//mmm for one and more
void linkedlist::add(string username,string password){
	pair<string,string> node;
	node.first=username;
	node.second=password;
	this->linklist.push_back(node);
}
string linkedlist::del(int pos){
	string username=this->linklist[pos].first;
	this->linklist.erase(this->linklist.begin() + pos);
	return username;
}

void linkedlist::print(){
	for (int i = 0; i < this->linklist.size(); ++i){
		cout<<"username:"<<this->linklist[i].first<<endl;
		cout<<"password:"<<this->linklist[i].second<<endl;
	}
}
string linkedlist::search(int pos){
	string query="username:\t"+this->linklist[pos].first+"\tpassword:\t"+this->linklist[pos].second;
	return query;
}
void linkedlist::printWithStyle(){
	nodestryle(this->linklist[0].first,this->linklist[0].second);
	for (int i = 1; i <this->linklist.size(); ++i){
		cout<<"\t\t|"<<endl;
		cout<<"\t\t|"<<endl;
		cout<<"\t\tV"<<endl;
		nodestryle(this->linklist[i].first,this->linklist[i].second);
	}
}
void linkedlist::nodestryle(string u,string p){
	cout<<"-------------------"<<endl;
	cout<<"|\t\t\t\t\t"<<endl;
	cout<<"|\t*"<<u<<endl;
	cout<<"|"<<endl;
	cout<<"|\t*"<<p<<endl;
	cout<<"|"<<endl;
	cout<<"-------------------"<<endl;
}
vector<pair<string,string>> linkedlist::getlinklist(){
	return this->linklist;
}

