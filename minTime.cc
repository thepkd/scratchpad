#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

int minTime(vector<int> proclist, vector<int> timelist)
{
    std::sort(proclist.begin(), proclist.end());
    std::sort(timelist.begin(), timelist.end(),greater<int>());
    vector <int> final;
    for(int i=0; i<2; i++)
    {
        int temp = proclist[i] + timelist[i*4];
        final.push_back(temp);
    }
    std::sort(final.begin(), final.end(), greater<int>());
    for(auto a: final){ cout << a << endl;}
    return final[0];

}

int main()
{
    vector<int> proc= {10,8};
    vector<int> times = {2,2,3,4,8,7,4,5};
    int n = 2;
    int temp;
    temp = minTime(proc, times);
    cout << "Minimum time is:" << temp << endl;    
    return 0;
}