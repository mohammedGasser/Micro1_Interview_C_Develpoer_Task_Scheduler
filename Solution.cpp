 /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

enum task_proirity {
         A_Proirity=65,
         B_Proirity,
         C_Proirity
    };
    
 
int Task_Scheduler(  char  (&arr)[9],int n )
{
     // int A_Proirity=65;
    int flag=0;
    int A=count(arr,arr+9,'A');
    int B=count(arr,arr+9,'B');
    int C=count(arr,arr+9,'C');
 //   cout<<A<<B<<C;
     
    for(int i=0; i<n; i++)
    {
       if(A--!=0 && B--!=0 &&  C--!=0)
         flag+=4;
       else if( A--!=-1 && B--!=-1)  
         flag+=3;
         
       else if( A--!=-1)
        flag+=2;
       
    }
    return flag;
}
int main()
{
    
   /// std::cout<<"Hello World";
    const char *a="ABC";
    char a_array[9]="ABCAB";
    //pass by value and by reference (pass value a_array)
    cout<<Task_Scheduler(a_array,2);
    return 0;
}
