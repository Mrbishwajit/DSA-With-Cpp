#include<iostream>
using namespace std;
int diagonalsum(int mat[][3],int n){
    int sum=0;
    //HERE  //T.C=O(n^2)
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //     if(i == j){
    //         sum+=mat[i][j];
    //      } else if(j==n-1-i){
    //         sum+=mat[i][j];
    //         }
    //       }
    //    }
    //HERE T.C=O(n)
       for(int i=0;i<n;i++){
        sum+=mat[i][i];//for primary diagonal
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];//for secondary diagonal

        }
       }
           cout<<"sum= "<<sum<<" ";
           return sum;
    } 
int main(){
    int matrix[4][4]={{1,2,3,4},
                      {5,6,7,8},
                       {9,10,11,12,},
                      {13,14,15,16}};
                    //   diagonalsum(matrix,4);
  int matrix2[3][3]={{1,2,3},
                      {4,5,6},
                       {7,8,9},};
                      diagonalsum(matrix2,3);
return 0;
}