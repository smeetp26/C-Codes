#include <iostream>

using namespace std;
int main() {
	int no,fib,first = 1,second = 1;
 cout << "Enter an int" << endl;
cin >> no;
if(no == 1 || no ==2 ){
	cout << 1 << endl;
}
if(no > 2){
for(int i = 0; i<no-2 ; i++){
	fib = first + second;
	first = second;
second = fib;
cout << '(' << i << ',' << fib << ')';
}
cout << endl;
cout << fib;
}
}