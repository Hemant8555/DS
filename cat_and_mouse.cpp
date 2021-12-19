//WHICH CAT WIL CATCH THE MOUSE FIRST//
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int num,cat1,cat2,mouse,x=0;
	cin>>num;
	while(x<num)
	{
	cin>>cat1>>cat2>>mouse;
	if(std::abs(cat1-mouse)<std::abs(cat2-mouse))
	{
		cout<<"Cat A"<<endl;
	}
	else if(std::abs(cat1-mouse)>std::abs(cat2-mouse))
	{ 
		cout<<"Cat B"<<endl;
	}
	else{
		cout<<"Mouse C"<<endl;
	}
	x++;
}
return 0;
}
