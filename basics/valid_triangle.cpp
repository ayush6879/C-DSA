#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int X,Y,Z;
	cin>>X>>Y>>Z;
	if(X+Y>Z && Y+Z>X && Z+X>Y ){
		if(X == Y && Y==Z && Z==X){
			cout<<"Equilateral Triangle";
		}
		else if (X == Y || Y == Z || Z==X){
			cout<<"Isosceles Triangle";
		}
		else{
			cout<<"Scalene Triangle";
		}
	}
	else{
		cout<<"Not a Triangle";
	}
	
}
