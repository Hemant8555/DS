#include<iostream>
using namespace std;
int main()
{
	int x,num,in;
	cout<<"Enter the size of stack:"<<endl;
	cin>>num;
	int stack[num];
	while(num--){
	int top=-1;
	cout<<"PRESS ANY OF THE FOLLOWING:\n1.PUSH \n2.POP\n3.DISPLAY"<<endl;
	cin>>x;
	switch(x)
	{
		case 1:
			{
				if(top>num-1)
				{
					cout<<"Overflow"<<endl;
					break;
				}
				else{
					top++;
					cin>>in;
					stack[top]=in;
				}

			}
		case 2:
			{
				if(top<0)
				{
					cout<<"Underflow"<<endl;
					break;
				}
				else{
					top--;
				}
			}
		case 3:
			{
				for(int i=top;i>=0;i--)
				{
					cout<<stack[i]<<endl;
				}
			}
	}
	}
	return 0;
}
