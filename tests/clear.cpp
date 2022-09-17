#include <stdlib.h> 
using namespace std;
int main(){
#if defined(__linux__) // Or #if __linux__
	system ("clear");
#elif _WIN32
	system ("cls");
#else
#endif

}