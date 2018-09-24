#include<iostream>
using namespace std;
//to declare the variables

//to define the function
int sumOddNumber(int a,int b){
	
	if(a%2==0 && b%2==0){
		int sumOdd, i, s;
		sumOdd=s, i=a+1, s=0;
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
	else if(a%2==0 && b%2==1){
		int sumOdd, i, s;
		sumOdd=s, i=a+1, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+i;i=i+2;
		}
		return sumOdd;
	}
	if(a%2==1 && b%2==1){
		int sumOdd, i, s;
		sumOdd=s, i=a, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+i;i=i+2;
		}
		return sumOdd;
	}
}

//to define the main function
int main(){
	int c,d;
	//ask the user for input and gather it
		cout<< "please input two numbers. We'll find the sum of all the odd numbers between them."<<endl;
		cin>>c>>d;
	//call the function
	sumOddNumber(c,d);
	
	//print the output statement
		cout<<"The the sum of all the odd numbers between them is "<< sumOddNumber(c,d) <<endl;
		return 0;
}

