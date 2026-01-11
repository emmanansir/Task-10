#include<iostream>
using namespace std;
int main ()
{
	int i=1, sum=0;
	while(i<=10)
	{
		sum+=i;
		i++;
	}
	cout<<"sum of first 10 natural numbers="<<sum;
	return 0;
}