// there we will learn about the majority element presenets n/3
#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>arr){
    int n=arr.size();
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt > (n/3)){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    vector<int>arr={11,33,33,11,33,11};
    int ans=majority(arr);
    cout<<"majority element presents : "<<ans<<endl;
    return 0;
}