#include<iostream>
#include <string>

using namespace std;

int main(){
	string s("hello world");
	cout<<s<<endl;

	string s2="Another Way!";
	cout<<s2<<endl;

	s2.push_back('a');
	cout<<s2<<endl;
	// string s3;
	// getline(cin, s3);
	// cout<<s3<<endl;
	
	// string arr[]= {"Apple", "Bananaaa", "Pineapple", "grapes"};

	// for(int i=0; i<arr.length(); i++){
	// 	cout<<arr[i]<<" ";
	// }
	return 0;
}