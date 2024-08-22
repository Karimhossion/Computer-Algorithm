// 4. To separate odd and even integers into separate array.
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

    int even[n];
    int odd[n];
    int evencount=0, oddcount=0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            even[evencount++]=a[i];
        }
        else
        {
            odd[oddcount++]=a[i];
        }      
    }
    cout<<"Even Number : ";
    for (int i = 0; i < evencount; i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl;

    cout<<"Odd Number : ";
    for (int i = 0; i < oddcount; i++)
    {
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    return 0;
}