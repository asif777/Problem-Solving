#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,n,i,arr[6][6];

    for(int i=1; i<6; i++)
    {
        for(int j=1; j<6; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1){
                r = abs(3-i);
                c = abs(3-j);
                cout << r+c << endl;
            }
        }
    }
    return 0;

}
