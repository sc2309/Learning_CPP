#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()   
{
	int arr[8] = {1,3,4,2,5,7,6,8};
	int n = sizeof(arr)/ sizeof(arr[0]);

	sort (arr, arr + n);
    for (int i=0; i< n; i++){ 


        cout << arr [i] << "  ";
    }
    return 0;
}

    
