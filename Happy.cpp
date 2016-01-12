#include<iostream>
using namespace std;

int PowSumOfEverynum(int n){
    int Ans=0;
    while(n!=0){
        Ans += (n%10)*(n%10);
        n /= 10;
    }
    return Ans;
}
bool IsHappy(int n){
    while(true){
        n=PowSumOfEverynum(n);
        if(n==4){
            return false;
        }
        if(n==1){
            return true;
        }
    }
}

int main(){
    int x;
    while(cin >> x){
        if(IsHappy(x)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
