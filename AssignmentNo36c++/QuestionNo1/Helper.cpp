//Accept N numbers from user and return difference between summation of even elements and summation of odd elements. 

#include<iostream>
using namespace std;

class Elements
{
private :
     int *Arr;
     int iSize;

public:
     Elements(int);
     ~Elements();
     void Accept();
     void Display();
     int Difference();
};
Elements :: Elements(int iNo)
{
     cout<<"Inside Constructor\n";
     Arr = new int[iSize];
     iSize = iNo;
}
Elements :: ~Elements()
{
     cout<<"Inside Destructor\n";
     delete[]Arr;
}
void Elements :: Accept()
{
     cout<<"Enter the elements\n";
     for(int i=0;i<iSize;i++)
     {
          cin>>Arr[i];
     }
}
void Elements :: Display()
{
     for(int i=0;i<iSize;i++)
     {
          cout<<Arr[i]<<"\t";
     }
     cout<<"\n";
}
int Elements :: Difference()
{
     int iSum1=0,iSum2=0;
     for(int i=0;i<iSize;i++)
     {
          if((Arr[i]%2)==0)
          {
               iSum1=iSum1+Arr[i];
          }
          else{
               iSum2=iSum2+Arr[i];
          }
     }
      return iSum1-iSum2;
}

int main()
{
     int iNo=0,iRet=0;
     cout<<"Enter The Size of Array\n";
     cin>>iNo;

     Elements *eobj=new Elements(iNo);//call constructor

     eobj->Accept();
     eobj->Display();
     iRet=eobj->Difference();
     cout<<"Difference of elements is:"<<iRet<<"\n";
     delete eobj;
     return 0;
}