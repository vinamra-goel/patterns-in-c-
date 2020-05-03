// pattern generation
#include<iostream>
using namespace std;

int main() {
int n;
cout<<"Enter the No. of rows:";
cin>>n;
int row=1;

while(row<=n) {
    if(row%2==0) {
        cout<<"1";
        int col=1;

        while(col<=row-2) {
            cout<<"0";
            col=col+1;
        }
        cout<<"1";
        cout<<endl;
    }
    else {
        int col=1;
        while(col<=row) {
            cout<<"1";
            col=col+1;
        }
        cout<<endl;
    }
    row=row+1;
}
return 0;
}
