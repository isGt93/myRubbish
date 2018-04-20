#include <stdio.h>

typedef struct A_tag A;
typedef struct B_tag
{
	A* wife;
	char* name;
}B;

typedef struct A_tag
{
	B* husband;
	char* name;
}A;

int main()
{
	A girl;
	B boy;

	girl.name = "mrs.";
	girl.husband = &boy;

	boy.name = "mr.";
	boy.wife = &girl;

	printf("name:%s\tobject.name:%s\n",boy.name,boy.wife->name);
	printf("name:%s\tobject.name:%s\n",girl.name,girl.husband->name);
	return 0;
}
