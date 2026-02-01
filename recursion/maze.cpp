#include <iostream>
using namespace std;

// Function to calculate unique paths recursively
int maze(int sr, int sc ,int er, int ec) {
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    return rightways+downways;
   
}

int main() {
    int sr;
    cin>>sr;

    int sc;
    cin>>sc;

    int er;
    cin>>er;
    
    int ec;
    cin>>ec;

    cout<<maze(sr,sc,er,ec);
}