#include <iostream>
#include<vector>
using namespace std;

//Function to Reverse Array
vector<int> reverse(int n, vector<int>arr)
{
    int start=0;
    int end=n-1;
    
    while(start<end)
    { swap(arr[start],arr[end]);
      start++;
      end--;
    }
    return arr;
}

int main() 
{   //INPUT
    int n,element;
    vector<int>arr;
    cout<<"Enter the size of array";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements";
        cin>>element;
        arr.push_back(element);
    }
    
    //OUTPUT
    cout<<"Reversed Array"<<endl;
    arr=reverse(n,arr);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
  
    return 0;
}
