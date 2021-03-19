#include<iostream>
#include<string>
using namespace std;
int main()
{
	string *a;
	string s = "hello!";
	
	a = &s;
	cout<<*a<<endl;;
	cout<<&s;
	
}
