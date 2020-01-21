#include<bits/stdc++.h>
using namespace std;
int n;
int sum_of_multiples(int x){
    int p = (n-1)/x;
    return x*p*(p+1)/2;
}
int main(){
    cin>>n;
    int s = sum_of_multiples(3)+sum_of_multiples(5)-sum_of_multiples(15);
    cout<<s<<"\n";
}