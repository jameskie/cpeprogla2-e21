#include<iostream>
#include <fstream>
#include<cmath>

using namespace std;

int main()
{
    ifstream f("input.txt");
    
    int a,sum;
    
    while (f >>a)
    {
    for(int i=0;i<a;i++)
	{
    	if((i%3==0)||(i%5==0))
    		sum=sum+i;
    		{
		}
	}
	cout<<sum;
}
return 0;
}
