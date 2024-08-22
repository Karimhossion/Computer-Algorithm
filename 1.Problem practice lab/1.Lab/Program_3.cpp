//To find the average of n numbers using array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    int average=sum/n;
    cout<<average<<endl;
    return 0;
}