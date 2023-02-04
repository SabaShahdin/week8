# include<iostream>
using namespace std ;
main()
{
    int size;
    cout<<"entre size of the array...";
    cin>>size;
    float array[size];
    float sum = 0;
    for(int idx = 0 ; idx< size ; idx = idx + 1)
    {
        cout<<"entre value of resistance ....";
        cin>>array[idx];
        sum = sum + array[idx];
    }
    cout<<"total resistance is...."<<sum<<" ohm";
}