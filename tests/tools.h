#include <iostream>
#include <fstream>
#include "hash-library/sha256.h"

using namespace std;
// change like techar say
typedef struct linklist {
  string username;
  string password;
  linklist *next;
};

class files{
	public:
	linklist read2ll(string name){
		linklist ll;
		fstream file(name);
		//fstream infile(name);
		string line,username,password;
		ll.username="username";
		ll.password="password";
		ll.next= new linklist();
		ll=*ll.next;
		string str;
		int pos;
		while(getline(file,str)){//){infile>>username>>password){
			//cout<<"while";
			pos=str.find(" ");
			username=str.substr(0,pos);
			password=str.substr(pos+1,str.length());
			//cout<<username<<"\t"<<password<<endl;
			ll.username=username;
			ll.password=password;
			cout<<ll.username<<"\t"<<ll.password<<endl;
			ll.next= new linklist();
			ll=*ll.next;
		}

		return ll; 
	}
		void readf(string name){
		string line,username,password,txt;
		ifstream myfile(name);
		//myfile.open(name);
		if(myfile.is_open()){
			do{
				myfile>>line;
				cout<<line<<endl;
				//string txt=txt+line;
			}while(!myfile.fail());
		}else{
		cout<<"error file not open";
		}
	}
};
class linkedlisttools{
public:
	void printll(linklist ll){
		string username,password;
		cout<<ll.username;
		cout<<ll.next;
		do{
			username=ll.username;
			password=ll.password;
			cout<<username<<"\t"<<password<<endl;
			
		}while(ll.next!=NULL);
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



};