#include<iostream>
using namespace std;
int n;
int a[1005];//输入必备
bool b[1005];//判断必备
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>a[i];//输入
    for(int j=2;j<=n;j++)//两两判断
    	if(abs(a[j]-a[j-1])<=1000)//注意这个地方坑了偶好久、一定要判断差值是否落在范围内
    		b[abs(a[j]-a[j-1])]=true;//标记成出现过
    for(int i=1;i<=n-1;i++)
    	if(!b[i])//判断b[i]是否为真
    	{
    		cout<<"Not jolly"<<endl;//只要有一个不是就输出“Not jolly”
    		exit(0);//终止程序
		}
	cout<<"Jolly"<<endl;//如果没有，输出“Jolly”
    //输出时记得注意大小写！
    return 0;
}