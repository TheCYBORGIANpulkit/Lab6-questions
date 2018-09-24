#include<iostream>
using namespace std;
// to define the char function1
//for returning uppercase
char toUpper(char x){
	int y;
	char z;
	y=(int)x-32;
	z=(char)y;
	return z;
}
//to define the char function2
//for returning lowercase
char toLower(char x){
	int y;
	char z;
	y=(int)x-32;
	z=(char)y;
	return z;
}

//to define the main function
int main(){
	char x;
	cout<<"plaese enter any character. We'll tel you the character in lowercase and uppercase"<<endl;
	cin>>x;
	
	if((int)x>=97 && (int)x<=122){
		cout<<"The character in uppercase is "<<toUpper(x)<<endl;
	}
	else{
		cout<<"The character in lowercase is "<<toLower(x)<<endl;
	}
	return 0;
}
