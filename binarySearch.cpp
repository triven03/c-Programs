#include<iostream>
#include<array>
#include <vector>

using namespace std;

int firstOccurance(int arr[],int key,int size){
    int start=0;
    int end= size-1;
    int mid ;
    int ans=-1;

    while (start<=end)
    {
        mid= start+(end-start)/2;
        if (arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
        
    }

    return ans;
}

int lastOccurance(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid;

    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }         
    }

    return ans;
    
}

int binarySearch(int arr[],int key,int size){
    int start=0;
    int end= size;
    int mid;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }            
    }  
    return -1;
}

int peakIndex(vector<int>&arr){
    int s=0;
    int e=arr.size()-1;
    int mid;
    while (s<e)
    {
        mid=s+(e-s)/2;
        if (arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        
    }
    return s;
    
}

//{8,9,10,1,2,5}

int pivotIndex(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid;
    while (s<e)
    {
        mid=(s+e)/2;
        if (arr[mid]>arr[0])
        {
           s=mid+1;
        }
        else{
            e=mid;
        }     
    }
    return s;   
}

int search(vector<int>& arr, int n, int k)
{
   int s=0;
   int e=n-1;
   int mid;
   while (s<=e)
   {
        mid=s+(e-s)/2;
        if (arr[mid]==k)
        {
            return mid;
        }
        
        else if (arr[s]<=arr[mid])
        {
            if (arr[s]<=k && k<=arr[mid])
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        }
        else if(arr[mid]<=k && k<=arr[e]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
   }

   return -1;
   
}


int main()
{
   int arr[]={10,11,12,13,14,15,16,17,18,18,18,18,20};
   int arr1[]={10,11,12,13,14,15,16,17,2,3,4,5,6,8};
   int key=18;
   int size=sizeof(arr1)/sizeof(arr1[0]);

   cout<<"Pivot Element is : "<<pivotIndex(arr1,size)<<endl;

    return 0;
}
