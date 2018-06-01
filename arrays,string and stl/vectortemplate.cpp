
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool myCompare(int a, int b){
	return a>b;
}

int main(){

	//creating a vector object
	vector<int> v;
	v.reserve(100); // make internal working efficient
	//taking elements using push_back();
	for(int i=0;i<5;i++){
		v.push_back(5-i);
	}
	//sort elements using begin() and end()
	sort(v.begin(), v.end(),myCompare);
	//print elements to console
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	//v.clear();
	cout<<"size : "<<v.size()<<endl;
	cout<<"capacity : "<<v.capacity()<<endl;
	cout<<"first element : "<<(v.front())<<endl;
	cout<<"last element : "<<v.back()<<endl;

	return 0;
}