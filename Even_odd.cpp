//create a code to check even odd numbers.


#include <iostream>

using namespace std;

int main() {

int n=0;

int i;

cout<<"Enter the end limit";

cin>>n;

for(i=0;i<=n;i++)

{

    if(i%2==0){

        printf("number is even & is = %d\n",i);

    }

    else{

        printf("number is odd and is = %d\n",i);

    }

    

}

    return 0;

}
