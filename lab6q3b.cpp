#include<iostream>
using namespace std;

//defining the sum
void funcR(int a, int b, int &t){
		if(a>b){
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
	cout<< "please input two numbers. We'll find the maximum among them."<<endl;
		cin>>a>>b;
	
	
	//call the function
	funcR(a,b,max);
	//print the ouput statement
		cout<<"The maximum among your numbers is "<<max<<endl;
		return 0;
}

