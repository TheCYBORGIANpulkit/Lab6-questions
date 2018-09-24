#include<iostream>
using namespace std;

//defining the function
//With two integer parameters
//return the sum
int func(int a, int b){
	int sum;
	sum=a+b;
	return sum;
}



int main(){
	//declaring the variable
	int c,d;
	//call the function
	func(c,d);
		//ask the user for input and gather it;
		cout<< "please input two numbers. We'll input them."<<endl;
		cin>>c>>d;
		cout<<"The sum of your numbers is "<<func(c,d)<<endl;
		return 0;
}
