//Accept N numbers from user and display all such elements which are multiplyes of  11
#include<iostream>
using namespace std;

class elements
{
   private:
     int iSize;
     int *Arr;

   public:
     elements(int);
     ~elements();
     void Accept();
     void Display();
     void Multiplycation();
};