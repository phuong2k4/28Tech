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


/// cho mang a[n] co n phan tu, 
/// tim min(a[i]-a[j]) (khong am)
/// 2 4 5 7 9 => 5 - 4 = 1 => 1 la min(a[i] - a[j])
// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i = 0 ;i<n;i++)
//         {
//             cin >> a[i];
//         }
//         int res = INT_MAX;
//         for(int i = 0;i<n;i++)
//         {
//             for(int j = i+1;j<n;j++)
//             {
//                 res = min(res, max(a[i],a[j])-min(a[i],a[j]));
//             }
//         }
//         cout << res;
//     }
//     return 0;
// }

// int main (){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i =0;i<n;i++)
//         {
//             cin >> a[i];
//         }
//         sort(a,a + n);
//         int res = INT_MAX;
//         for(int i =1 ;i<n;i++)
//         {
//             res = min(res , a[i]-a[i-1]);
//         }
//         cout << res << endl;
//     }
//     return 0;
// }

// Cho mang a[n] n phan tu 
// tim k lon nhat cua mang cac phan tu dua theo thu tu giam dan
// ex: 10 7 9 12 6 => n = 3  => 12 10 7 
// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n,k;
//         cin >> n >> k;
//         int a[n];
//         for(int i = 0 ;i<n;i++){
//             cin >> a[i];
//         }
//         sort(a,a+n,greater<int>());
//         for(int i =0;i<k;i++){
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Cho mang A[n] n phan tu 
// Dem so phan tu lap lai it nhat 1 lan 
// EX: 4 5 1 2 1 => cout << 2;

// int cnt[1000001];
// int main()
// {
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n;
//         cin >> n;
//         int a[n];
//         // map<int,int> mp;
//         memset(cnt ,0,sizeof(cnt));
//         for(int i = 0;i<n;i++){
//             cin >> a[i];
//             cnt[a[i]]++;
//             // mp[a[i]]++;
//         }
//         int ans = 0;
//         for(int i = 0;i<n;i++)
//         {
//             if(cnt[a[i]]==2){
//                 ans++;
//             }
//         }
//         cout << ans;
//         cout << endl;
//     }
//     return 0;
// }


// tinh toan gia tri da thuc p(n,x) = An-1*x^n-1+An-2*x^n-2+...+Ao
// Ket qua co the rat lon nen hay chia du cho 7

const int MOD = 1000000007;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int res = 0,lt = 1;
        for(int i = 1;i<=n;i++){
            res += a[n-i] * lt;
            res %=MOD;
            lt *= x;
            lt %=MOD;
        }
        cout << res << endl;
    }
    return 0;
}