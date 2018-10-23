/*
 C program to find sum of all elements of array
 */

#include <iostream>
using namespace std;
#define MAX_SIZE 100   //initialising a max value for elements in array
int sum(int[MAX_SIZE],int); //function prototype
int main()
{
    int arr[MAX_SIZE];
    int i, n;
    
    cout<<"Enter size of the array: ";
    cin>>n;
    
    cout<<"Enter elements in the array: “;   //entering array
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sum(arr,n);//function call by reference
    return 0;
    
}
//function definition
int sum(int array[MAX_SIZE],int size)
{
    int i,sum;
    sum=0;
    for(i=0; i<size; i++)
    {
        sum= sum + array[i];
    }
    
    //printing sum
    cout<<"Sum of all elements of array ="<< sum;
    
    return 0;
}
