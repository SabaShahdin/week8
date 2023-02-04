# include<iostream>
using namespace std;
main()
{
    int size ;
    cout<<"entre size of array...";
    cin>>size;
    int arr[size];
    int sum = 0;
    int average;
    for(int idx = 0 ; idx<size ; idx++)
    {
        cout<<"entre element of array....";
        cin>>arr[idx];
    }
    for (int idx = 0 ; idx<size ; idx++)
    {
        sum = sum + arr[idx] ;
    }
    cout<<sum<<endl;
    average = sum / size ;
    cout<<average;
}