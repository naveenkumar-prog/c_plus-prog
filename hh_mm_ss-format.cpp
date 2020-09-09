#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
	private:
		
		int sec;
		int hh,mm,ss;
		
	public:
		void get(void);
		void convert(void);
//		void display(void);
		
};

void Time ::get(void)
{
	cout << "Enter the Time for which you need second coversion !!";
	cout << "Hours:" ;
	cin >> hh;
	cout << "Minutes";
	cin >> mm;
	cout << "Seconds";
	cin >> ss;
}

void Time :: convert(void)
{
	if(mm<=60){
		if(ss<=60){
			sec = (hh*60*60) + (mm*60) +ss;		
			cout << "\n Time is :\t" <<setw(2) << setfill('0') << hh <<":" <<setw(2) << setfill('0') << mm <<":" <<setw(2) << setfill('0')  << ss;
         	cout << "\n Total seconds is \t" << sec;	
		}
		
		else{
			cout <<"\n Please Enter valid seconds !";
		}
	}
	
	else{
		
					cout <<"\n Please Enter valid minutes !";
		
	}
}

/*void Time :: display(void)
{
	cout << "Time is :" <<setw(2) << setfill('0') << hh <<":" <<setw(2) << setfill('0') << mm <<":" <<setw(2) << setfill('0')  << ss;
	cout << "Total seconds is " << sec;
}
*/
int main(){
	Time t;
	t.get();
	t.convert();
//	t.display();
	
	return 0;
}

