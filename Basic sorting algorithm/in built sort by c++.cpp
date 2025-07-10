#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}
    int main(){
        int arr[8]={1,4,1,3,2,4,3,7};
           //For ascending order
           cout<<"Ascendingorder=" ;
           sort(arr,arr+8);
           print(arr,8);

               cout<<endl;
        //For Descending order
         cout<<"Descendingorder=" ;
         sort(arr,arr+8,greater<int>());

        print(arr,8);
        return 0;
    }
