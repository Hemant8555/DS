#include<iostream>
#include<iomanip>
# define pi 3.14159265358979
using namespace std;
int main(){
	int r;
	cin>>r;
	cout<<fixed<<setprecision(15)<<2*pi*r;
	return 0;
}
