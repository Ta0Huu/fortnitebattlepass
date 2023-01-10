#include<iostream>
using namespace std;

int fibonacci(int h);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}


int fibonacci(int h){
    if (h <= 1) return h;
    return fibonacci(h-1) + fibonacci(h-2);
}



