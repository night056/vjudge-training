/*Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be X °F.
A person is said to have fever if his body temperature is strictly greater than 98 °F.
Determine if Chef has fever or not.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //roshniii
    int T, X;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>X;
        if(X<=98)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
