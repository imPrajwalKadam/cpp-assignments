//Write generic program to accept N values from user and return smallest value.
#include<iostream>
using namespace std;

template<class T> 
T Max(T *arr, int iSize) 
{   
    int i = 0;
  T iMin = arr[i];
 for(i = 0;i<iSize;i++) 
 {
     if(arr[i] < iMin)
     {
         iMin = arr[i];
     }   
 } 
    return iMin;
}
int main() 
{ 
 int arr[]={10,20,30,50,40}; 
 float brr[] = {10.0,3.7,9.8,8.7}; 
 int iRet = Max(arr,5); 
 printf("%d\n",iRet); // 50 

 float fRet = Max(brr,4); 
 printf("%f\n ",fRet); // 9.8 
 return 0; 
} 