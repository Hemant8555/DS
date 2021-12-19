#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int d,m,y,d2,m2,y2,total;
	cin>>d>>m>>y;
	cin>>d2>>m2>>y2;
	
	if(y>y2)
	{
		cout<<10000*(y-y2);
	}
	else if(y<y2)
	{
		cout<<"0";
	}
	else
	{
		if(m>m2)
		{
			total=500*(m-m2);	
			cout<<total;
		}
		else if(m<m2)
		{
			cout<<"0";
		}
		else{
			if(d<=d2)
			{
				cout<<"0";
			}
			else{
			total=abs(15*(d-d2));
			cout<<total;
		}
	}
	}

	return 0;
}
