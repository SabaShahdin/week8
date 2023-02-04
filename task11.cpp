# include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"entre any word...";
    getline (cin , word);
    char letter;
    cout<<"entre any letter...";
    cin>>letter;
    int idx = 0;
    while(word[idx] != '\0')
    {
        idx = idx + 1;
    }

    if(word[idx - 1] == letter)
    {
        cout<<"the last leetehr matches with  letter "<<letter;
    }
    else 
    {
        cout<<"dont match ..";
    }

}