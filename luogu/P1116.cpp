#include<iostream>
#include<vector>
using namespace std;
void swap(vector<int> &list,int a,int b){
    list[a] = list[a]^list[b];
    list[b] = list[a]^list[b];
    list[a] = list[a]^list[b];
}
int main(){
    int Num,res=0;
    cin>>Num;
    vector<int> list;
    for(int i=0;i<Num;i++){
        int num;
        cin>>num;
        list.push_back(num);
    }
    for(int t=Num-1;t>0;t--){
        for(int i=0;i<t;i++){
            if(list[i]>list[i+1]){
                swap(list,i,i+1);
                res++;
            }
        }
    }
    cout<<res;
    return 0;
}
/**
 * 迭代去计算每个数字前有几个数字比它大，这意味着它必须要移动几次。
 * 
 */
// int n, sum;
// int main()
// {
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; ++i)
//         cin >> a[i];
//     for (int i = 0; i < n; ++i)
//         for (int j = 0; j < i; ++j)
//             if (a[j] > a[i])
//                 ++sum;
//     cout << sum;
//     return 0;
// }