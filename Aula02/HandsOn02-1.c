#include <stdio.h>
//Entendendo ponteiros
int main(void) {
	int a = 2,b=1,*p,*q;
	
	p = &a;
	q = &b;
	printf(" a r-value: %d",a);
	printf(" a l-value: %X",&a);
	printf("\n b r-value: %d",b);
	printf(" b l-value: %X",&b);
	printf("\n *p r-value: %X",p);
	printf(" *p l-value: %X",&p);
	printf("\n *q r-value %X",q);
	printf(" *q l-value %X",&q);
	return 0;
}
