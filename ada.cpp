#include <iostream>
using namespace std;

// Function to sort the array in ascending order (bubble sort)
void sort(int arr[], int n) {

	//print files before shifting
	static int p=0;
	cout<<"Pass => "<<p<<endl;
	p++;
	for (int i = 0; i < n; i++) 
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n\n";


	for (int i = 0; i < n - 1; i++) {
		// Last i elements are already in place
		for (int j = 0; j < n - i - 1; j++) 
		{
			
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//print files after shifting
	cout<<"Rearrange the elements : \n";
	for (int i = 0; i < n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<"\n-------------------------";
	cout<<"\n\n";
}


// Function to perform Optimal Merge Pattern
int optimalMergePattern(int files[], int n) 
{
	int totalCost = 0;

	for (int i = 0; n > 1; n--) 
	{
		// Sort the array to get two smallest elements
		sort(files, n);

		// Merge the two smallest files
		int merged = files[0] + files[1];
		totalCost = totalCost + merged;

		// Replace the first element with the merged file
		files[0] = merged;

		// Shift the remaining elements to the left
		for (int j = 1; j < n - 1; j++) 
		{
			files[j] = files[j + 1];
		}
	}
	return totalCost;
}
int main() 
{
	int files[] = {20, 30, 10, 5,3,5,6,7,8,9};
	int n = sizeof(files) / sizeof(files[0]);


	int cost = optimalMergePattern(files, n);
	cout << "Minimum total cost of merges: " << cost << endl;

	return 0;
}




