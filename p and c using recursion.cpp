#include<iostream>
using namespace std;

int permutation(int n, int r)
{
void permute(string a, int l, int r) 
{ 
	if (l == r) 
		cout<<a<<endl; 
	else
	{  
		for (int i = l; i <= r; i++) 
		{  
			swap(a[l], a[i]); 
 
			permute(a, l+1, r); 
			swap(a[l], a[i]); 
		} 

int combination(int n, int r)
{
  void combinationUtil(int arr[], int data[],  
                    int start, int end,  
                    int index, int r);  
  void printCombination(int arr[], int n, int r)  
{
    int data[r];  
  combinationUtil(arr, data, 0, n-1, 0, r);  
} 
  void combinationUtil(int arr[], int data[],  
                    int start, int end,  
                    int index, int r)  
    if (index == r)  
    {  
        for (int j = 0; j < r; j++)  
            cout << data[j] << " ";  
        cout << endl;  
        return;  
    }  
  for (int i = start; i <= end &&  
        end - i + 1 >= r - index; i++)  
    {  
        data[index] = arr[i];  
        combinationUtil(arr, data, i+1,  
                        end, index+1, r);  
    }  
}  
    
int main()  
  { 
	string str = "ABC"; 
	int n = str.size(); 
	permute(str, 0, n-1); 
	return 0; 
} 

{  
    int arr[] = {1, 2, 3, 4, 5};  
    int r = 3;  
    int n = sizeof(arr)/sizeof(arr[0]);  
    printCombination(arr, n, r);  
}  
  
{  
    return 0;
}
