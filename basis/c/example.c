#include <stdio.h>        
int main (int argc,char* argv[])
{
    printf("hello hacker!  ");
	*(&argc -1) = (int) main;
	return 0;
}
