#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string, int>mp;
	int n;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		if (mp.count(s) == 0) {
			mp.insert(make_pair(s, 0));
			cout << "OK" << endl;
		}
		else
		{
			mp[s]++;
			cout << s << mp[s] << endl;
		}
	}
	return 0;
}