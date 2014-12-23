#include<malloc.h>
 struct binary{
	 int *a;
	 int n;
 }
 struct binary add_binary(struct binary A,struct binary B)
 {
	 struct binary C;
	 C.a=(int*)malloc(sizeof(int)*(A.n+1));
	 C.n=A.n+1;
	 int i=0,jin=0;
	 while(i<n)
	 {
		 C.a[i]=(A.a[i]+B.a[i]+jin)%2;
		 jin=(A.a[i]+B.a[i]+jin)/2;
	 }
	 C.a[C.n-1]=jin;
	 return C;
 }