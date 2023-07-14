//Book allocation problem.
// basically we have to do the partition of the pages of the books in an array such that,the maximum number of the pages alloted to each student should be minimum among all the cases 
#include<iostream>
using namespace std;
bool ifpossible(int arr[], int n,int m, int mid)
{
    int stu_count=1;
    int page_count=0;
    for(int i=0; i<n; i++)
    {
       if(page_count+arr[i]<=mid)
       {
        page_count+=arr[i];
       }
       else{
        stu_count++;
        if(stu_count>m||mid<arr[i]) //second condition is :-if the mid value is smaller than the fist element(pages of book) for the next student then the mid value won't be the possible solution.
        {
            return false;
        }
        page_count=arr[i];
       }
    }
    return true;
}
int allocatebooks(int arr[],int n, int m) //n is the size of the array and m is the number of student.
{
    int start=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++) //sum of the all the elements in the array, and then we put tha sum to the end.
    {
        sum+=arr[i];
    }
    int end=sum; //to create a search space of start=0 and end=sum, we can apply the binary search to find the possible solution for the book allocation  problem.
    int mid= start+(end-start)/2;
    while(start<=end)
    {
        if(ifpossible(arr,n,m,mid))
        {
            ans=mid; 
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[]={10,20,30,40};
    int sol=allocatebooks(arr,4,2);
    cout<<"The maximum number of pages assigned to the student which is minimum is:"<<sol;
    return 0; 
    
}