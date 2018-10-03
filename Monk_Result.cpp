// swaping string problem;
/**
PROBLEM STATEMENT Points: 30
Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100 
1 <= Marks <= 100

SAMPLE INPUT 
3
Eve 78
Bob 99
Alice 78
SAMPLE OUTPUT 
Bob 99
Alice 78
Eve 78
**/

#include<iostream>

 using namespace std;
 
 
  int main() {
      
      int No,i;
      cin>>No;
      char* Name;
      int* Marks = new int[No];
      for(i=0;i<No;i++) { 
      cin>>Name[i];cin>>Marks[i];
       Name = new char[100];
          
      }
      for(i=0;i<No;i++) {
          
          for(int j=0;j<No;j++) {
              if(Marks[j]>Marks[j+1]) {
                  string temp;
                  Marks[j]=Marks[j]+Marks[j+1];
                  Marks[j+1]=Marks[j]-Marks[j+1];
                  Marks[j]=Marks[j]-Marks[j+1];
                  
                 
                  temp=(string)Name[j+1];
                  
                  Name[j+1]=Name[j];
                  Name[j]=(string)temp;
              }
             for(i=No;i>=No;i--) cout<<Name[i]<<" "<<Marks[i]<<endl; 
              
          }
      } 
      
      delete Name;
      
  }
