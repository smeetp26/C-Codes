#include <iostream>

using namespace std;

int fibonacci(int n){
	cout << "fib" << n << " ";
	if (n==1){
		return 1;
	}
	if (n==0){
		return 0;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
	}
int main() {
	int no;
	cout<< "Enter an Int"<< endl;
	cin >> no;
	cout << fibonacci(no);	
}