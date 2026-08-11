#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int countDigits(int n){      
    vector <int> vec;
    if (n==0){
        return 1;
    }
    else{
        while (n>0){
            vec.push_back(n%10);
            n/=10;
        }
        return vec.size();
    }
}

int reverseNumber(int n) {                                        
    int rev=0;
    while(n>0){
        int digit= n%10;
        rev=rev*10 + digit;
        n/=10;
    }
    return rev;
}
bool isPalindrome(int n) {
    int rev=0;
    int original=n;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    if(rev==original){
        return 1;
    }
    else{
        return 0;
    }
    }
int GCD(int n1,int n2) {
    for (int i=min(n1,n2); i>= 1; i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
}
bool isArmstrong(int n) {
    int original=n;
    int count=0;
    int new_num=0;
    int temp=n;
    while(temp>0){
        count++;
        temp/=10;
    }
    temp=n;
    while(temp>0){
        int digit=temp%10;
        temp/=10;
        new_num += static_cast<int>(pow(digit, count));
    }
    if(new_num==original){
        return 1;
    }
    else{
        return 0;
    }
} 
vector<int> divisors(int n) {
   vector <int> v;
    for(int i =1; i<=sqrt(n); i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=n/i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    return v;
    }
bool isPrime(int n){
    vector <int> v;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            v.push_back(i);
        }
    }
    if(v.size()==2){
        return 1;
    }
    else{
        return 0;
    }
    }
int main(){
    cout<< countDigits(345)<<endl;
    cout<<(reverseNumber(456))<<endl;
    cout<<isPalindrome(454)<<endl;
    cout<<GCD(12,9)<<endl;
    cout<<isArmstrong(371)<<endl;
    vector <int> ans= divisors(12);
    for(int t: ans){
        cout<<t<<" ";
    }
    cout<<endl;
    cout<<isPrime(3)<<endl;
    return 0;
}