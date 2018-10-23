//include library
#include <iostream>
using namespace std;
//initialising max size of array
#define MAX_SIZE 100
int max(int[MAX_SIZE],int,int);
int min(int[MAX_SIZE],int, int);
int main()//declaration and definition
{
    int arr[MAX_SIZE];
    int i, n,k;
    //entering option for desired operation
    cout<<"Enter size of the array: ";
    cin>>n;
    
    cout<<"Enter elements in the ascending order(eg:123): ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value of k";
    cin>>k;
    max(arr,k,n);
    min(arr,k,n);
    return 0;
    
}

int max(int array[MAX_SIZE],int k,int size)
{
    
    if(k<size)
        cout<<"the kth largest element is"<<array[k];
    else
        cout<<"invalid input";
    return 0;
}


int min(int array[MAX_SIZE],int k,int size)
{
    
    cout<<"the kth smallest element is"<<array[size-k];
    
    return 0;
}
