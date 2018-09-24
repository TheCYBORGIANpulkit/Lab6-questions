#include<iostream>
using namespace std;

//defining the sum
void funcR(int a, int b, int &t){
	t=a+b;
}

//defining the main function
int main(){
	//declaring the variables
	int a,b, sum;
	//ask the user for input and gather it;
	cout<< "please input two numbers. We'll sum them."<<endl;
		cin>>a>>b;
	
	
	//call the function
	funcR(a,b,sum);
		// printing the result statement
		cout<<"The sum of your numbers is "<< sum<<endl;
		return 0;
}

