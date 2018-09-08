//use lower_bound function to solbe
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k,f=0,v=0,sol;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        a.push_back(k);
    }
    int q;
    cin>>q;
    while(q--){
        cin>>k;
        for(int i=0;i<n;i++){
            if(a[i]==k){
                f=1;
                sol=i;
                break;
            }
            else if(a[i]>k){
                v=1;
                sol=i;
                break;
            }
        }
        if(f==1){
            cout<<"Yes "<<sol+1<<"\n";
        }
        else if(v==1){
            cout<<"No "<<sol+1<<"\n";
        }
        v=0,f=0;
    }
    return 0;
}

