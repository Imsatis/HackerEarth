#include<iostream>
using namespace std;
  int main() {
     int distance=0,n_lim=0,excp=0,walked=0;
     int day=0,index=0,i,j;

       cin>>distance>>n_lim>>excp;

     int *ex_day = new int [excp],*ex_lim = new int [excp];

     for(i=0;i<excp;i++) cin>>ex_day[i]>>ex_lim[i];

     for(i=0;i<excp;i++) {
        for(j=0;j<excp-1;j++) {
            if(ex_day[j]>ex_day[j+1]) {
                ex_day[j]=ex_day[j]+ex_day[j+1];
                ex_day[j+1]=ex_day[j]-ex_day[j+1];
                ex_day[j]=ex_day[j]-ex_day[j+1];
                ex_lim[j]=ex_lim[j]+ex_lim[j+1];
                ex_lim[j+1]=ex_lim[j]-ex_lim[j+1];
                ex_lim[j]=ex_lim[j]-ex_lim[j+1];
            }
        }
     }
    // for (i=0;i<excp;i++) cout<<ex_day[i]<<" "<<ex_lim[i]<<endl;

        while(walked<distance) {
            day++;
          if(day==ex_day[index]) {
            walked+=ex_lim[index];
	    index++;
           }
         else  walked+=n_lim;

     }
       delete ex_day;
       delete ex_lim;
       cout<<day;
       return 0;
   }

//3.76649

//412


/**
#include<iostream>
using namespace std;

  class Travel {
    int distance,n_lim,excp;
    int *ex_day = new int [excp],*ex_lim = new int [excp];
    int walked,day,index,i,j;

     public:
 //     Travel(){
 //     distance=0,n_lim=0,excp=0,walked=0;
 //     day=0,index=0,i=0,j=0;
 //     }
     int logic() {
       cin>>distance>>n_lim>>excp;
       for(i=0;i<excp;i++) cin>>ex_day[i]>>ex_lim[i];

       for(i=0;i<excp;i++) {
        for(j=0;j<excp-1;j++) {
            if(ex_day[j]>ex_day[j+1]) {
                ex_day[j]=ex_day[j]+ex_day[j+1];
                ex_day[j+1]=ex_day[j]-ex_day[j+1];
                ex_day[j]=ex_day[j]-ex_day[j+1];
                ex_lim[j]=ex_lim[j]+ex_lim[j+1];
                ex_lim[j+1]=ex_lim[j]-ex_lim[j+1];
                ex_lim[j]=ex_lim[j]-ex_lim[j+1];
            }
        }
     }
     // for (i=0;i<excp;i++) cout<<ex_day[i]<<" "<<ex_lim[i]<<endl;

           while(walked<distance) {
            day++;
          if(day==ex_day[index]) {
            walked+=ex_lim[index];
	    index++;
           }
         else  walked+=n_lim;

     }
       delete ex_day;
       delete ex_lim;
       return day;
     }

  };

  int main() {

      Travel city;
       cout<<city.logic();
       return 0;
   }

**/
