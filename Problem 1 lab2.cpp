#include <iostream>

using namespace std;
int main() {
	int max = 1000;
	int n;
	cout << "Enter int n" << endl;
		cin >> n;
	int len = 2 * n - 1; 
	int first = 0; 
	int last = len - 1; 
	int array[max][max]; 
	while (n != 0)  
	{ 
		for (int i = first; i <= last; i++) { 
		for (int j = first; j <= last; j++) { 
			if (i == first || i == last || 
				j == first || j == last){				 
			array[i][j] = n; 
				}
				}
			
		} 
		first++; 
		n--; 
		last--; 
		
	} 
	
	for (int j = 0; j < len; j++) { 
		for (int k = 0; k < len; k++) {
					cout << array[j][k];
		cout << " ";
				}
		cout << endl;
		  
	} 
}