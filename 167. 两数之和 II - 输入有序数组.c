int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
	int i,j;
	i=0;
	j=numbersSize-1;
	while(i<j)
	{
		if(numbers[i]+numbers[j]==target)
		{
			int *a=(int *)malloc(sizeof(int)*2);
			a[0]=i+1;
			a[1]=j+1;
			*returnSize=2;
			return a;
		}
		else if(numbers[i]+numbers[j]>target)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	*returnSize=0;
	return NULL;
}
