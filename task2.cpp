#include<iostream>
using namespace std;
main()
{
    int size ;
    cout<<"entre the size of array";
    cin>>size;
    int arr[size];
    for(int idx = 0 ; idx<size ; idx = idx + 1 )
    {
        cout<<"entre the number ...";
        cin>>arr[idx];
    }
    for (int idx = 0 ; idx<size ; idx = idx + 1)
    {
       cout<<arr[idx]<<" ," ;
    }
}