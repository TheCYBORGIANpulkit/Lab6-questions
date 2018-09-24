#include<iostream>
using namespace std;

//defining the function
//taking two integers as parameters
//taking third integer as parameter by reference
void funcR(int a, int b, int &t){
		if(a<b){
		t=a;
	}
		else{
		t=b;
	}
}

int main(){
	//declaring the variables
	int a,b,max;
	//ask the user for input and gather it;
	cout<< "please input two numbers. We'll find the minimum among them."<<endl;
		cin>>a>>b;
	
	
	//call the function
	funcR(a,b,max);
	//print the ouput statement
		cout<<"The minimum among your numbers is "<<max<<endl;
		return 0;
}
