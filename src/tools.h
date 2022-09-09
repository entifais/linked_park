#include <iostream>
#include <fstream>
#include "hash-library/sha256.h"

using namespace std;
typedef struct linklist {
  string username;
  string password;
  linklist *next;
};

class files{
	public:
	linklist read2ll(string name){
		linklist ll;
		//fstream usersFile; usersFile.open(name);
		cout<<"in f";
		fstream infile(name);
		string line,username,password;
		ll.username="username";
		ll.password="password";
		ll.next= new linklist();
		while(infile>>username>>password){


		}
		/*if ( usersFile.is_open() ) {
			int pos;
			while ( usersFile ) {
				line = usersFile.get();
				pos=line.find(" ");
				username=line.substr(0,pos);
				password=line.substr(pos,line.length());
				cout << username;
			}
		}*/
		return ll; 
	}
};

class cli{//cli interface tool
public:
	void banner(){
		  cout<<" _     _       _            _   ____            _    "<<endl;
		  cout<<"| |   (_)_ __ | | _____  __| | |  _ \\ __ _ _ __| | __"<<endl;
		  cout<<"| |   | | '_ \\| |/ / _ \\/ _` | | |_) / _` | '__| |/ /"<<endl;
		  cout<<"| |___| | | | |   <  __/ (_| | |  __/ (_| | |  |   < "<<endl;
		  cout<<"|_____|_|_| |_|_|\\_\\___|\\__,_| |_|   \\__,_|_|  |_|\\_\\ "<<endl;
		  cout<<"|_____|_|_| |_|_|\\_\\___|\\__,_| |_|   \\__,_|_|  |_|\\_\\ "<<endl<<endl;
		  cout<<"======================================================"<<endl;
	}
	void options(){
		cout<<"1) add user "<<endl;
		cout<<"2) delete user"<<endl;
		cout<<"3) visualise"<<endl;
		cout<<"q) end"<<endl;
	}
	void add(){
	}
	void del(){
	}
	void dataprint(linklist &ll){
		while(ll.next){
			cout<<ll.username<<"\t"<<ll.password<<endl;
		}
	}


};