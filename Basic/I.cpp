/*Each pizza consists of 4 slices. There are N friends and each friend needs exactly X slices.
Find the minimum number of pizzas they should order to satisfy their appetite.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //roshni
    int T, x, n, b;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>n>>x;
        x=n*x;
        b=x/4;
        x=x%4;
        if(x==0)
            cout<<b<<"\n";
        else
            cout<<b+1<<"\n";
    }
    return 0;
}
