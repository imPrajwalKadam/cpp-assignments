//accept n numbers from user and display all such elements which are  even and divisible by 5.
#include<iostream>
using namespace std;

class elements
{
private:;
     int *Arr;
     int iSize;

public:
     elements(int);
     ~elements();
     void Accept();
     void Display();
     void Divisible();
};

elements :: elements(int iNo)
{
     iSize = iNo;
     Arr = new int[iSize];
}
elements :: ~elements()
{
     cout<<"Inside Destructor\n";
     delete []Arr;
} 
void elements :: Accept()
{
     cout<<"enter elements\n";
     for(int i=0;i<iSize;i++)
     {
          cin>>Arr[i];
     }
}
void elements :: Display()
{
     for(int i=0;i<iSize;i++)
     {
          cout<<Arr[i]<<"\t";
     }
     cout<<"\n";
}

void elements :: Divisible()
{
  for(int i=0;i<iSize;i++)
   {
     if((Arr[i]%2==0)&&(Arr[i]%5)==0)
     {
          cout<<Arr[i]<<"\t";
     }
   }
}


int main()
{
     int iNo=0;
     cout<<"Enter the number of array";
     cin>>iNo;

     elements *eobj = new elements(iNo);
     eobj->Accept();
     eobj->Display();
     eobj->Divisible();

     delete eobj;


     return 0;
}