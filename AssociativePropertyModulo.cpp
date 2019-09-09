// Given an array of integers A. calculate the sum of A[i] %A[j] for all possible i,j pair. 
// return sum%(10^9+7) as an output solve this problem on o(n)

#include <iostream>
using namespace std;
int main() {
	//code
	
	int arr[] = {1, 2, 4, 4, 4};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int sum = 0;
	
	for(int i =0; i < size; ++i)
	{
	    sum += arr[i];
	}
	
	int sum2 = 0;
	for(int i =0; i < size; ++i)
	{
	    sum2 += sum%arr[i];
	}	
	
	cout << (sum2%(1000000007)) << std::endl;
	
	return 0;
}
