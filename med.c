#include <stdio.h>
#include <limits.h>
int max(int a, int b);
int min(int a, int b);
double findMedian(int A[], int lengthA,
                           int B[], int lengthB)
{
    int low =0;
    int high = lengthA ,partitionA ,partitionB;
    int median;
    while(low <= high)
{
    partitionA = (low + high) / 2; //partitionA
    partitionB = ((lengthA + lengthB + 1) / 2) - partitionA;
    int maxleftA = partitionA == 0 ? INT_MIN : A[partitionA - 1];
    int minrightA = partitionA == lengthA ? INT_MAX : A[partitionA];
    
    int maxleftB = partitionB == 0 ? INT_MIN : A[partitionB - 1];
    int minrightB = partitionB == lengthB ? INT_MAX : A[partitionB];
    
    if (maxleftA <= minrightA && maxleftB <= minrightA)
    {if ((lengthA + lengthB) % 2 == 0)
	    {
        return (double) (max(maxleftA , maxleftB) +
			min(minrightA , minrightB)) / 2;
    }
    else {
        return (double) (max(maxleftA , maxleftB)) / 2;
    }
     if 
        (maxleftA > minrightB)
        {
            high = partitionA - 1;
        }
        else {
            low = partitionA + 1;
        }
        }
    }
     
// Function to find max
int max(int a, int b)
{
    return a > b ? a : b;
}
 
// Function to find minimum
int min(int a, int b)
{
    return a < b ? a : b;
}
int main() {
	//code
	
    int A[] = {1,3};
    int B[] = {2};
    int lengthA = sizeof(A) / sizeof(int);
    int lengthB = sizeof(B) / sizeof(int);
    double median = findMedian(A, lengthA, B, lengthB);
	if (lengthA < lengthB) 
	{printf(" the median is:%f\n",findMedian(A,lengthA,B,lengthB));
	}
	else{
	printf("the median is:%f\n",findMedian(B,lengthB,A,lengthA));
					return 0;
}
}
}
