#include<iostream>

using namespace std;

 int main() {

   int obstacles=0,high_lim=0,distance=0,speed=0,i,walked=0,index=0;
   cin>>obstacles>>distance;//>>high_lim>>distance>>speed;
   int* position = new int[obstacles],*height = new int [obstacles];
   const int my_lim=--high_lim;
      for(i=0;i<obstacles;i++) {
            cin>>position[i]>>height[i];
            if(position[i]>distance) {

            }
      }
      for(i=0;i<obstacles;i++) cout<<position[i]<<" "<<height[i]<<endl;
  /*    for(i=0;i<obstacles;i++) {
        for(int j=0;j<obstacles-1;j++) {
                if(position[j]>position[j+1]) {
            position[j]=position[j]^position[j+1];
            position[j+1]=position[j]^position[j+1];
            position[j]=position[j]^position[j+1];

            height[j]=height[j]^height[j+1];
            height[j+1]=height[j]^height[j+1];
            height[j]=height[j]^height[j+1];
           }
         }
       }

          while(walked<distance){
             walked++;
             if (walked==position[index]) {
                if (my_lim>high_lim){
                    cout<<"No";break;
                  }
                index++;
              }
            }
          cout<<"Yes";
*/
 }
