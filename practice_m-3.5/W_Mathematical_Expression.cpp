#include <bits/stdc++.h>

using namespace std;

int main () {
    int a;
    cin>>a;
    char s;
    cin>>s;
    int b;
    cin>>b;
    char q;
    cin>>q;
    int c;
    cin>>c;

    if (s == '+')
    {
        if (a + b == c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<< a + b;
        }      
    }

    else if (s == '-')
    {
        if (a - b == c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<< a - b;
        }       
    }
     
    else if (s == '*')
    {
        if (a * b == c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<< a * b;
        }       
    }   
    
    return 0;
}