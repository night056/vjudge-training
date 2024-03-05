/*Alice has an array of N intergers-A1, A2, .... An. She wants the product of all the elements of the array to be a non-negative integer. That is, it can be either 0 or positive. But she doesn't want it to be negative.
To do this, she is willing to remove some elements of the array. Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, x;
    cin>>t;
    while(t--){
        cin>>n;
        int s = 0, z = 0;
        while(n--){
            cin>>x;
            if(x<0){
                s += 1;
            }
            else if(x==0){
                 z = 1;
            }
        }
        if(s%2 == 0 || z==1)
            cout<<0;
        else//rosh
            cout<<1;
        cout<<endl;
    }
    return 0;
}
