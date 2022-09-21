#include <string>
#include <iostream>
#include <stdlib.h> 
#include "cli.h"
using namespace std;
void cli::banner(){
		  cout<<" _     _       _            _   ____            _    "<<endl;
		  cout<<"| |   (_)_ __ | | _____  __| | |  _ \\ __ _ _ __| | __"<<endl;
		  cout<<"| |   | | '_ \\| |/ / _ \\/ _` | | |_) / _` | '__| |/ /"<<endl;
		  cout<<"| |___| | | | |   <  __/ (_| | |  __/ (_| | |  |   < "<<endl;
		  cout<<"|_____|_|_| |_|_|\\_\\___|\\__,_| |_|   \\__,_|_|  |_|\\_\\ "<<endl;
		  cout<<"|_____|_|_| |_|_|\\_\\___|\\__,_| |_|   \\__,_|_|  |_|\\_\\ "<<endl<<endl;
		  cout<<"======================================================"<<endl;
}
void cli::options(){
		cout<<"1) add user "<<endl;
		cout<<"2) delete user"<<endl;
		cout<<"3) visualise"<<endl;
		cout<<"4) search"<<endl;
		cout<<"5) save"<<endl;
		cout<<"0) end"<<endl;
}
void cli::clear(){
	#if defined(__linux__) 
		std::system ("clear");
	#elif _WIN32
		std::system ("cls");
	#else
	#endif
}
