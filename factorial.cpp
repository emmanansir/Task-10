#include<iostream>
using namespace std;
int main()
{
	int num,i=1;
	long long factorial=1;
	cout<<"enter a number:";
	cin>>num;
	while(i<=num)
	{
		factorial *=i;
		i++;
	}
	cout<<"factorial of"<<num<<"="<<factorial;
	return 0;
}