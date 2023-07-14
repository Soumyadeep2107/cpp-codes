//reverse of array using the recursion
#include<iostream>
using namespace std;
void reverse_array(int arr[], int n, int s, int e)
{
   if(s==e)
   {
     return;
   } 
   swap(arr[s],arr[e]);
   reverse_array(arr,n,s+1,e-1);
}
int main()
{  
    int arr[]={1,2,4,9,5};
    int s=0,e=4;
    reverse_array(arr,5,s,e);
    cout<<"The reversed array will be:";
    for(int i=0; i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}