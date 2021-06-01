// Write generic program to accept N values and count frequency of any specific value. 
 
#include<iostream>
using namespace std;

//Input : 10 20 30 10 30 40 10 40 10
//Output: 
template<class T> 
T  Frequency(T *arr, int iSize, T iNo)
{ 
    T i=0;
    int iCnt=0;
    for( i=0;i<arr[i];i++)
    {
        if(arr[i]==iNo)
        iCnt++;
    }
return iCnt;
 
} 
int main() 
{
    char arr[]={'a','b','c','e','r','a','b','a','b','a'}; 
    int iRet = Frequency(arr,9,'b');
    printf("%d",iRet); // 4 
    return 0; 
}