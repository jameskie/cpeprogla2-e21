#include<iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	int x,y,minus,minus1,minus2;
	cout<<"Enter the number of soldiers in Hashmat's army and his opponent's army:";
	for(x=1;x<=2^32;x++)
	{
	if(x<=2^32 && y<=2^32)
	
	cin>>x>>y;
	minus=(x-y);
	abs(minus);
	
	cin>>x>>y;
	minus1=(x-y);
	abs(minus1);
	
	cin>>x>>y;
	minus2=(x-y);
	abs(minus2);

	cout<<"\nThe difference of number of soldiers between Hashmat's army and his opponent's army:"<<endl;

	cout<<abs(minus)<<endl;
	cout<<abs(minus1)<<endl;
	cout<<abs(minus2)<<endl;
	
	if(x>=2^32 && y>=2^32)
	{
		cout<<"End Line"<<endl;
	}			
}	
	system ("pause>0");
	return 0;
}
