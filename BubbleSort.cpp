//Bubble Sorting

#include<iostream>
using namespace std;
void Swap(int&, int&);
int main()
{
	
	int n;
	cout << "Enter the size of the array" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the Elements in array at index :" << i + 1 << endl;
		cin >> *(arr + i);
	}
	cout << "Before bubble-sorting the content of array is :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				Swap(arr[i], arr[j]);
			}
		}
	}
	cout << endl;
	cout << "After bubble-sorting the content of array is :" << endl;
	for (int i = 0; i < n; i++)
	{
			cout << arr[i] << " ";

	}

	delete[]arr;
	arr = nullptr;
}

void Swap(int&a, int&b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}