#include<iostream>
using namespace std;
//to defining the function
//with two integers as parameteres
//return the min
int func(int a, int b){
	//to define the minimum
	int min;
		//define the conditions for minimum
		if(a<b){
		min=a;
	}
		else{
		min=b;
	}
	return min;
}

int main(){
	int c,d;
	
	//call the function
	func(c,d);
	//ask the user for input and gather it;
		cout<< "please input two numbers. We'll find the minimum among them."<<endl;
		cin>>c>>d;
	//print the output statement
		cout<<"The the minimum among your numbers is "<<func(c,d)<<endl;
		return 0;
}
