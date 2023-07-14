
#include<iostream>
using namespace std;
void selection_sort(int arr[], int n)
{  
   for(int i=0; i<n-1; i++)
   {    int min= i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {   
                min=j;
            }
        
        }
        swap(arr[min],arr[i]);
   } 
}
int main()
{
    int arr[]={5,3,8,1,6};
    selection_sort(arr,5);
    for( int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}