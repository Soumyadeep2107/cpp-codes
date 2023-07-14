// To find the square root of the given integer using the binary search.\
// main point to observe in this problem is to find the search space , i.e the range where the ans is present .
// 0-n, where n is the input number by the user for its square root.
// so we have search space 0,1,2,3,4,5....n which is a monotonic function where binary serch can be applied.
// we then also applied the precision to the ans for those who doesn't have perfect square root.

#include<iostream>
using namespace std;
long long int BS_sqrt_int(int num)
{
    int start=0;
    int end=num;
    int mid= start+(end-start)/2;
    long long int square= mid*mid;
    long long ans=-1;
    while(start<=end)
    {
        if(square<num)
        {
            start=mid+1;
        }
        else if(square>num)
        {   
            end=mid-1;
        }
        else{
            ans=mid;
            return mid;
        }
        mid= start+(end-start)/2;
        square=mid*mid;
    }
    return -1;

}
double more_precison(int n, int precision,int tempsol)
{   double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++)
    {   factor=factor/10; //basically here after every iteration the value of factor goes like 0.1,0.01,0.001.. according to the precision given.
        for(double j=ans;j*j<n;j=j+factor) //once the j*j exceed the value of its square , its goes out of the loop.
        {
            ans=j;
        }
    }
    return ans ;
}

int square_root(int x)
{
    return BS_sqrt_int(x);
}
int main()
{
    int n;
    cout<<"Enter the number for its square root:"<<endl;
    cin>>n;
    int sol=square_root(n);
    // cout<<sol<<endl;// ans will be only in integer 
    cout<<more_precison(n,2,sol);
    return 0;
}
  