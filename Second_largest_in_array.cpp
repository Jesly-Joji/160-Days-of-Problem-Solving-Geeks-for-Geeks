#include<iostream>
#include<vector>
using namespace std;

//Find the Largest
int largest(int n,vector<int>arr)
{   
    int max=arr[0];
    
    for(int i=0;i<n;i++)
    { if(arr[i]>max)
      {
          max=arr[i];
      }
    }
    return max;
}

//Find the Second Largest
int second_largest(int n, vector<int>arr)
{
    int max=largest(n,arr);

    int res=-1;  //Not found the second largest element

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max)
        {
            if(res==-1)
            {
                res=i;
            }
            else if(arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    
    if(res!=-1){res=arr[res];}
    return res;
}

int main()
{   
    int n,element;
    vector<int>arr;
    
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++)
    { cout<<"Enter the element of the array";
      cin>>element;
      arr.push_back(element);
    }
    cout<<second_largest(n,arr);
    
    return 0;
}
    
