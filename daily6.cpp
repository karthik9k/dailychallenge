#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back

using namespace std ;
int main()
{
	ll n  ,count=0;
	double  a ,b,x,y; 
	cin >> n >> a >> b;
	map < double , double > s;
	while(n--)
	{
		cin >> x >> y;
		if(x-a != (float)0)
		{
		s[(y-b)/(x-a)] = 1;	
		}
		else
		{
		count=1;
		
		}
	}
	cout << s.size()+count<<endl;	
}
