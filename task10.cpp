# include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"entre any word....";
    getline(cin , word);
    int idx = 0;
    while (word[idx] != '\0')
    {
        idx ++;
    }
    for (int x = idx  ; idx >= 0 ; idx--)
    {
        cout<<word[idx];
    }

}