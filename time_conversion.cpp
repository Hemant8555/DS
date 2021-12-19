#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	if(s.substr(8)=="AM")
	{
		if(s.substr(0,2)=="12")
		{
			cout<<"00"<<s.substr(2,6);
		}
		else
		{
			cout<<s.substr(0,8);
		}
	}
	else
	{
		  if (s.substr(0,2) == "12")
            cout << s.substr(0,8);
        else
        {
            int val = (s[0] - '0')*10 + (s[1]-'0');
            val += 12;
            cout << val << s.substr(2,6);
        }
            
    }
	return 0;
	
}
