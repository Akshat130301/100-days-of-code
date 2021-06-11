#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int i,s=0,t=0;
    for(i=1;i<=100;i++){
        s=s+pow(i,2);
    }
    cout<<s<<"\n";
for(int j=1;j<=100;j++){
    t=t+j;
}
    int n = pow(t,2);
    cout<<n<<"\n";
    
    int m=n-s;
    cout<<m;
    
}
