# include<iostream>
using namespace std;
main()
{
    int size ;
    cout<<"entre array size...";
    cin>>size;
    int array[size];
    int number;
    cout<<"entre number ...";
    cin>>number;
    for(int idx = 0 ; idx<size; idx++)
    {
        cout<<"entre elemnt of array...";
        cin>>array[idx];
    }
    for(int idx = 0 ; idx<size; idx++)
    {
        number = number * array[idx];
    }
    cout<<number;
}