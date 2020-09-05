#include<iostream>
using namespace std;

int n;
int *p;
int arr[10];

// Main function

int main (){
	
	int i=0;
	cout << "Enter the no.of elements you need to store:";
	cin >> n;
	cout << "Enter elements:";
	
	while (i<n){
	
	
	cin >> arr[i];
	i++;
}
	
	p=arr;
	
	cout << "You entered:";
	for(int i=0;i<n;i++){
		cout << *p <<"\n" ;
		p++;
	}
}
