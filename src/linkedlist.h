#ifndef linkedlist_h
#define linkedlist_h
#include <string>
using namespace std;
class linkedlist{
	public:
		linkedlist(){};
		string search(int pos){};
		void print(){};
		void printWithStyle(){};
		void add(string name,string password){};
		string del(int pos){};//work like pop
		~linkedlist(){}
	private:
		void nodestryle(string u,string p){}

};
#endif