#include<iostream>
using namespace std;
int main()
{	int x,high_score,lowest_score,count=0,count2=0;
	cin>>x;
	int score[x];
	for(int i=0;i<x;i++)
	{
		cin>>score[i];
	}
	
	//HIGHEST SCORE//
	for(int i=0;i<x;i++)
	{
		high_score=score[i];
		for(int j=i+1;j<x;j++)
		{
			if(high_score<score[j])
			{
				high_score=score[j];
				count++;
			}
		}
	break;
	}
	//LOWEST SCORE//
	for(int i=0;i<x;i++)
	{
		lowest_score=score[i];
		for(int j=i+1;j<x;j++)
		{
			if(lowest_score>score[j])
			{
				lowest_score=score[j];
				count2++;
			}
		}
	break;
	}
	cout<<count<<" "<<count2;
return 0;
}
