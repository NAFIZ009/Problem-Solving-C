#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char x;
    cin >> x;
    if((int)x >=48 && (int)x <=57)
    {
        cout << "IS DIGIT";
    }else{
        cout << "ALPHA"<<endl;
        if((int)x >=65 && (int)x <=90)
        {
            cout<<"IS CAPITAL"<<endl;
        }else{
            cout<<"IS SMALL"<<endl;
        }
    }
    return 0;
}