# include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"entre size of second array...";
    cin>>size;
    int array1[2];
    int array2[size];
    for(int idx1 = 0 ; idx1<2 ;idx1 ++)
    {
        cout<<"entre elemnt of array1...";
        cin>>array1[idx1];
    }
    for(int idx2 = 0 ; idx2<size ; idx2 ++)
    {
      cout<<"entre elements of array 2...";
      cin>>array2[idx2];
    }
    for(int idx = 0 ; idx<(size + 2) ; idx ++)
    {
       if(idx == 0)
        {
            cout<<array1[idx] <<" , ";
            cout<<array2[idx]<< " , ";
        }
       else  if(idx >=1 && idx < size )
        {
            cout<<array2[idx]<<" , ";
        }
        if(idx == (size + 1))
        {
            cout<<array1[1];
        }
 }

}