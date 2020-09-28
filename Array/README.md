# Array
An array is the most basic data structure.
## How to initialize an array?
There are many ways to initialize an array
1. Initialization while declaring the array

The following example shows how to define and initialize an array using array literal syntax.
* JavaScript 
```javascript
var stringArray = ["one", "two", "three"];

var numericArray = [1, 2, 3, 4];

var decimalArray = [1.1, 1.2, 1.3];

var booleanArray = [true, false, false, true];

var mixedArray = [1, "two", "three", 4];
```
* C/C++
```C
int numericArray = {1, 2, 3, 4};
```
2. Initialization using loop
* C/C++
```C
int numericArray[10];
int i;
for (i=0; i<100; i++) {
    numericArray[i] = i;
}
```
3. Initialization with values from another array

Copy array items into another array.
* JavaScript
```JavaScript
var a = [ 'apple', 'orange', 'grape' ];
b = a.slice(0);
```
## How to traverse a 1D array?
In data structures, we need to traverse an array very often.
* How to traverse a 1-D array using indexes?
1. JavaScript
2. C/C++
```C
int my_array[4] = { 10, 20, 30, 40 }
int counter = 0;

for (counter = 0; counter < 4; counter++) {
    printf("%d\n", *(my_array[counter]))
}
```
* How to traverse a 1-D array using pointer?

In C/C++, we can use pointer.
```C
int my_array[4] = { 10, 20, 30, 40 }
int counter = 0;

for (counter = 0; counter < 4; counter++) {
    printf("%d\n", *(my_array + counter))
}
```