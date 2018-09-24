#include<iostream>
using namespace std;
//to declare the variables

//to define the function
int sumOddNumber(int a,int b){
	
	if(a%2==1 && b%2==1){
		int sumOdd, i, s;
		sumOdd=s, i=a, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+i;i=i+2;
		}
		return sumOdd;
	}
	else if(a%2==1 && b%2==0){
		int sumOdd, i, s;
		sumOdd=s, i=a, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+i;i=i+2;
		}
		return sumOdd;
	}
