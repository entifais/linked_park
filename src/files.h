#ifndef files_h
#define files_h
#include <string>
#include "linkedlist.h"
#include <fstream>

class files{
	public:
		linkedlist ll;
		files();
		files(string name);
		linkedlist getData();
		void loadData(linkedlist data);
		~files();
	private:
		string name;

};
#endif