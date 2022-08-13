#include<iostream>
using namespace std;
int main(){
    int n,sub1,sub2,sub3;
    bool f=false;
    cin>>n;
    for(int i=10000;i<=30000;i++){
        sub3 = i % 1000;
        sub1 = i / 100;
        sub2 = (i /10) % 1000;
        if(sub1%n==0){
            if(sub2%n==0){
                if(sub3%n==0){
                    cout<<i<<endl;
                    f=true;
                }
            }
        }
    }
    if(f==false){
        cout<<"No";
    }
    
    return 0;
}