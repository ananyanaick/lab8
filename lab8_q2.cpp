//include library
#include <iostream>
using namespace std;
#define MAX_SIZE 100 //initialising a max value for elements in array
int sum(int[MAX_SIZE],int);            //function prototypes
Int mean(int [MAX_SIZE],int );
int median(int [MAX_SIZE],int );
int maxmin(int [MAX_SIZE],int );
int freq(int [MAX_SIZE],int );
int main()// defining main function
{
    int arr[MAX_SIZE];
    int i, n,a;
    
    cout<<"Enter size of the array: ";
    cin>>n;
    
    cout<<"Enter elements in the in ascending or descending order : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // entering option for desired operateon.
    cout<<"enter the operation to be done 1.median/n2.mean/n3.max min/n4.frequency/n";
    cin>>a;
    if(a==1)
        median( arr, n);
    else if(a==2)
        cout<<mean(arr,n);
    else if(a==3)
        maxmin(arr,n);
    else if(a==4)
        freq(arr,n);
    else
    {
        cout<<"the entered value is incorrect!";
        main();
    }
    
    
    return 0;
    
}
//function definition to find sum
int sum(int array[MAX_SIZE],int size)
{
    int i,sum;
    sum=0;
    for(i=0; i<size; i++)
    {
        sum= sum + array[i];
    }
    
    return sum;
}

//function definition to find mean
int mean(int array[MAX_SIZE],int size)
{
    int m;
    m=sum(array,size)/size;
    return m;
}
//function definition to find median
int median(int array[MAX_SIZE],int size)
{
    int m=0;
    if(m%2==0)
        m=(size+1)/2;
    else
        m=size/2;
    return m;
}
//function definition to find max min
int maxmin(int array[MAX_SIZE],int size)
{
    if(array[0]<array[size-1])
        cout<<"max="<<array[0];
    else
        cout<<"max="<<array[size-1];
    
    if(array[0]>array[size-1])
        cout<<"min="<<array[0];
    else
        cout<<"min="<<array[size-1];
    
    return 0;
}

//function definition to find frequency
int freq(int array[MAX_SIZE],int size)

{
    int q=0,i;
    do
    {
        int count=0;
        for(i=0; i<size; i++)
        {
            if (array[q]==array[i])
            {
                count++;
            }
        }
        cout<<"   the frequency of:   "<<array[q]<<"  is:   "<<count<<"/n";
        
        q++;
        if(q==size)
            break;
    }while(q!=size);
    return 0;
    
}
