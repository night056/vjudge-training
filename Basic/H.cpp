/*There are N children and Chef wants to give them 1 candy each. Chef already has X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 4 candies are available.
Determine the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the N children.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //roshni
    int T, x, n, b, a;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>n>>x;
        if(n>x)
        {
        a=n-x;
        b=a/4;
        a=a%4;
        if(a==0)
            cout<<b<<"\n";
        else
            cout<<b+1<<"\n";
        b=0;
        a=0;
        }
        else
            cout<<0<<"\n";
    }
    return 0;
}
