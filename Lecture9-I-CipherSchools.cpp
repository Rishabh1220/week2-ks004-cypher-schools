//functions2
#include<iostream>
using namespace std;

void comparision(int a, int b){
	if (a > b)
  {
    cout << "a is greater than b" << endl;
  }
  else
  {
    cout << "b is greater than a" << endl;
  }
}

int main(){
	int a;
  int b;
	cout << "enter the values of a abd b: ";
  cin>>a>>b;
	cout<<"Comparision btw two numbers: ";
  comparision(a,b);
	return 0;
}

//functions3
#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

int main(){
	int a,b;
	a=1,b=5;
	int c;
	c = sum(a,b);
	cout<<c;
  
	return 0;
}
