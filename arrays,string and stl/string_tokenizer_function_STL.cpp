#include <iostream>
#include <cstring> //for  strtok()

using namespace std;

int main(){

	char str[]="Hi there! I, am coding in C++";

	char* ptr;

	// char* strtok(char* str, char* delimiters)
	ptr = strtok(str, " ,!");

	while(ptr!=NULL){
		cout<<ptr<<endl;
		ptr= strtok(NULL, " ,!");
	}
	return 0;
}