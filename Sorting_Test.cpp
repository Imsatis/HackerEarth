#include <iostream>

using namespace std;

int main()
{
   int No,i,a=0,b=0;
   cin>>No;
   int* Num = new int[No];
   
   for(i=0;i<No;i++) cin>>Num[i];
   for(i=0;i<No;i++) cout<<Num[i]<<"  ";
   cout<<endl;
   for(i=1;i<No;i++) { //outer loop runs N-1 times bcoz not need to run N times and i start from 1 bcoz inner loop runs on ith value.. 
          a++; //loop counting...
       
       for (int j=0;j<No-i;j++) { //inner loop N-i loop run less time; N is the enterd values and each time subtracting ith value..
           if(Num[j]>Num[j+1]) {   //bcoz it will not check sorted data....
           Num[j]=Num[j]+Num[j+1];
           Num[j+1]=Num[j]-Num[j+1];
           Num[j]=Num[j]-Num[j+1];
           cout<<Num[j]<<"  ";
           }
           b++; //inner loop counting...
       }cout<<endl;
   }for(i=0;i<No;i++) cout<<Num[i]<<"  ";
   cout<<endl<<a<<" "<<b;
}
