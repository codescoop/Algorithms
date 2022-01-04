/* 
    Topic - Next Permutation
    
    We will cover:
    - rotate()
    - next_permutation()

*/

#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

void print_array(int arr[], int size){
    for(int idx=0; idx<=size-1; ++idx){
        cout << arr[idx] << " ";
    }
    cout << endl;
}

void print_vector(vector<int> v){
    for(int x:v){
        cout << x << " ";
    }
    cout << endl;
}



int main()
{
    vector<int> v{1,2,3,4,5,6,7,8,9,10,11};

    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);

    /*  Rotate Function: It rotates the order of the elements in the range [first,last], 
                         in such a way that the element pointed by middle becomes the 
                         new first element. 

        Syntax :  void rotate(ForwardIterator first, ForwardIterator middle, ForwardIterator last)
    */

    // using rotate() on arrays (towards Left)
    cout << "Array: ";
    print_array(arr,size);

    rotate(arr, arr+2, arr+size);         // rotate array twice (towards left)
    cout << "After Left Rotate (twice): ";
    print_array(arr,size);
    cout << endl;

    // using rotate() on arrays (towards Right)
    cout << "Array: ";
    print_array(arr,size);

    rotate(arr, arr+(size-2), arr+size);    // rotate array twice (towards right)
    cout << "After Right Rotate (twice): ";
    print_array(arr,size);
    cout << endl;

    // using rotate() on vectors
    cout << "Vector: ";
    print_vector(v);

    rotate(v.begin(), v.begin()+4, v.end());  // rotate vector 4 times (towards left)

    cout << "After Left Rotate (4 times): ";
    print_vector(v);
    cout << "\n\n";



    /*  Next Permutation  It is used to rearrange the elements in the range [first, last) 
                          into the next lexicographically greater permutation.

        Return Value:     true: if the function could rearrange  the object as a 
                          lexicographically greater permutation.
                          false to indicate that the arrangement is not greater than the 
                          previous,but the lowest possible (sorted in ascending order).

        Syntax:  bool next_permutation (BidirectionalIterator first, BidirectionalIterator last); 
    */

    vector<int> v1{1,2,3};

    int arr1[] = {10,20,30,40};
    size = sizeof(arr1)/sizeof(int);

    // using next_permutation() on array
    cout << "Array: ";
    print_array(arr1,size);

    next_permutation(arr1, arr1+size);                // next permutation

    cout << "After next permutation: ";
    print_array(arr1,size);
    cout << endl;
    

    // using next_permutation() on vectors
    cout << "Vector: ";
    print_vector(v1);

    next_permutation(v1.begin(), v1.end());         // next permutation

    cout << "After next permutation: ";
    print_vector(v1);


    // Printing all permutaion values
    vector<int> v2{1,2,3};

    cout << "\nAll permutation value of Vector v2: ";
    print_vector(v2);

    cout << "v2: ";       // first value
    print_vector(v2);

    while(next_permutation(v2.begin(), v2.end())){
        cout << "v2: ";
        print_vector(v2);
    }

    return 0;
}

/* 
OUTPUT: 

Array: 10 20 30 40 50 
After Left Rotate (twice): 30 40 50 10 20 

Array: 30 40 50 10 20 
After Right Rotate (twice): 10 20 30 40 50 

Vector: 1 2 3 4 5 6 7 8 9 10 11 
After Left Rotate (4 times): 5 6 7 8 9 10 11 1 2 3 4 



Array: 10 20 30 40 
After next permutation: 10 20 40 30 

Vector: 1 2 3 
After next permutation: 1 3 2 

All permutation value of Vector v2: 1 2 3 
v2: 1 2 3 
v2: 1 3 2 
v2: 2 1 3 
v2: 2 3 1 
v2: 3 1 2 
v2: 3 2 1 
*/
