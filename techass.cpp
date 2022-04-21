#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,j,i,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
       if(a[j]%2!=0)
       {
           sum = sum + a[j];
           j++;
       }
       else
       {
          sum = sum + a[j];
       }
    }
    cout<<sum;


    return 0;
}
