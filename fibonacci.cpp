#include <iostream>

using namespace std;
int fibonacci(int n);
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
