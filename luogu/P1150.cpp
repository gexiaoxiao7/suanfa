#include<iostream>
using namespace std;
int main(){
    int n,k,sum=0;
    cin>>n>>k;
    if(n<k) cout<<n;
    else{
        while(n!=0){
            sum += n;
            n /= k;
        }
        cout<<sum;
    }
    return 0;
}