#include<iostream>
using namespace std;
int main(){
    int money=0,predic_money,moms=0;
    for(int i=0;i<12;i++){
        cin>>predic_money;
        money += 300;
        if(money<predic_money){
            cout<<-(i+1);
            return 0;
        }
        if((money-predic_money)/100 !=0){
            moms += (money-predic_money)/100 *100;
        }
        money = (money-predic_money)%100;
        
    }
    cout<<money + moms*(1.2);
    return 0;
    
}