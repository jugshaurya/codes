#include <iostream>
using namespace std;

//==============================================naive --O(pow)
int naivePower(int exp, int pow){ //e^x
	int ans=1;
	for(int i=0; i<pow; i++){
		ans = ans * exp;
	}
	return ans;
}

//================================================recursive-a)-->O(pow)
int powerA(int a, int b){
	if(b==0){
		return 1;
	}
	return a * powerA(a, b-1);
}

//================================================recursive-b)-->FastPower Method-->O(log pow)
int powerB(int a, int b){
	if(b==0) return 1;
	
	if( b%2 == 0 ) {
		int pow = powerB(a,b/2);
		return pow * pow;
	}else{
		int pow= powerB(a, (b-1)/2);//if b is odd b/2 == (b-1)/2 so any one can be used
		return a*pow*pow;
	}
}


int main(){

	cout<<naivePower(3,5)<<endl;
	cout<<powerA(3,5)<<endl;
	cout<<powerB(3,5)<<endl;
	return 0;
}