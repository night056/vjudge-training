//Given a positive integer - N, print the number of multiples of 3, 5 between [1, N].

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    int a=0;
    cin>>t;
    cout<<((t/3)+(t/5))-(t/15);
    return 0;
}
