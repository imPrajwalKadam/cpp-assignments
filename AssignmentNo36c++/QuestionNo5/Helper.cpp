//Accept N numbers from user and display all such elements which are multiplyes of  11

#include"Header.h"
elements :: elements(int iNo)
{
     cout<<"Inside Constructor\n";
     iSize=iNo;
     Arr=new int[iSize];
}
elements :: ~elements()
{
     cout<<"Inside destuctor\n";
     delete []Arr;
}
void elements :: Accept() 
{
     cout<<"Enter number of elements\n";
     for(int i=0;i<iSize;i++)
     {
          cin>>Arr[i];
     }
     cout<<"\n";
}
void elements :: Display()
{
     cout<<"Array of Number is:";
     for(int i=0;i<iSize;i++)
     {
          cout<<Arr[i]<<"\t";
     }
     cout<<"\n";
}
void elements :: Multiplycation()
{
     cout<<"OUTPUT IS:"<<"\n";
     for(int i=0;i<iSize;i++)
     {
          if(Arr[i]%11==0)
          {
          cout<<Arr[i]<<"\n";
          }
     }
}
