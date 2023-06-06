#include<bits/stdc++.h>
using namespace std;
int majorityelement(vector<int>arr){
    int n=arr.size();
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=i;j<n; j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt > (n/2)){
            return arr[i];
        }

    }
    return -1;
}
int main(){
    vector<int>arr={2,2,1,1,2,1};
    int ans=majorityelement(arr);
    cout<<" majority element are: "<<ans<<endl;
    return 0;
}