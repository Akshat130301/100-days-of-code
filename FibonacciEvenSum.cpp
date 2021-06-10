#include <iostream>
using namespace std;
int main() {
int s,i=1,j=0,x=0;
while(s<4000000){
    s=j+i;
    j=i;
    i=s;
 if(s%2==0){
    x=x+s; 
 }
 
}
cout<<x;
}
