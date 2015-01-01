## 题目描述：
>重写过程`insertion-sort`,使之按照非升序排序

-------
## 思路：
这个比较简单，只要注意一下`key`与已排好序的`A[0,1...j-1]`每个元素比较就行。
#### 伪代码：
	DESC-insertion-sort(A)
		for i=1 to A.length-1
	  		key=A[i]
	  		j=i-1
	  		while j>=0&&A[j]<key
				A[j+1]=A[j]
				j=j-1;
			A[j+1]=key
	end
	
#### c 代码:
```c
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
```