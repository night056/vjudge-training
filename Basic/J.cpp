/*While Alice was drinking sugarcane juice, she started wondering about the following facts:
    The juicer sells each glass of sugarcane juice for 50 coins.
    He spends 20% of his total income on buying sugarcane.
    He spends 20% of his total income on buying salt and mint leaves.
    He spends 30% of his total income on shop rent.
Alice wonders, what is the juicer's profit (in coins) when he sells N glasses of sugarcane juice?*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,b, x, n;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>n;
        x=n*50;
        b=x-(2*(0.2*x)+(0.3*x));
        cout<<b<<"\n";
    }
    return 0;
}
