#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    double num = ((double)num1 / num2);
    int round=((num - (int)num) < .5) ? ((int)num) : ((int)num + 1);
    int ceil=((num - (int)num) == .0) ? num: ((int)num)+1 ;
    cout << "floor "<<num1<<" / " << num2 <<" = "<< (int)num << endl;
    cout << "ceil " <<num1<<" / "<<num2<<" = "<< ceil << endl;
    cout << "round "<<num1<<" / "<<num2<<" = " << round << endl;
    return 0;
}