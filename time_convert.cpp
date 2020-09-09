#include<iostream>
using namespace std;


int hr;
int m;
int sec;
int main(){
	int timeconvert(int hr,int min,int sec);

	cout << "Enter the time for which you need seond conversion :";
	cout << "\n hours :";
	cin >> hr;
	cout << "\n minutes :";
	cin >> m;
	cout << "\n secoonds :";
	cin >> sec;
	int  ans = timeconvert(hr,m,sec);

	
	return ans;
	
}

int timeconvert(int a,int b,int c){
	int result;
	
	if(b<=60){
		if(c<=60){
			
				result = (a*3600)+(b*60)+c;
					cout << "\nthe total seconds is\t"<<result;

				
			
		}
		
		else{
			cout <<"Please Enter valid seconds !";
		}
	}
	
	else{
		
					cout <<"Please Enter valid minutes !";
		
	}
	
	return result;

}
