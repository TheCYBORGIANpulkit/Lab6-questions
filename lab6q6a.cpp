#include<iostream>
using namespace std;
//to declare the variables

//to define the function
int sumEvenNumber(int a,int b){
	
	if(a%2==0 && b%2==0){
		int sumEven, i, s;
		sumEven=s, i=a, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+i;i=i+2;
		}
		return sumEven;
	}
	else if(a%2==1 && b%2==0){
		int sumEven, i, s;
		sumEven=s, i=a, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+i;i=i+2;
		}
		return sumEven;
	}
	else if(a%2==0 && b%2==1){
		int sumEven, i, s;
		sumEven=s, i=a, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+i;i=i+2;
		}
		return sumEven;
	}
	if(a%2==1 && b%2==1){
		int sumEven, i, s;
		sumEven=s, i=a, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+i;i=i+2;
		}
		return sumEven;
	}
}
//to define the main function
int main(){
	int c,d;
	//ask the user for input and gather it
		cout<< "please input two even numbers. We'll find the sum of all the even numbers between them."<<endl;
		cin>>c>>d;
	//call the function
	sumEvenNumber(c,d);
	
	//print the output statement
		cout<<"The the sum of all the even numbers between them is "<< sumEvenNumber(c,d) <<endl;
		return 0;
}

