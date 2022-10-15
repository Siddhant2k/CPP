//create Armstrong number code.
#include <iostream>

using namespace std;

int isArmst(int n);

 int main ()

{

int n;

cout<<"enter number you want to check \n";

cin>>n;

int isArmst(int n);

if(isArmst(n))

{

    printf ("\n%d is Armstrong\n",n);

}

else

{

    printf ("\n%d is not Armstrong\n",n);

}

return 0;  

}

int isArmst(int num)

{

    int R,sum=0,temp;

    

    temp=num;

    

    while(num>0)

    {

    R=num%10;

    num=num/10;

    sum=(sum*1)+(R*R*R);

    }

    if(temp==sum)

    {

     return 1;

    }

    else

    {

     return 0;

    }

}    

 

 

 

 

 

    

    

  
