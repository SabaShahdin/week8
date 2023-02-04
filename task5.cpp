# include<iostream>
using namespace std;

main()
{
    int size;
    cout<<"entre size of the array..";
    cin>>size;
    int array[size];
    int number;
    cout<<"entre number to be checked...";
    cin>>number;
    bool flag = false;
    for(int idx = 0 ; idx < size ; idx++)
    {
        cout<<"entre elemnt ..";
        cin>>array[idx];
    }
    for (int idx = 0 ; idx<size ; idx++)
    {
        if(number == array[idx])
        {
            flag = true;
        }
    }
     if(flag == true)
     {
        cout<<"already exist";
     }
     else 
     {
        cout<<"dont exist";
     }
}