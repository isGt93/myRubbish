#include <stdio.h>

void copy1(char* des,const char* src,int len)
{
	for(int i = 0;i < len;++i)
		*des++ = *src++;
}

void copy2(char* des,char* const src,int len)
{
	char* s = src;
	for(int i = 0;i < len;++i)
		*des++ = *s++;
}


int main()
{
	char des[] = {4,5,6};
	char src[] = {1,2,3};
	copy1(des,src,3);
	printf("des[0]=%d\tdes[1]=%d\tdes[2]=%d\n",des[0],des[1],des[2]);

	copy2(des,src,3);
	printf("des[0]=%d\tdes[1]=%d\tdes[2]=%d\n",des[0],des[1],des[2]);

	return 0;
}
