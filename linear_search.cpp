//Linear Search Practice :


#include<iostream>

using namespace std;

int main() {

   int n,value,in;
    cin>>n>>value;
    int A[n];
    for(int i=0;i<n;i++) {
        cin>>A[i];
    if(A[i]==value) in=i;
    }
   (in!=-1)?cout<<++in : cout<<-1;

}
