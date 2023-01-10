#include<iostream>
using namespace std;

int gcd(int k, int j);


int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int k,int j){
    if (k%j == 0){
        return j;
    }
    else{
        return gcd(j, k%j);
    }
}