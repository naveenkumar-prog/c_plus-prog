

//

#include<iostream>
using namespace std;
//int checkpime(int n);

// To check prime number oor not

int main(){
	

	int flag ;
 
	int n;
	cout << "Enter the number to check whether it is a prime or not:";
	cin >> n;
	int j =0;
	int checkprime(int n);
	
	for (int i=2; i<=n/2; i++){
		if(checkprime(i)==1 )
		{
			if(checkprime(n-i)==1){
			
			cout << j+1<<"." << "\t"<< n <<"=" << i <<"+" << n-i << "\n";
			j++;
			flag =1;
		}
		}
		
	
	}
	  if (flag == 0) {
			cout << "It can't";
		}
		
	
	return 0;
}
	
 int checkprime(int n){
	int flag = 1;
		if(n==1 || n==0){
			cout << "Sorry! Please enter the value greater than 1";
		    flag =2;
      	}
     	else{
	
     	for (int i=2;i<=n/2;i++){
	    	if(n%i==0){
		   	flag =0;
			break;
		   } 
         }
      }
      
      return flag;
    }
	

