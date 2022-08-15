#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,arr[100],a,b,c,ct=0;
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        cin >> a >> b >> c;
        if(a+b+c >=2){
            ct++;
        }
    }
    cout << ct << endl;
}
