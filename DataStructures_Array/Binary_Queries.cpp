// #2 Problem Convertin Binary to Decimal...:

/**
**/

#include<iostream>

 
 using namespace std;

    int main(void) {
  /*   int N,Q,i,Num=0;
     cin>>N,Q;
     int *Ary = new int[N];
     for(i=0;i<N;i++) cin>>Ary[i];
     for (i=0;i<Q;i++) {
     int temp;cin>>temp;
     if(temp!=0) {
       int x;cin>>x;
       Ary[x-1]==1;
      }
     else {
       int l,r,n=0;
       cin>>l>>r;
       for (;l<=r;l++) {
          if(Ary[l]!=0) Num+=2^n;
          n++;
      }
     } 
    } 
    (Num%2!=1) ? cout<<"EVEN" : cout<<"ODD";

     delete Ary;*/
     int n=0,i,t=0;
     for(i=0;i<10;i++) {
      // t+=2^n;
       cout<<2^n<<"  ";n++
     }

     return 0;
    
    }
