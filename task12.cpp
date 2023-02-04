# include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"entre ay word....";
    getline(cin , word);  
    int idx = 0;
    int counter = 0;
    while(word[idx] != '\0')
    {
        if(word[idx] == 'a' || word[idx] == 'e' || word[idx] == 'i' || word[idx] == 'o' || word[idx] == 'u')
        {
            counter  = counter + 1;
        }
        idx = idx + 1;
    }
     cout<<" number of vowels character are.."<<counter ;
}