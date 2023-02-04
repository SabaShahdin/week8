# include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"entre any word..";
    getline(cin , word);
    string name ;
    name = "Something";
    int idx = 0;
    while (word[idx] != '\0')
    {
        idx = idx + 1; 
    }
    int idx1 = 0;
    while (name[idx1] != '\0')
    {
        idx1 = idx1 + 1; 
    }
    cout<<name<<" "<<word;
}