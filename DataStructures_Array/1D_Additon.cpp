// #1 Problem Addition of two Array ..: #From HACKEREARTH (-_-)/

/**
Having a good previous year, Monk is back to teach algorithms and data structures. This year he welcomes the learners with a problem which he calls "Welcome Problem". The problem gives you two arrays A and B (each array of size N) and asks to print new array C such that:
 ; 
Now, Monk will proceed further when you solve this one. So, go on and solve it :)

Input:
First line consists of an integer N, denoting the size of A and B.
Next line consists of N space separated integers denoting the array A.
Next line consists of N space separated integers denoting the array B.

Output:
Print N space separated integers denoting the array C.

Input Constraints:

; 
; 

SAMPLE INPUT 
5
1 2 3 4 5
4 5 3 2 10
SAMPLE OUTPUT 
5 7 6 6 15 
Explanation
The output array is the addition of input arrays A and B.
**/
 #include<iostream>

using namespace std;
  int main(void) {
       int index,i;
       cin>>index;
       int* A = new int[index],*B = new int[index];
    for(i=0;i<index;i++) cin>>A[i];
    for(i=0;i<index;i++) cin>>B[i];
      int sum[index];i=0;
      while(1) {
          
          sum[i]=A[i]+B[i];
          cout<<sum[i]<<" ";
          i++;
          if(i>=index) break;
            }
	delete A;
	delete B;
        return 0;    
      }
      
 
