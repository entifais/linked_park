#ifndef linkedlist_h
#define linkedlist_h
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class linkedlist{
	public:
		vector<pair<string,string>> linklist;
		linkedlist();
		string search(int pos);
		void print();
		void printWithStyle();
		void add(string name,string password);
		string del(int pos);//work like pop
		~linkedlist();
		vector<pair<string,string>> getlinklist();
	private:
		void nodestryle(string u,string p);

};
#endif