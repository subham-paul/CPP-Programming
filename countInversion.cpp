#include<bits/std++h>
using namespace std;
long long merge(int arr[], int l, int r){
    long long inv =0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i]=a[l+i];
    }
    for (int i = 0; i < n1; i++)
    {
        b[i]=arr[mid+i+1];
    }
    int
    
}
long long mergeSort(int arr[], int l, int r){
    long long inv=0;
    if (l<r)
    {
        int mid=(l+r)/2;
        inv += mergeSort(arr,l,mid);
        inv += mergeSort(arr,mid+1,r);
        inv += merge(arr,l,mid,r);
    }
    return inv;
}
int main(){
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<mergeSort(arr,0,n-1);
    return 0;
}