#include <stdio.h>
#include <malloc.h>
int main(void) {
	int *p,*array,r;
	p = (int*) malloc (sizeof(int));
	array = (int*) malloc (10*sizeof(int));
	p=array;
	for(int i = 1;i<11;i++,p++){
		*p = (int) ((2 * i)-1);
		
	}
	p = array;
	for(int i = 0;i<10;i++,p++){
		printf("%d \n",*p);
	}
	
	return 0;
}
