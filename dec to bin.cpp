#include<iostream>
using namespace std;
void DecTobin(int decNum){
    int n=decNum;
    int binNum=0;
    int pow=1;
    while(n>0){
        int rem =n%2;
        binNum+=rem*pow;
        n=n/2;
        pow=pow*10;

    }
    cout<< binNum<<endl;
}
int main(){
    DecTobin(4);
    return 0;

}