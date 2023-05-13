#include<iostream>

using namespace std;

void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


void bubble(int arr[],int n){
    int counter=1;
    while(counter<n){
        for (int j = 0; j <n-counter; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;                
            }            
        }
        counter++;    
    }
}

void insertion(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       int current =arr[i];
       int j=i-1;
       while (arr[j]>current && j>=0)
       {
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=current;
    }
    
}

void selection(int arr[],int n){
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min=i;
        for (int j = i+1; j < n; j++)
        {
           if (arr[min]>arr[j]) 
           {
            min=j;
           }  
        }
       
       if (i!=min){
         swap(arr[min],arr[i]);
        
       }            
    }
      
}

void bubbleSort(int arr[],int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                
            }
            
        }
        
    }
    
}

void insertionSort(int arr[],int n){
    for()
}

int main(){

    int arr[]={10,25,36,11,9,8,4,6,7,12};
    int size= sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    // bubble(arr,size);
    // insertion(arr,size);
    selection(arr,size);
    // bubbleSort(arr,size);
    print(arr,size);

    return 0;
}