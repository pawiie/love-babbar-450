#include<iostream>
#include<utility>
using namespace std;

pair<int ,int > kthMinMax(int *a, int n,int k){
    sort(a,a+n); // sorting array in ascendig order

    return make_pair(a[k-1],a[n-k]);
}
int main(){
    int n;
    cin>>n; // size  of array
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i]; 

    int k; cin>>k; // value of k

    pair<int ,int > p= kthMinMax(a,n,k);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}

// time complexity of kthMinMax function is  O(nlogn) due to sorting