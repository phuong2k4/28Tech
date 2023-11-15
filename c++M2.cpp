#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int tc;
    cin>> tc;
    while(tc--)
    {
        int num;
        cin >> num;
        map<long long,bool> mp;
        for(int i =0;i<num;i++){
            long long n;
            cin >> n;
            mp[n] = true;
        }
        for(int i= 0;i<num;i++)
        {
            if(mp[i]){
                cout << i << " ";
            }else{
                cout << "-1 " ;
            }
        }
        cout << endl;
    }
    return 0;
}