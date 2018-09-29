#include<iostream>

using namespace std;

 int main() {

   int obstacles=0,high_lim=0,distance=0,speed=0,i,check=1;
   cin>>obstacles>>high_lim>>distance>>speed;
   int* position = new int[obstacles],*height = new int [obstacles];
      for(i=0;i<obstacles;i++) cin>>position[i]>>height[i];

               i=0;
        for(int j=0;j<obstacles;j++) {

	   if(position[i]<=distance){
	        if(height[i]<=high_lim) {}
	        else
	        check=0;

	   }
	   else
	   i++;

	}
  (check!=0) ? cout<<"Yes" : cout<<"No";

delete position;
delete height;
 }
