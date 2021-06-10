#include <iostream>
using namespace std;

int main() {
    int s=0,i;
    for(i=0;i<1000;i++){
        if(i%3==0 || i%5==0){
        s=s+i;
    }
}
cout<<s;
	
}
