//Write generic program to find largest number from three numbers.  
#include<iostream>
using namespace std;

template <class T> 
T Max(T no1, T no2, T no3 ) 
{ 
     if((no1>no2)&&(no1>no3))
     {
         return no1;
     }
     if((no2>no1)&&(no2>no3))
     {
         return no2;
     }
     else{
         return no3;
     }
 
} 
int main() 
{
     char iNo1 = 0,iNo2 = 0,iNo3 = 0;
     char iRet=0;
     

     cout<<"Enter First number\n";
     cin>>iNo1;

     cout<<"Enter Second number\n";
     cin>>iNo2;

     cout<<"Enter Third number\n";
     cin>>iNo3;

     iRet = Max(iNo1,iNo2,iNo3);
     cout<<"Maximum number is:"<<iRet<<"\n";

 return 0; 
}