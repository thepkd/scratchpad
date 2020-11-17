#include <bits/stdc++.h>

using namespace std;
int main()
{
	const vector<bool> stock(5,true);
	vector<vector<bool>> vec(5,stock);
	vec[0][4] = false;
	for(auto i=0; i<vec.size(); i++)
	{
	for(auto j=0; j<vec[0].size(); j++)
	{

	cout << vec[i][j] << endl;
	}}
	return 0; 
}

