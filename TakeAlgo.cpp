#include <bits/stdc++.h>
using namespace std;

void subseq(int ind,vector<int> &ds,int arr[],int n){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return ;
    }
    ds.push_back(arr[ind]);
    //This helps in picking the elements from the the array, this also helps in take or pick in particular into subsequence
    subseq(ind+1,ds,arr,n);
    //This helps in non picking the elements from the array, this also helps in not take or not pick in particular into subsequence
    ds.pop_back();
    subseq(ind+1,ds,arr,n);
}

int main(){
    int arr[]={3,1,2};  // Can use any elements in array of any size
    int n=3;            // Size of vector

    vector<int> ds;
    subseq(0,ds,arr,n);
}