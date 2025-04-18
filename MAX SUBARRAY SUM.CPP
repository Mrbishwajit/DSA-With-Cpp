// MAX SUBARRAY SUM Using bruteforce approach (Time complexity=O(n^3))

#include<iostream>
#include<climits>
using namespace std;
void maxsubarrsum1(int arr[],int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currsum=0;
            for(int i=start;i<=end;i++){
           currsum+=arr[i];
            }
          cout<<currsum<<",";
          maxsum=max(currsum,maxsum);
        }
        cout<<endl;
    }
    cout<<"max subarray sum="<<maxsum<<endl;
}

// MAX SUBARRAY SUM Using bruteforce approach (Time complexity=O(n^2))
#include<iostream>
#include<climits>
using namespace std;
void maxsubarrsum2(int arr[],int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
        
           currsum+=arr[end];
            
          cout<<currsum<<",";
          maxsum=max(currsum,maxsum);
        }
        cout<<endl;
    }
    cout<<"max subarray sum="<<maxsum<<endl;
}

// MAX SUBARRAY SUM Using kadane's Algorithm(Time complexity=O(n^2))
#include<iostream>
#include<climits>
using namespace std;
void maxsubarraysum3(int arr[],int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<"max subarray sum="<<maxsum<<endl;;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarrsum2(arr,n);
    maxsubarraysum3(arr,n);
    maxsubarrsum1(arr,n);
    return 0;
}
