#include<bits/stdc++.h>

using namespace std;


/// Cho mang A[i] gom n phan tu,
/// hay sap xep lai cac pt cua mang
/// sao cho A[i]=i. Neu pt la gia tri khac dua -1 vao
// int main(){
//     int tc;
//     cin >>tc; 
//     while(tc--){
//         int n;
//         cin>>n;
//         map<long long,bool> mp;
//         for(int i =0 ;i<n;i++){
//             int x; cin >> x;
//             mp[x] = true;
//         }
//         for(int i =0;i<n;i++)
//         {
//             if(mp[i]){
//                 cout << i << " ";
//             }
//             else{ 
//                 cout << "-1 ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/// cho mang A[] gom n so nguyen  bao gom so 0
/// tim so nguyen duong nho nhat khong co mat trong mang
/// VD: a[]={5,8,3,7,9,1} => 2
// int cnt[1000002];
// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         int n;
//         cin >> n;
//         memset(cnt,0,sizeof(cnt));
//         for(int i =0 ;i<n;i++){
//             int x;
//             cin >> x;
//             if(x>0)cnt[x]=1;
//         }
//         for(int i = 1;i<=1000001 ;i++){
//             if(cnt[i]==0){
//                 cout << i << " ";
//                 break;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }
