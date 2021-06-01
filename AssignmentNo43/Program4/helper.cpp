//Write generic program to accept N values and search last occurrence of any specific value. 
#include<iostream>
using namespace std;

template<class T> 
int SearchLast(T *arr, int iSize, T iNo) 
{
    T i = 0;
    int iFlag=0,iCnt = 1;
    for(i = 0 ;i<arr[i];i++)
    {
        if(arr[i]==iNo)
        {
            iFlag = iCnt;
        }
        iCnt++;
    }  
    return iFlag;
 
}
int main() 
{ 
 int arr[]={10,20,30,10,30,40,10,40,10}; 
 int iRet = SearchLast(arr,9,40); 
 printf("%d",iRet); // 8 
 return 0; 
}