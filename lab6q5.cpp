#include<iostream>
#include<cstring>
using namespace std;

//defining the sum function
//With two integer parameters
//return the sum
int fx(int a, int b){
	int sum;
	sum=a+b;
	return sum;
}

//to define the function
//with two integers as parameteres
//return the max.
int hx(int a, int b){
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

//to define the function
//with two integers as parameteres
//return the min
int gx(int a, int b){
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
	string x;
	
	//to print the informative statement
	cout<<"Hello, You can do three things using this program"<<endl;
	cout<<"Either you can add them or find out the min. and max. among them"<<endl;
	
	//to ask the user what to do and gather the input
	cout<<"What do you want to do? Please select one from ADD or MINI or MAXI."<<endl;
	cin>> x;
	
	//for every operation
		if(x=="ADD"){
		//call the function fx
	fx(c,d);
		//ask the user for input and gather it;
		cout<< "please input two numbers. We'll sum them."<<endl;
		cin>>c>>d;
		cout<<"The sum of your numbers is "<<fx(c,d)<<endl;
		return 0;
	}
		else if(x=="MINI"){
		//call the function gx
	gx(c,d);
		//ask the user for input and gather it;
		cout<< "please input two numbers. We'll find the minimum among them."<<endl;
		cin>>c>>d;
		//print the output statement
		cout<<"The the minimum among your numbers is "<<gx(c,d)<<endl;
		return 0;
	}
		if(x=="MAXI"){
		//call the function
	hx(c,d);
		//ask the user for input and gather it;
		cout<< "please input two numbers. We'll find the maximum among them."<<endl;
		cin>>c>>d;
		//print the output statement
		cout<<"The the maximum among your numbers is "<<hx(c,d)<<endl;
		return 0;
	}
	return 0;
}
	
	

