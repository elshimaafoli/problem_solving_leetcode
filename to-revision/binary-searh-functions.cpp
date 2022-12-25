/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>
using namespace std;

int
main ()
{

  int arr[] = { 1, 4, 5, 9, 14, 20, 50, 75, 90, 100 }, n = 10;
  // to make array unsorted and print it..
  random_shuffle (arr, arr + n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << ' ';

  // to sort array ...
  sort (arr, arr + n);
  // must sorted array to use binary search or its functions.
  // return true if the number exists in array, false if not exist.
  cout << binary_search (arr, arr + n, 14) << ' ';

  // return the index of target number as pointer 
  int *ptr = lower_bound (arr, arr + n, 50);

  /* to return the index as value ,
   * we can delete address of array from the returned address
   * (returned pointer -> arr+ind)-(arr first address)=index;
   */

  // if target not exist ,
  //the func will return the index of number is greater than  target.
  // if target = max value in arr --> func will return (arr+n).

  int ind = lower_bound (arr, arr + n, 500) - arr;
  // with vector int k= lower_bound(v.begin(), v.end(), 14) - v.begin();
  cout << ind << ' ';


  // like lower_func ,the only difference ,return just greater num than target
  int ind2 = upper_bound (arr, arr + n, 10) - arr;
  cout << ind2 << endl;
  return 0;
}
