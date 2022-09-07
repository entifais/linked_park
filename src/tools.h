#include <iostream>
#include <fstream>
using namespace std;
typedef struct linklist {
  string username;
  string password;
  node *next;
};

class files{
	public:
	void read2ll(string name){
		ll=*root;
		ifstream usersFile; usersFile.open(name);
		if ( usersFile.is_open() ) {
			String line,user,password;
			int pos;
			while ( usersFile ) {
				line = usersFile.get();
				pos=line.find(" ");
				username=line.substr(0,pos)
				password=line.substr(pos,line.length())
				cout << username;
			}
		}
	}
};

class cli{//cli interface tool
public:
	void banner(){
		  cout<<" _     _       _            _   ____            _    "<<endl;
		  cout<<"| |   (_)_ __ | | _____  __| | |  _ \ __ _ _ __| | __"<<endl;
		  cout<<"| |   | | '_ \| |/ / _ \/ _` | | |_) / _` | '__| |/ /"<<endl;
		  cout<<"| |___| | | | |   <  __/ (_| | |  __/ (_| | |  |   < "<<endl;
		  cout<<"|_____|_|_| |_|_|\_\___|\__,_| |_|   \__,_|_|  |_|\_\ "<<endl;
		  cout<<"|_____|_|_| |_|_|\_\___|\__,_| |_|   \__,_|_|  |_|\_\ "<<endl<<endl;
		  cout<<"======================================================"<<endl;
	}
	void options(){
		cout<<"1) add user "<<endl;
		cout<<"2) delete user"<<endl;
		cout<<"3) visualise"<<endl;
	}
	void add(){

	}

};