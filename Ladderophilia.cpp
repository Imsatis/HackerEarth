//#Practice
//printin ladder :

#include<iostream>
 
using namespace std;
 
int main(void) {
    
    int n=0,i;
    cin>>n;
    
    for (i=0;i<=n;i++) {
        cout<<"*   *"<<endl<<"*   *"<<endl;
    
        if(i<n) cout<<"*****"<<endl; 
        
    }
    return 0;
    
}
