#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num1,num2;
    cin >> num1 >> num2;
    (num1%num2==0)||(num2%num1==0)?cout<<"Multiples":cout<<"No Multiples"<<endl;
    return 0;
}