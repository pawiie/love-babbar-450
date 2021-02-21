#include<iostream>
using namespace std;

void sort_012(int *a, int n){

    int count_zero=0, count_one=0,count_two=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) count_zero++;
        else if(a[i]==1) count_one++;
        else count_two++;
    }
    for(int i=0;i<n;i++){
        if(i<count_zero) a[i]=0;
        else if (i<count_one+count_zero) a[i]=1;
        else a[i]=2;
    }
}

int main(){

    int n; cin>>n; // size of array
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i]; // enter 0,1,2

    // sorting the array
    sort_012(a,n);

    // print array
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

// time complexity of sort function is O(n) and space complexity is O(1)