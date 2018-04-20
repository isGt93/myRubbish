#include <stdio.h>
void func(int pdata[])
{
	printf("sizeof(pdata)=%d\n",sizeof(pdata));
}

int main()
{
	int data[3] = {1,2,3};
	
	printf("data=0x%x\t&data=%p\n",data,&data);
	
	printf("data+1=0x%x\t&data+1=%p\n",data+1,&data+1);
	
	printf("sizeof(data)=%d\tsizeof(&data)=%d\n",sizeof(data),sizeof(&data));

	func(data);

	return 0;
}
