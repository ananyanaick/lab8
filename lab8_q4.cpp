//include library
#include <iostream>
using namespace std;
//initialising the max size for the array
#define MAX_SIZE 100
int max(int[MAX_SIZE],int);
int min(int[MAX_SIZE], int);
int main()//defining and declaration
{
    int arr[MAX_SIZE],arr1[MAX_SIZE],arr2[MAX_SIZE];
    int i, n;
    //entering option for desired operation
    cout<<"Enter size of the array: ";
    cin>>n;
    
    cout<<"Enter elements for array1 in the ascending order(eg:123): ";
    for(i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter elements of array2 in the ascending order(eg:123): ";
    for(i=n; i<2*n; i++)
    {
        cin>>arr2[i];
    }
    for(i=0; i<(2*n); i++)
    {
        if (i<n)
            arr[i]=arr1[i];
    }
    for(i=n;i<2*n;i++)
        arr[i]=arr2[i];
    
    cout<<"the merged array is:\n";
    
    for(i=0; i<2*n; i++)
    {
        cout<<arr[i];
    }
    max(arr,n);
    min(arr,n);
    return 0;
    
}

int max(int array[],int size)
{
    int n,p;
    p=size-1;
    n=2*size-1;
    if(array[p]<array[n])
        cout<<"\nthe  largest element is"<<array[n];
    
    else
        cout<<"\nthe  largest element is"<<array[p];
    return 0;
}


int min(int array[],int size)
{
    if(array[0]>array[size])
        cout<<"\nthe  smallest element is"<<array[size];
    
    else
        cout<<"\nthe  smallest element is"<<array[0];
    
    return 0;
}
