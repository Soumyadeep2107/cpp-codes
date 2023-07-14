#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{   for(int i=1; i<n; i++)
    {   int j=i-1;
        int temp=arr[i];
        while(j>=0) 
        {   
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else 
            {
                break; // since once the previous element is smaller then there is no meaning of check it again its previous's previous element, because its sorted part and the previous's previous element will be smaller to, so come of the loop and check next element.
            }
            j--; 
        }
        arr[j+1]= temp;
    }
    
}
int main()
{
    int arr[]={10,1,7,4,8,2,11};
    insertion_sort(arr,7);
    cout<<"after insertion sort the array will be:";
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}