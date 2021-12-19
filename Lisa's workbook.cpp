#include<iostream>
using namespace std;
void ones(){
	switch(h)
	{
		case 1:
			cout<<"one"<<endl;
		
		case 2:
			cout<<"two"<<endl;
			
		case 3:
			cout<<"three"<<endl;
			
		case 4:
			cout<<"four"<<endl;
			
		case 5:
			cout<<"five"<<endl;
			
		case 6:
			cout<<"six"<<endl;
			
		case 7:
			cout<<"seven"<<endl;
			
		case 8:
			cout<<"eight"<<endl;
			
		case 9:
			cout<<"nine"<<endl;
	}
}
void tens(){
	a
}
int main()
{
	int h,m;
	cin>>h>>m;
	if(m==0)
	{
		cout<<h<<" o' clock "<<endl;
	}
	else if(m>0 && m<=30)
	{
		cout<<m<<" past "<<h<<endl;
	}
	else{
		cout<<60-m<<" to "<<h+1<<endl;
	}
		
	return 0;
}
