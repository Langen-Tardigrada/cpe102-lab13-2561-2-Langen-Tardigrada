#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double A[N][N]){
	for(int i=0; i<N; i++){ //input number in a row of matrix.
		cout<<"Row "<<i+1<<": ";
		for(int j=0; j<N; j++){/* input number in row, if amount of number over index in row(1). 
		that overnumber'll put in to next index of the row(2).*/	
			cin>>A[i][j];
		}
	}
}

void findLocalMax(const double A[N][N], bool B[N][N]){
	int x,y;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			x=i;
			y=j;
			if(x==0 or y==0 or x==N-1 or y==N-1){
				B[x][y]=0;
			}else if(A[i][j+1]>A[x][y] or A[i][j-1]>A[x][y] or A[i-1][j]>A[x][y] or A[i+1][j]>A[x][y]){
			/*check values surround of B[x][y]. which's more than B[x][y]. B[x][y] is false or 0.
			 if all of them less than B[x][y].It's true or 1.*/
				B[x][y]=0; 
			}else{ B[x][y]=1;}
		}
	}
}

void showMatrix(const bool B[N][N]){
	for(int l=0; l<N; l++){
		for(int k=0; k<N; k++){
			cout<<B[l][k]<<" ";
		}
		cout<<endl;
	}
	//shows 'showMatrix'values(bool) to console.
}