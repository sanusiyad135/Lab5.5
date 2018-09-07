//Including  the library
#include<iostream>
using namespace std;
//using the main function
int main() {//defining the variables
	int n=5;
	for (int i= 0 ; i < n ; i++){
	if ( i == 0 || i  == 1 || i == 4) {
	for (int j = 0 ; j < (i+1) ; j++ ){
	cout << "*";
	}
	cout <<endl;
	}
	else{
	//Print star
	cout <<"*";
	//space
	for (int j=0;j<(i-1);j++){
	cout << " ";
	}
	//Print star
	cout << "*";
	cout <<endl;
	}}
//closing the programe
return 0;
}

