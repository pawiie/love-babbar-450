#include<iostream>
using namespace std;

void move(int *a, int n){

}

void printArray(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // calling the move function
    move(a,n);

    //printing the output 
    printArray(a,n);

    return 0;
}

// time complexity of move function is O(n) and space complexity is O(1)