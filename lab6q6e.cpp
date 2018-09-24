#include<iostream>
#include<cmath>
using namespace std;
//to declare the variables
//(a)
//to define the function for summing even num
int sumEvenNumber(int a,int b){
	int t;
	if(a%2==0 && b%2==0){
		int i;
		i=a, t=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			t=t+i;i=i+2;
		}
	}
	else if(a%2==1 && b%2==0){
		int i;
		i=a+1, t=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			t=t+i;i=i+2;
		}
	}
	else if(a%2==0 && b%2==1){
		int i;
		i=a, t=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			t=t+i;i=i+2;
		}
	}
	if(a%2==1 && b%2==1){
		int i;
		i=a+1, t=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			t=t+i;i=i+2;
		}
	}
	return t;
}
//(b)
//to define the function for summing the odd num
int sumOddNumber(int a,int b){
	int p;
	if(a%2==0 && b%2==0){
		int i;
		i=a+1, p=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			p=p+i;i=i+2;
		}
	}
	else if(a%2==1 && b%2==0){
		int i;
		i=a, p=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			p=p+i;i=i+2;
		}
	}
	else if(a%2==0 && b%2==1){
		int i;
		i=a+1, p=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			p=p+i;i=i+2;
		}
	}
	if(a%2==1 && b%2==1){
		int i;
		i=a, p=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			p=p+i;i=i+2;
		}
	}
	return p;
}
//(c)
//to define the function for dumming the square of odd num
int  sumSquareOddNumber(int a,int b){
	int s;
	if(a%2==0 && b%2==0){
		int i;
		i=a+1, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+pow(i,2);i=i+2;
		}
	}
	else if(a%2==1 && b%2==0){
		int i;
		i=a, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+pow(i,2);i=i+2;
		}
	}
	else if(a%2==0 && b%2==1){
		int i;
		i=a+1, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+pow(i,2);i=i+2;
		}
	}
	if(a%2==1 && b%2==1){
		int i;
		i=a, s=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			s=s+pow(i,2);i=i+2;
		}
	}
	return s;
}
//(d)
//to define the function for dumming the square of even num
int  sumSquareEvenNumber(int a,int b){
	int x;
	if(a%2==0 && b%2==0){
		int i;
		i=a, x=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			x=x+pow(i,2);i=i+2;
		}
	}
	else if(a%2==1 && b%2==0){
		int i;
		i=a+1, x=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			x=x+pow(i,2);i=i+2;
		}
	}
	else if(a%2==0 && b%2==1){
		int i;
		i=a, x=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			x=x+pow(i,2);i=i+2;
		}
	}
	if(a%2==1 && b%2==1){
		int i;
		i=a+1, x=0;
		//using loop adding the even numbers from a to b
		while(i<=b && i>=a){
			x=x+pow(i,2);i=i+2;
		}
	}
	return x;
}

//to define the main function
//to declare the input variables

int main(){
	int c,d;
	//ask the user for input and gather it
		cout<< "please input two numbers. We'll find perform some basic arithmetic with numbers between them."<<endl;
		cin>>c>>d;
	//to declare the variables to store the returned values
	
	int sumEven, sumOdd, sumSquareOdd, sumSquareEven;
		sumEven = sumEvenNumber(c,d);
		sumOdd = sumOddNumber(c,d);
		sumSquareOdd = sumSquareOddNumber(c,d);
		sumSquareEven = sumSquareEvenNumber(c,d);	
		//ask the user for input and gather it
			cout<< "please input two numbers. We'll find perform some basic arithmetic with numbers between them."<<endl;
			cin>>c>>d;
		//print the outputs as stored variables
		cout<<"The the sum of all the even numbers between them is "<< sumEven <<endl;
		cout<<"The the sum of all the odd numbers between them is "<< sumOdd <<endl;
		cout<<"The the sum of squares of all the odd numbers between them is "<< sumSquareOdd <<endl;
		cout<<"The the sum of squares of all the even numbers between them is "<< sumSquareEven <<endl;
	return 0;
}














