#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main() 
{
	char a[100],b[100];
	int n;
	cout<<"Enter the String \n";
	gets(a);
	n=strlen(a);
	for(int i=0;i<n;i++)
	b[i]=a[i]+=(i+1);
	//a+=5; // this is the same as doing a = a + 1;
	std::cout <<"The encrypted String \n"<< b; // prints out the letter b.
}
