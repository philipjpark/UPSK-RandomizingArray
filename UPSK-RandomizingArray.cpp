#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int arrayFun(int arr[], int num) {

double avg = 0.0;
int sum = 0;
int min = arr[0]; 
int max = arr[0], med;

for (int i = 0; i < num; i++) {
    avg += arr[i];
    sum += arr[i];

    if (num % 2 == 1) 
    if (min > arr[i])
        min = arr[i];

        if (max < arr[i])
        max = arr[i];
    
      cout<< "Array element at index " <<i<<": "<<arr[i]<<endl;
}
avg = avg/num;

cout<<"This is the sum: "<<sum<<endl;
cout<<"This is the average: "<<avg<<endl;
cout<<"This is the maximum number: "<<max<<endl;
cout<<"This is the minimum number: "<<min<<endl;
cout<<"This is the median: "<<med<<endl;


return 0;
}

int main() {
    int num;
    cout<< "How many numbers would you like in your array? ";
    cin>>num;
    srand(time(0));
    int a[10];

    while (num <= 0) {
      cout<< "Sorry this is an invalid input. ";
      return 0;
    }

    for (int i = 0; i < num; i++) {
      a[i] = rand() % 200 + 1;
      a[i] = rand() % 200 + 1;

    }
return arrayFun(a, num);
}

