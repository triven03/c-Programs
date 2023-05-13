#include<iostream>
using namespace std;

void rorateArray1(int arr[],int size,int k){
    for(int i=0;i<k;i++){
        int temp=arr[0];
        int j;
        for(j=0;j<size-1;j++){
            arr[j]=arr[j+1];
        }
        arr[j]=temp;
    }
}
void rorateArray2(int arr[],int size,int k){
    int res[size];
    for(int i=0;i<size;i++){
        res[i]=arr[k%size];
        k++;
    }
    for(int i=0;i<size;i++){
        arr[i]=res[i];
    }

}
void firstRepet(int arr[],int n){
    int res[n+1];

    
}

void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


void arrayPartition(int arr[],int size,int k){
    int i, j=0;
    for(i=0;i<size;i++){
        if (arr[i]<k)
        {
            int temp =arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
        
    }
}

void solveQueries(int N, int R, int arr[], int Q, int queries[]) {
  
  for (int i = 0; i < R; i++)
  {
    int temp =arr[0];
   for (int j = 0; j < N-1; j++)
   {
        arr[j]=arr[j+1];
   }
   arr[N-1]=temp; 
  }

for (int i = 0; i < Q; i++)
{
    cout<<arr[queries[i]]<<" ";
}

  
  
}

int main(){

    int n=9;
    // cout<<"Enter Array Lenght :"<<endl;
    // cin>>n;
    int arr[]={1,2,3,4,5};
    int arr2[]={1,20,31,44,50,15,18,23,26};
    // cout<<"Enter "<<n<<" Elements Of Array :"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    print(arr2,n);
    // rorateArray(arr,n,2);
    // rorateArray2(arr,n,3);
    arrayPartition(arr2,n,50);
    print(arr2,n);
    return 0;
}
