//count the no of set-bits in for all numbers between a and b (both inclusive)

#include<iostream>
using namespace std;

int count(int num){   //-->O(#setbits)
    int numOfBits = 0;
    while(num>0){
        numOfBits++;
        num = num & (num-1);
    }
    return numOfBits;
    
}


int printSetbits(int a, int b){
    int sum = 0;
    for(int i=a;i<=b;i++){
        sum += count(i);
    }
    return sum;
}


int main() {
  
  int t;
  cin>>t;
  
  int a,b;
  for(int i=0 ;i<t;i++){
    cin>>a>>b;
    cout<<printSetbits(a,b)<<" ";
  }
	return 0;
}
