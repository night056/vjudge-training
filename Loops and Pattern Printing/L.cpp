/*In the online judge system, a judge file may include multiple datasets to check whether the submitted program outputs a correct answer for each test case. This task is to practice solving a problem with multiple datasets.
Write a program which reads an integer x and print it as is. Note that multiple datasets are given for this problem.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, i=1;
    while(1)
    {
        cin>>x;
        if(x==0)
            return 0;
        cout<<"Case "<<i<<": "<<x<<endl;
        i++;
    }
}
