#include<iostream>
using namespace std;
int main(){
    int n;
    int Ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        switch(x%4){
        case 0:
            Ans+=1;
            break;
        case 1:
            Ans+=7;
            break;
        case 2:
            Ans+=9;
            break;
        case 3:
            Ans+=3;
            break;
        }
    }
    cout << Ans;
    return 0;
}
