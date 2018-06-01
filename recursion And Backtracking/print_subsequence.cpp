#include<iostream>
#include<string>
using namespace std;

void subsequence(string input, string output){
	if(input.length() == 0){
		cout<<output<<endl;
		return;
	}
	//first decision for not to include 1st word
	subsequence(input.substr(1),output);
	//second is to include
	subsequence(input.substr(1),output+input[0]);
}

int main(){
	string input="abc";
	string output=" ";
	subsequence(input,output);	
	return 0;
}