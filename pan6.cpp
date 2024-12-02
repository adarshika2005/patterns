#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int m=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<m;
          m++;
            j++;
        }
        cout<<endl;
        i++;
    }
}