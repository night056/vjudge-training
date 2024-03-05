//n schoolchildren divide k apples evenly, the residue remains in the basket. How many apples remains in the basket?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    if(n<=1500 && k<=1500)
        cout<<k%n;
    return 0;
}
