// Counting Occurrences - means how many times a number appeared

// Method 1: Basic Traversal and Counting - The simplest method involves traversing the entire array and counting the occurrences of the number 6. Although this method is straightforward, it is not optimal for large datasets as it requires a complete traversal of the array.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 6, 5, 6, 9, 6};
    int count = 0;
    for(int i = 0; i < 6; i++) {
        if(arr[i] == 6) {
            count++;
        }
    }
    cout << count << endl;  // Output: 3
    return 0;
}


// Method 2: Hashing for Efficient Counting - A more efficient approach involves using hashing. Here, the array is hashed into another array, often called a hash table, where the index represents the element value and the content at that index represents the count of occurrences. This method allows the counting operation to be completed in a single iteration of the array, making it highly efficient.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 6, 5, 6, 9, 6};
    int hashTable[10] = {0};
    for(int i = 0; i < 6; i++) {
        hashTable[arr[i]]++;
    }
    cout << hashTable[6] << endl;  // Output: 3
    return 0;
}