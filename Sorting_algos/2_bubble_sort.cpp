//In bubble sort the first largest element got placed to its right position i round 1.
// similarly in round 2 the second largest get placed rightly to its position
// similarly in further rounds the elements getting placed rightly in their position, that is we are putting ith largest element to its right place.
#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{   bool swaped=true;
    for(int i=0;i<n-1; i++)
    {   
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped=false;
            }
        }
        //this below code will help to optimise the code for the best case , when the array is already is sorted and we just need a single n interation to check whether any element is swapped or not, if not then we simply break, and this bring TC from O(n^2) to O(n).
        if(swaped==true) //if no elements are swapped by the inner loop, then break.
        {
            break;
        }
    }
    
}
int main()
{
    int arr[]={1,7,6,10,14,9};
    bubble_sort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}