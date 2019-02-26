#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int k;
	for(int j=1; j<=N-1; j++){
		for(int l=0; l<N; l++){
			if(l==j){
				cout<<"["<<d[j]<<"] ";
			}else{
				cout<<d[l]<<" ";
			}
		}
		k=j;
		for(int i=j; i>0; i--){
			if(d[i]>d[i-1]){
				swap(d,i-1,i);
				k=i-1;
			}
		}
		cout<<"=> ";
		for(int l=0; l<N; l++){
			if(l==k){
				cout<<"["<<d[l]<<"] ";
			}else{
				cout<<d[l]<<" ";
			}
		}
		cout<<endl;
	}
}
	

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}