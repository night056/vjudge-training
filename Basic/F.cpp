/*Chef is looking to buy a TV and has shortlisted two models. The first one costs A rupees, while the second one costs B rupees.
Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of C rupees on the first TV, and a flat discount of D rupees on the second one.
Help Chef determine which of the two TVs would be cheaper to buy during the sale.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //roshniii
    int T, a, b, c, d;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>a>>b>>c>>d;
        if(a-c<b-d)
            cout<<"First\n";
        else if(a-c>b-d)
            cout<<"Second\n";
        else
            cout<<"Any\n";
    }
    return 0;
}
