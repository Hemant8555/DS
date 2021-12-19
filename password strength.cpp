#include <iostream>
#include <string>
int w[26], a, s=0;
std::string p;

int main(){
    std::cin>>p>>a;
    for(int &i:w){if(a>25) a=0; i=a++;}
    for(auto i:p){s+=w[i-'a'];}
    std::cout<<s;
}
