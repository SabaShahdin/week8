# include<iostream>
using namespace std;

main()
{
    float array[4];
    float totalAmount;
    float quarters;
    float dime;
    float nickel;
    float penny;
    float amount;
    cout<<"entre money you have ...";
    cin>>totalAmount;
    for(int idx =0 ; idx< 4 ; idx++)
    {
        cout<<"entre first elemnt";
        cin>>array[idx];
    }
     quarters = array[0] * 0.25;
     dime = array[1] * 0.10;
     nickel = array[2] * 0.05;
     penny = array[3] * 0.01;
     amount = quarters + dime + nickel + penny;
    if(amount >= totalAmount)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}