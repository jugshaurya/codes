#include <iostream>
using namespace std;

void readMatrix(int a[][10], int r, int c){
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cin>>a[i][j];
		}
	}
}

void printMatrix(int a[][10], int r, int c){
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

}

int main() {

	int a[10][10];
	int R,C;
	cin>>R>>C;

	//Read into Matrix
	// readMatrix(a,R,C);
	for (int i = 0; i < R; ++i){
		for (int j = 0; j < C; ++j){
			a[i][j]=i+j;
		}
	}
	//Print Matrix
	printMatrix(a,R,C);

	return 0;
}