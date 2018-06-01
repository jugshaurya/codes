
#include <iostream>
#include <algorithm>/// for sort()

using namespace std;

bool myCompare(int a, int b){
	return a>b;//it will return true if a[i]>a[j] where i<j -->hence compare in desending order
}

int main(){

	int a[]={ 2,4,79,2,4,6,8 };
	int size= sizeof(a)/sizeof(int);
	cout<<size<<"\n";

	//1st version 
	// sort(a,a+size);
	
	//second version
	sort(a,a+size,myCompare);
	//printing
	for(int i=0; i<size ; i++){
		cout<<a[i]<<" ";
	}

	return 0;
}