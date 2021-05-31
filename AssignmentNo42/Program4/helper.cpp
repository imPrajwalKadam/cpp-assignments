//Write generic program to accept N values from user and return largest values
#include<iostream>
using namespace std;

template<class T> 
T Max(T *arr, int iSize) 
{   
 T iMax1 = 0;
 T iMax2 = 0;
 for(int i = 0;i<=iSize;i++) 
 {
     if(arr[i]>iMax1)
     {
         iMax2 = iMax1;
         iMax1 = arr[i];
     }
     if((arr[i] < iMax1)&&(arr[i] > iMax2))
     {
         iMax2 = arr[i];
     }
   } 
    return iMax2;
}
int main() 
{ 
 int arr[]={10,20,30,50,40}; 
 float brr[] = {10.02,3.7,9.8,8.7}; 
 int iRet = Max(arr,5); 
 printf("%d\n",iRet); // 50 

 float fRet = Max(brr,4); 
 printf("%f\n ",fRet); // 9.8 
 return 0; 
} 