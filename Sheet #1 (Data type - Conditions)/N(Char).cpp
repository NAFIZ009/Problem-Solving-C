#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    int i;
    ((int)ch>=97&&(int)ch<=122)?i=(int)ch-32:i=(int)ch+32;
    cout<<(char)i;
    return 0;
}