#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back

using namespace std ;
int main()
{
	ll n , i=0,count=0;
	vector < char > x;
	vector <char > ::iterator ptr; 
	cin >> n;
	if(n > 26)
	{
		cout << "-1";
		return 0;
	}
	str s;
	cin >> s;
	for(i = 0 ; i < n ; i++)
	{
				x.pb(s[i]);
	}			
	sort(x.begin(),x.end());
	for(ptr = x.begin();ptr < x.end()-1; ptr++ )
	{
		if(*ptr ==*(ptr+1))
		{
			count++;
		}
	}
	cout<<count<<endl;
}
