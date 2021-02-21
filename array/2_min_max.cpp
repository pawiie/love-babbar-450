#include<iostream>
#include<utility>
using namespace std;

pair<int,int> minMax(int *a, int l, int n){
    if(l==n){
        return make_pair(a[l],a[l]);
    }

    pair <int ,int > p,q,r;
   
    int mid=(l+n)/2;
    p=minMax(a,l,mid);
    q=minMax(a,mid+1,n);

    r.first=min(p.first,q.first);
    r.second=max(p.second,q.second);
    return r;

}
int main(){
    // enter size of array
    int n;
    cin>>n;
    int a[n];
    // enter array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // function to find min and max
    pair<int, int > p=minMax(a,0,n-1);
    // print min and max
    cout<<p.first<<" "<<p.second;
     
    return 0;
}
// time complexity "minMax" function is O(logn)