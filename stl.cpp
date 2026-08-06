#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<float,int> p ={3.7,5.87};
    cout<< p.first <<endl <<p.second << endl;
    pair <float, pair <int,int>> q={4.4,{5,8}};
    cout<< q.second.first<<endl;
    pair<int,int> arr[] = {{6,7},{9,0},{6,8}};
    cout<< arr[1].second;
    return 0;
}