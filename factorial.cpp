#include<iostream>
using namespace std;
int main(){
cin.tie(NULL);
cout.tie(NULL);
ios_base::sync_with_stdio(false);
int t;
cin>>t;
long long int modulo = 1000000007;
long long int fac = 1;

int inl = 1;

while(t--) {
int n;
cin>>n;

if (n>inl)
{

for(int i = inl+1;i<=n;i++)
{
fac*=i;
fac = fac%modulo;
}
cout<<fac%modulo<<endl;
inl = n;
}
else if (n<inl) 
{
	for (int i = inl;i>n;i--) 
	{
	fac/=i;
	fac = fac%modulo;
	}
cout<<fac%modulo<<endl;
inl = n ;
}

else cout<<fac%modulo<<endl;
}
return 0;
}
