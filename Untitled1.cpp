#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void randno (){
   srand (time (NULL));
   int random=rand();
  for (int i=1;i<=5;i++);{
  	
       cout<<random<<endl;
  }
}
int main()
{
	randno();

    return 0;		
		
}

