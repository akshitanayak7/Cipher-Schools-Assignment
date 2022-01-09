#include<iostream>
using namespace std;
int main(){
     
     int nums[]={3,0,1};   //Array of numbers in which 2 is missing
     int n,i,f;
     
     for(n=0;n<4;n++)
     {  
         f=0;
         for(i=0;i<3;i++)
         {
             if(n==nums[i]){
             f=1;
             continue;
             }
         }
         if(f==0)
         {
             cout<<n<<" is not present in array\n";
         }
     }
    
    return 0;
}