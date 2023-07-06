#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin >> a >> b >> c ;
    if(a>=b&&a>=c)
    {
        if(b<c)
        {
            cout<<b<<" "<<a<<endl;
        }else{
            cout<<c<<" "<<a<<endl;
        }
    }else if(b>=a&&b>=c)
    {
        if(a<c)
        {
            cout<<a<<" "<<b<<endl;
        }else{
            cout<<c<<" "<<b<<endl;
        }
    }else if(c>=a&&c>=b)
    {
        if(a<b)
        {
            cout<<a<<" "<<c<<endl;
        }else{
            cout<<b<<" "<<c<<endl;
        }
    }
    return 0;
}