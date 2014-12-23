 void DESC_insertion_sort(int* a,int n)
 {
	 int i=0;
	 for(;i<n;++i)
	 {
		 int key=a[i];
		 int j=i-1;
		 while(j>=0&&a[j]<key)
		 {
			 a[j+1]=a[j];
			 j=j-1;
		 }
		 a[j+1]=key;
	 }
 }