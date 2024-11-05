#include<bits/stdc++.h>
using namespace std;

vector<int> findDistinct(vector<int>arr){
    unordered_set<int> st(arr.begin(), arr.end());
    return vector<int> (st.begin(), st.end());
}

int main(){
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int>res = findDistinct(arr);

    for(auto it: res){
        cout<<it<<" ";
    }

    return 0;
}