// Pranav Jindal
// 2010990538
// Set No. 3
// Question: 1

#include <iostream>
using namespace std;
void alternateElements(int arr[], int n)
{
    for(int j = 1; j < n; j += 2)
    {
        if(arr[j - 1] > arr[j]) {
            swap(arr[j - 1],arr[j]);
        }
        if(j + 1 < n && arr[j + 1] > arr[j]) {
            swap(arr[j + 1],arr[j]);
        }
    }
}
int main()
{
    int n;
    cout<<"Size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    alternateElements(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}