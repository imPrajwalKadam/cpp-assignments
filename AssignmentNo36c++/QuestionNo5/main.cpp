#include"Header.h"

int main()
{
     int iNo=0;
     cout<<"Enter number of Array\n";
     cin>>iNo;
     elements *eobj = new elements(iNo);


     eobj->Accept();
     eobj->Display();
     eobj->Multiplycation();

     delete eobj;
     return 0;
}