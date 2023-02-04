# include<iostream>
using namespace std;
main()
{
     int size ;
    cout<<"entre size of array...";
    cin>>size;
    int arr[size];
    for(int idx = 0 ; idx < size ; idx ++)
    {
        cout<<"entre elemnt...";
        cin>>arr[idx];
        
    }
    for(int idx = (size- 1) ; idx >= 0; idx --)
    {
        cout<<arr[idx]<<" ,";
    }
}