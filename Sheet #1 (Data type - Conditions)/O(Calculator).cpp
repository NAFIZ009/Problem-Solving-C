#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    char x;
    cin >> num1 >> x >> num2;
    if (x == '+')
    {
        cout << num1+num2<<endl;
    }else if (x == '-')
    {
        cout << num1-num2<<endl;
    }else if(x=='*')
    {
        cout << num1*num2<<endl;
    }else if(x=='/')
    {
        cout << num1/num2<<endl;
    }
    return 0;
}