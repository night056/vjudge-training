//Find maximum element from the given array of integers.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v.begin(), v.end(), greater<int>());
    cout<<*(v.begin());
    return 0;
}
