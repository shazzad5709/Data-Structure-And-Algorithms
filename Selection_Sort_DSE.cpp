#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, t, j;
    
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }

    cout<<"Sorted Elements: ";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
}