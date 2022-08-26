// Pranav Jindal
// 2010990538
// Set No. 3
// Question: 2

#include<iostream>
#include<unordered_map>
using namespace std;
void findPairOfSum(int arr[], int n, int j)
{
    unordered_map<int, int> map;
    for(int i=0;i<n;i++)
    {
        if(map.find(j-arr[i])!= map.end())
        {
            cout<<"Pair found"<<endl<<arr[map[j-arr[i]]]<<", "<<arr[i]<<")\n";
            return;
        }
        map[arr[i]]=i;
    }
    cout<<"Pair not found";
}
int main()
{
    int n;
    int target;
    cout<<"Size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Target: ";
    cin>>target;
    
    findPairOfSum(arr,n,target);

    return 0;
}