
#include <iostream>

using namespace std;


void sum()
{
    int n;
    
    cout <<"enter the  number ";
    cin >> n;
   
  int i=1;
 
 do {
     if (i%2==1){
      cout<<i<<endl;
         
     }
      i++;
     
  } while(i<=n);
  
}
int main()
{
    
    sum();
    return 0;
}