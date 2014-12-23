 #define NIL -1
 int linear_find(int *a,int n,int v)
 {
	 int i=0;
	 while(i<n)
	 {
		 if(v==a[i])
		 {
			 return i;
		 }
	 }
	 return NIL;
 }