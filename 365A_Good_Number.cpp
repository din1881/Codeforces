// This is a solution to "Good Number" problem on Codeforces

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{

	int n, k;
	cin >> n >> k;
	set <int>st;
	int counter = 0;
	int res;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] - '0' <= k) st.insert(s[i]);
		}
		if (st.size()==k+1) { counter++; }
		st.clear();
	}
	cout << counter << endl;
	return 0;
}
