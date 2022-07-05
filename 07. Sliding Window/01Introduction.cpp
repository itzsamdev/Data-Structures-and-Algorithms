How to use Sliding Window Technique?

The general use of Sliding window technique can be demonstrated as following:

Find the size of window required 
Compute the result for 1st window, i.e. from start of data structure
Then use a loop to slide the window by 1, and keep computing the result window by window.

In general, any problem where the author is asking for any of the following return values 
can use a sliding window:

1. Minimum value
2. Maximum value
3. Longest value
4. Shortest value
5. K-sized value

Types:
1. Fixed K Sized Window
In this, The length of the window is fixed and asks you to find something in window 
such as the maximum sum of all windows,the maximum or median number of each window.
Usually, we need kind of variables to maintain the state of the window such as integer 
or array,vector or queue

2.Two Pointers + Criteria
The window sized is not fixed, ususally it asks you to find the subarray that meets the 
criteria i.e find number of subarrays whose sum is equal to target value
