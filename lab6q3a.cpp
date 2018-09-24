#include<iostream>
using namespace std;
//to defining the function
//with two integers as parameteres
int func(int a, int b){
	//to define the maximum
	int max;
		if(a>b){
		max=a;
	}
		else{
		max=b;
	}
	return max;
}

int main(){
	int c,d;
	
	//call the function
	func(c,d);
	//ask the user for input and gather it;
		cout<< "please input two numbers. We'll find the maximum among them."<<endl;
		cin>>c>>d;
	//print the output statement
		cout<<"The the maximum among your numbers is "<<func(c,d)<<endl;
		return 0;
} 

		

	
	
