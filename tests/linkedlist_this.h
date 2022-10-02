#ifndef linkedlist_this_h
#define linkedlist_this_h
#include <string>
class node{
	public:
		string dato1;
		string dato2;
		node *sgte;
		node(){};
		node(string d1,string d2){
			this->dato1=d1;
			this->dato2=d2;
			this->sgte=NULL;
		}
		~node(){};
}
class linkedlist{
	node *head;
	public:
		linkedlist(){};
		void print(){};
		void printWithStyle(){};
		void add(string name,string password){};
		string del(int pos){};//work like pop
		~linkedlist(){}
	private:
		void nodestryle(string u,string p){}

};
#endif