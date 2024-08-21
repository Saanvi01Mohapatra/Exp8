

   // Varun Pendem
// PRN: 23070123149

#include<iostream>
#define size5 5
using namespace std;

int main()
{     int arr1[5] = {1,2,3,4,5};
      int arr2[5] = {5,4,3,2,1};
      int arr3[size5];
      int sum5 = 0;
      int target;

// Printing elements in array
      for(int i = 0; i < 5; i++){
            cout<<arr1[i]<<" ";
      }
      cout<<endl;

      for(int j = 0; j<size5 ; j++){
            cin>>arr3[j];
      }
      cout<<endl;

// Sum of elements and average
int avg = sum5/size5;
      for(int k = 0; k<size5; k++){
            sum5 = sum5 + arr3[k];
      }
      cout<<"The sum of the elements in the array is:"<<sum5<<endl;
      cout<<"The average of the elements in the array is:"<<avg<<endl;


// Reversing an array 
     
     for(int m = 5; m>5; m--){
        cout<<arr2[m]<<"";
     }
     cout<<endl;

// Finding array ith count and flag

int marks[5], num, flag=0, count=0, i,j;
for(i=0;i<5;i++) {
cout<<"Enter element-"<<i+1<<": ";
cin>>marks[i];
}
cout<<"Enter element to be searched: ";
cin>>num;
for(j=0;j<5;j++) {
if(marks[j]==num) {
cout<<"Position of "<<num<<": "<<j+1<<endl;
count++;
flag=1;
}
}
if(flag==0) {
cout<<"Element not present";
}
else if(flag==1) {
cout<<"Element is present: "<<count<<" times";
}

// Max and Min in an array

int n, max=0;
cout<<"Enter number of elements: ";
cin>>n;
int a[n];
for(i=0;i<n;i++){
cout<<"Enter element-"<<i<<": ";
cin>>a[i];
}
for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
int min=a[0];
for(i=0;i<n;i++){
if(min>a[i]){
min=a[i];
}
}
cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;

    return 0;
}