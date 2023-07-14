#include<iostream>
using namespace std;
int main()
{   /*
111111
222222
333333
444444
555555
666666
*/
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    int i=1;
    while(i<=n)
    {   int j=1;
        while(j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}