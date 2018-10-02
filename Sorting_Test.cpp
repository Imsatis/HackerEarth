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
   for(i=1;i<No;i++) {
          a++;
       
       for (int j=0;j<No-i;j++) {
           if(Num[j]>Num[j+1]) {
           Num[j]=Num[j]+Num[j+1];
           Num[j+1]=Num[j]-Num[j+1];
           Num[j]=Num[j]-Num[j+1];
           cout<<Num[j]<<"  ";
           }
           b++;
       }cout<<endl;
   }for(i=0;i<No;i++) cout<<Num[i]<<"  ";
   cout<<endl<<a<<" "<<b;
}
