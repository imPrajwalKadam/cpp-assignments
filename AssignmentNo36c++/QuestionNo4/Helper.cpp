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
	void Divisible();
};
elements::elements(int iNo)
{
	iSize=iNo;
	Arr=new int[iSize];
}
elements :: ~elements()
{
	cout<<"Inside destructor\n";
	delete[]Arr;
}
void elements :: Accept()
{
	cout<<"Enter number of elements\n";
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
		if((Arr[i]%3==0)&&(Arr[i]%5==0))
		{
			cout<<Arr[i]<<"\n";
		}
	}
}
int main()
{
	int iNo=0;
	cout<<"Enter Array Size\n";
	cin>>iNo;
	elements *eobj=new elements(iNo);
	
	eobj->Accept();
	eobj->Display();
	eobj->Divisible();

	delete eobj;
	return 0;
}