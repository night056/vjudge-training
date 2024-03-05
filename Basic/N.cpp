//Find the first digit of an integer. Start count digits from the leftmost one.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //roshni
    long int a;
    cin>>a;
    if(a<0)
        a=a*-1;
    while(a/10>0)
        a=a/10;
    cout<<a%10;
}
