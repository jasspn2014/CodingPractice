////#include<iostream>
////#include<stack>
////#include<vector>
////#include<queue>
////#include<algorithm>
////#define ulli unsigned long long int
////#define lli long long int
////#define li long int
////using namespace std;
////
////int solve()
////{
////    int n,k;
////    cin>>n>>k;
////    int arr[n];
////    int count = 0;
////    for(int i=0;i<n;i++)
////        cin>>arr[i];
////    for(int i=0;i<=n-k;i++)
////    {
////        if(arr[i] == k){
////            bool f = true;
////            for(int j=i;j<i+k-1;j++)
////            {
////                if(arr[j+1] != arr[j]-1){
////                    f = false;
////                    break;
////                }
////            }
////            if(f)
////                count++;
////        }
////    }
////
////    return count;
////}
////
////int main()
////{
////    ios::sync_with_stdio(false);
////    cin.tie(NULL);
////    cout.tie(NULL);
////    int t;
////    cin>>t;
////    for(int i=1;i<=t;i++)
////    {
////        cout<<"Case #"<<i<<": "<<solve()<<endl;
////    }
////    return 0;
////}
////
////
////// Code By Jasmeet Singh
//
//
//
////#include<iostream>
////#include<stack>
////#include<vector>
////#include<queue>
////#include<algorithm>
////#define ulli unsigned long long int
////#define lli long long int
////#define li long int
////using namespace std;
////
////int solve()
////{
////    lli n;
////    cin>>n;
////    lli arr[n];
////    for(int i=0;i<n;i++)
////        cin>>arr[i];
////
////    lli count = 0;
////    lli max = 0;
////
////    if(n == 1)
////        return 1;
////    if(n == 2){
////        if(arr[0] == arr[1])
////            return 0;
////        else
////            return 1;
////    }
////
////    if(arr[0] > arr[1]) {
////        count = 1;
////    }
////    max = arr[0];
////    for(int i=1;i<n-1;i++)
////    {
////        if(arr[i] > max && arr[i]>arr[i+1])
////            count++;
////
////        if(arr[i]>max)
////            max = arr[i];
////    }
////    if(arr[n-1] > max)
////        return count+1;
////    else
////        return count;
////}
////
////int main()
////{
////    ios::sync_with_stdio(false);
////    cin.tie(NULL);
////    cout.tie(NULL);
////    int t;
////    cin>>t;
////    for(int i=1;i<=t;i++)
////    {
////        cout<<"Case #"<<i<<": "<<solve()<<endl;
////    }
////    return 0;
////}
////
////
////// Code By Jasmeet Singh
//
//
////#include<iostream>
////#include<stack>
////#include<vector>
////#include<queue>
////#include<algorithm>
////#define ulli unsigned long long int
////#define lli long long int
////#define li long int
////using namespace std;
////
////int solve()
////{
////    lli n,count = 0;
////    cin>>n;
////
////    lli arr[n];
////
////    for(int i=0;i<n;i++)
////        cin>>arr[i];
////
////    if(n <= 4)
////        return 0;
////
////    lli more = 0;
////    for(int i=4;i<n;i++)
////    {
////       if(arr[i]>arr[i-1])
////       {
////           more++;
////       }
////       if(more == 4) {
////           count++;
////           more = 0;
////       }
////    }
////    if(more == 0)
////        return count;
////    else
////        return count+1;
////}
////
////int main()
////{
////    ios::sync_with_stdio(false);
////    cin.tie(NULL);
////    cout.tie(NULL);
////    int t;
////    cin>>t;
////    for(int i=1;i<=t;i++)
////    {
////        cout<<"Case #"<<i<<": "<<solve()<<endl;
////    }
////    return 0;
////}
////
////
////// Code By Jasmeet Singh
//
//
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//int solve()
//{
//    lli n,q;
//    cin>>n>>q;
//    lli weights[n];
//    for(int i=0;i<n;i++)
//        cin>>weights[i];
//
//    while(q--)
//    {
//        lli s,k;
//        cin>>s>>k;
//        while(s>=0 && s<n && k--)
//        {
//            if(weights[s-2] > weight[s-1])
//                s++;
//            else
//                s--;
//        }
//        if(k == 0)
//            cout<<s<<" ";
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int t;
//    cin>>t;
//    for(int i=1;i<=t;i++)
//    {
//        cout<<"Case #"<<i<<": "<<solve()<<endl;
//    }
//    return 0;
//}
//
//
//// Code By Jasmeet Singh


#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    // Set in C++
    int arr[] = {10,15,20,35,8,29,22,10,29,83,74,86};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> myset;
    for(int i=0;i<n;i++)
        myset.insert(arr[i]);

    unordered_set<int> :: iterator itr;
    for(itr = myset.begin();itr!=myset.end();itr++)
        cout<<*itr<<" ";

}