#include<iostream>
#include<cmath>
using namespace std;
bool Cofactor(int n)
{
    int Ans=0;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            if(n==i*i){
                Ans+=i;
            }
            else{
                Ans+=(i+n/i);
            }
        }
    }
    return Ans+1==n;
}
int main()
{
    int a;
    while(cin >> a){
        if(Cofactor(a)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}
