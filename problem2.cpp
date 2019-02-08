#include <iostream>

using namespace std;
int main() {
	int a,m;
		cout << "Enter an Integer" << endl;
		cin >> a; 
		cin >> m;
		const int temporary = a;
				
//		if(n > 9 ){
//			cout << " nine"; 
//		}
//		if( n >=1 && n<=9){
	     
//	 if( n == 1 ){
//		cout << " one";
//	            }
//	if( n == 2 ){
//		cout << " two";
//	            }
//	if( n == 3){
//		cout << " three";
//	            }
//	if( n == 4 ){
//		cout << " four";
//	            }
//	if( n == 5){
//		cout << " five" ;
//	            }
//	if( n == 6 ){
//		cout << " six";
//	            }
//	if( n ==7 ){
//		cout << " seven";
//	            }
//	if( n == 8 ){
//		cout << " eight" ;
//	            }
//	if( n == 9 ){
//		cout << " nine" ;
//	            }
//	                   }
	       	
	
//	if(a > 9){
//		cout << " nine" ;
//	}
//	if( a >=1 && a<=9){
     
 // if( a == 1 ){
//	cout << " one" ;
  //          }
// if( a == 2 ){
//	cout << " two" ;
  //          }
// if( a == 3){
//	cout << " three";
 //           }
// if( a == 4 ){
//	cout << " four" ;
 //           }
// if( a == 5){
//	cout << " five";
  //          }
// if( a == 6 ){
//	cout << " six";
 //           }
// if( a ==7 ){
//	cout << " seven" ;
 //           }
// if( a == 8 ){
//	cout << " eight" ;
  //          }
// if( a == 9 ){
//	cout << " nine" ;
  //          }
//                   }
//if(n >= 1){
//	if( n % 2 == 0){
//		cout << " even" ;
//	}
//	else {
//	cout << " odd"  ;
	
//	}
// }
   //    if(a >= 1){
//	if( a % 2 == 0){
//		cout << " even";
//	}
//	else {
//		cout << " odd" ;	
// }
// }

// 	return 0; 
// }
for( int n = a ; n <= m  ; n++){
	
	switch (a){
		case 1 : {
			 cout << "|one|" ;
     			break;
		}
		case 2 : {
			cout << "|two|" ;
			break;
		}
		case 3 : {
			cout << "|three|" ;
			break;
		}
		case 4 : {
			cout << "|four|" ;
			break;
		}
		case 5 : {
			cout << "|five|" ;
			break;
		}
		case 6 : {
			cout << "|six|" ;
			break;
		}
		case 7 : {
			cout << "|seven|" ;
			break;
		}
		case 8 : {
			cout << "|eight|" ;
			break;
		}
		case 9 : {
			cout << "|nine|" ;
			break;
		}
		default :{
			break;
		}
			} 		
		a++;		
}
for(int y = temporary; y <= m ; y++){
	          if( y > 9){
		if(y % 2 ==0){
			cout << "|even|";
		}
		else{
			cout << "|odd|";
		}
			}
	              }


     

}

//a++;
// if( a % 2 == 0){
//	cout << "even" << endl;
// } 
// else {
//	cout << "odd" << endl;
// }		
