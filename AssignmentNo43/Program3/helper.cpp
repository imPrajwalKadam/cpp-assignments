// Write generic program to accept N values and search first occurrence of any specific value. 
//input  : 10 20 30 10 30 40 10 40 10
//output : 40



#include<iostream>
using namespace std;

template<class T> 
int SearchFirst(T *arr, int iSize, T iNo)
{
   T i = 0;
   int iCnt = 1;
   for(i = 0; i < arr[i];i++)
   {
        if(arr[i]==iNo)
       {
           break;
       }
       iCnt++;
   }
   return iCnt;
} 


int main() 
{ 
   int arr[]={10,20,30,10,30,40,10,40,10}; 
   int iRet = SearchFirst(arr,9,40); 
   printf("%d",iRet); // 6 
   return 0; 
}