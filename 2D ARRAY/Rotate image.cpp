#include<iostream>
using namespace std;
void transposematrix(int mat[][4],int n){
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        swap(mat[i][j],mat[j][i]);
       }
    }
}
void rotatematrix(int mat[][4],int n){
    for(int i=0;i<n;i++){
      int start=0;int end=n-1;
      while(start<end){
        swap(mat[i][start],mat[i][end]);
        start++;end--;
      }
    }
}
void printmatrix(int mat[][4],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int mat[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,58,63,96},
                   {13,14,15,16}};
          transposematrix(mat,4);
          cout <<"Rotated Matrix (90 degrees clockwise):"<<endl;
           rotatematrix(mat,4);
            printmatrix(mat,4);
 return 0;
}