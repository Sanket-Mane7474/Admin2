#include<iostream>
using namespace std;

int main()
{


int t1=0;
int t2=1;
int next term=0;
int n;

cout<<"Enter the number limit for series:"<<n;
cin>>n;

for(int i=1;i<=n;i++)
{
	nextterm= t1+t2;
	
	t1=t2;
	t2=nextterm;
	nextterm=t1;
	cout<<"\n nextterm: "<<nextterm;
	

}



}

