//accept n number from user and display all such element which are divisible by 5

#include<iostream>
using namespace std;
class Numbers
{
  private:
     int iSize;
     int *Arr;

  public:
     Numbers(int);
     ~Numbers();
     void Accept();
     void Display();
     void Divisible();
};
Numbers :: Numbers(int iNo)
{
     cout<<"inside constructor\n";
     Arr=new int[iSize];
     iSize=iNo;
}
Numbers :: ~Numbers()
{
     cout<<"Inside Destructor\n";
     delete[]Arr;
}
void Numbers :: Accept()
{
     cout<<"Enter number of elements\n";
     for(int i=0;i<iSize;i++)
     {
          cin>>Arr[i];
     }
} 
void Numbers :: Display()
{
  for(int i=1;i<iSize;i++)
   {
     cout<<Arr[i]<<"\t";
   }
   cout<<"\n";
}

void Numbers :: Divisible()
{
     for(int i=0;i<iSize;i++)
     {
          if(Arr[i]%5==0)
          {
               cout<<"this number is divisible by five:"<<Arr[i]<<"\t";
          }
     }
}

int main()
{
     int iRet=0,ino=0;

     cout<<"Enter number of array\n";
     cin>>ino;
     
     Numbers *nobj=new Numbers(ino);

     nobj->Accept();
     nobj->Display();
     nobj->Divisible();

     delete nobj;
     return 0;
}