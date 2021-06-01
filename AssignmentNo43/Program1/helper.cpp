//. Write generic program which accept one value and one number from user. Print that value that number of times on screen. 
#include<iostream>
using namespace std;
//Input   : M 7
//output  : M M M M M M M 
 
template <class T>
 void Display(T value,int iSize)
 {
      for(int i=1;i<=iSize;i++)
      {
           cout<<value<<"\t";
      }

 }

int main()
{ 
 Display('M',7); 
 Display(11,3); 
 Display(3.7,6); 
 return 0; 
}