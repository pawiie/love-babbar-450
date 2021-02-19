#include<iostream>
using namespace std;

void reverse_array(int *a , int n){
    for(int i=0;i<n/2;i++)
        swap(a[i],a[n-i-1]);
}

void print_array(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // input array size
    int n;
    cin>>n;
    // input array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // print before reversing
    cout<<"before reversing\n";
    print_array(a,n);

    // reverse the array
    reverse_array(a,n);

    // print after reversing
    cout<<"after reversing\n";
    print_array(a,n);
    return 0;
}