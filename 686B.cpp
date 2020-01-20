
#include <bits/stdc++.h> 
using namespace std; 
void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
            cout<<j+1<<" "<<j+2<<endl;
           swap(&arr[j], &arr[j+1]); 
           swapped = true; 
        } 
     } 
  
    
     if (swapped == false) 
        break; 
   } 
} 

int main() 
{ 
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
	bubbleSort(a, x); 
	return 0; 
} 


