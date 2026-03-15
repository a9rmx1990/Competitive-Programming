//Reversing an array
//Reversing an array means rearranging the elements such that the first element becomes the last and the second element becomes second last and so on.//
//
//
//
#include<iostream>
#include<vector>

using namespace std;

void reversalArray(vector<int> &arr)
{
	int n=arr.size();

	vector<int> temp(n);

	for (int i =0; i<n; i++)
	{
		temp[i]=arr[n-i-1];
	}

	for ( int i =0; i<n; i++)
	{
		arr[i]= temp[i];
	}


}


int main()
{
	vector<int> arr={1,4,3,2,6,5};

	reversalArray(arr);

	for ( int i= 0; i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
