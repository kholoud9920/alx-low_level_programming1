#include <stdio.h>
#include <limits.h>
int max(int a, int b);
int min(int a, int b);
double findMedian(int A[], int lengthA,
                           int B[], int lengthB)
{
    int low =0;
    int high = lengthA ,partitionA ,partitionB;
    int maxleftA, minrightA, maxleftB, minrightB;
    int median;
    while(low <= high)
{
    partitionA = (low + high) / 2; //partitionA
    partitionB = ((lengthA + lengthB + 1) / 2) - partitionA;
    if (partitionA == 0){
	    int maxleftA = INT_MIN;}
    else{
	    int maxleftA = A[partitionA - 1];}
    if
	    (partitionA == lengthA){
		    int minrightA =  INT_MAX;}
    else{ int minrightA =  A[partitionA];}


     if (partitionB == 0){
	     int maxleftB = INT_MIN;}
     else{
	     int maxleftB = B[partitionB - 1];}
     if
	     (partitionB == lengthB){
		      int minrightB =  INT_MAX;}
     else {int minrightB =  B[partitionB];}

    if (maxleftA <= minrightB && maxleftB <= minrightA)
    {
	    if ((lengthA + lengthB) % 2 == 0)
	    {
     return (double) (max(maxleftA , maxleftB) +
		     min(minrightA , minrightB)) / 2;
    }
    else {
	    return (int) max(maxleftA,maxleftB);
    }
    }
    else if 
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
	
    int A[] = {1,2};
    int B[] = {3,4,5};
    int lengthA = sizeof(A) / sizeof(int);
    int lengthB = sizeof(B) / sizeof(int);
	if (lengthA <= lengthB) 
	printf(" the median is:%f\n",findMedian(A,lengthA,B,lengthB));
	else
	printf("the median is:%f\n",findMedian(B,lengthB,A,lengthA));
					return 0;
}
