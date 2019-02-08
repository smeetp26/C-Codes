#include <iostream>

using namespace std;
int main()
{
const double lowerlim = -89.2;
const double  higherlim = 57.6;
double starttemp;
double endtemp;
double stepsize;
double fahrenheit;
//double  counter = 0;

cout << " Enter Start Temperature" << endl;
cin >> starttemp;
cout << " Enter Step Size" << endl;
cin >> stepsize;
cout << " Enter End Temp" << endl;
cin >> endtemp;
//do{
//	cout << "Enter temperature again" << endl;
//	cin >> starttemp;

if( starttemp >= lowerlim && endtemp <= higherlim){
	
	
	for(double n = starttemp ; n<= endtemp ; n++){
		if (stepsize > starttemp + endtemp){
			cout << "Error" << endl;
			break;
			
		}
		fahrenheit = starttemp * 9/5 + 32;  
		cout << starttemp << " " << fahrenheit << endl;;
		starttemp += stepsize;	
		 n = starttemp - 1;
	        }
		}
		else {
				cout << "Error";

}
}