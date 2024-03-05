//Find the missing number in the given list of integers. The list contains 1 to 100 integers but one of the integer is missing. There are no duplicates in the list.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, sum=0;
    for(int i=0; i<99; i++)
    {
        cin>>x;
        sum+=x;
    }
    cout<<5050-sum;
}
