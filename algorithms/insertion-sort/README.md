- ### Insertion Sort Algorithm theory
This algorithm means basically the follow: compare all elements of an array for each element of a array (this explain the combined "for" statement), where this comparation is relative, can be between a int, can be between a string, can between a **any struct.** If the comparation (can be any comparation, depending of your purpose) is true, change the values of the array positions.

- ### Visual Explain
#### The logic
```
for each [element I] in array:
  do this: compare with all others elements of array, then:
  for each [element J] in array
    if [element I] < [element J]
      [temp element] receive [element I]
      then, [element I] receive [element J]
      and finally, [element J] receive the [temp element] (old [element I])
      repeat the same process with all elements with all others elements
      the result is a ordered array
```

#### Step by step
```
# Consider the following example of Raw no-ordered Array:
# [3] [6] [1] [8]

# To sort this in ascending order using Insertion Sort, apply:

# Variable I start in 0, so, she is pointing to Array[0] = 3
[3]
  # Variable J start in 0, so she too is pointing to 3
  3 < 3 ? No, so, do not do anything
  
  # Now, J is 1, so, she is pointing to Array[1] = 6
  3 < 6 ? Yep, so, now the array is [6] [3] [1] [8]
  
  # Now, J is 2, so, she is pointing to Array[2] = 1
  # And now, we too need see this: the element that "I" was pointing was 3, but now is 6, knowing this, continue:
  6 < 1 ? No, so, do not do anything
  
  # Now, J is 3, so, she is pointing to Array[3] = 8
  6 < 8 ? Yep, so, now the array is [8] [3] [1] [6]
  
# Now, variable I = 1, so, the the value is Array[1] = 3 (Why 3 again? Check the last step!)
[3]
  # Variable J start again in 0, so she too is pointing to 8
  3 < 8 ? Yep, so, now the array is [3] [8] [1] [6]
  
  # Now, J is 1, so, she is pointing to Array[1] = 8
  # And now, we too need see this: the element that "I" was pointing was 3, but now is 8, knowing this, continue:
  8 < 8 ? No, so, do not do anything
  
  # Now, J is 2, so, she is pointing to Array[2] = 1
  8 < 1 ? No, so, do not do anything
  
  # Now, J is 3, so, she is pointing to Array[3] = 6
  8 < 6 ? No, so, do not do anything
  
# Now, variable I = 2, so, the the value is Array[2] = 1
[1]
  # Variable J start again in 0, so she too is pointing to 3
  1 < 3 ? Yep, so, now the array is [1] [8] [3] [6]
  
  # Now, J is 1, so, she is pointing to Array[1] = 8
  # And now, we too need see this: the element that "I" was pointing was 1, but now is 3, knowing this, continue:
  3 < 8 ? Yep, so, now the array is [1] [3] [8] [6]
  
  # Now, J is 2, so, she is pointing to Array[2] = 8
  # And now, we too need see this: the element that "I" was pointing was 3, but now is 8, knowing this, continue:
  8 < 8 ? No, so, do not do anything
  
  # Now, J is 3, so, she is pointing to Array[3] = 6
  8 < 6 ? No, so, do not do anything
  
# Now, variable I = 3, so, the the value is Array[3] = 6
[6]
  # Variable J start again in 0, so she too is pointing to 1
  6 < 1 ? No, so, do not do anything
  
  # Now, J is 1, so, she is pointing to Array[1] = 3
  6 < 3 ? No, so, do not do anything
  
  # Now, J is 2, so, she is pointing to Array[2] = 8
  6 < 8 ? Yep, so, now the array is [1] [3] [6] [8]
  
  # Now, J is 3, so, she is pointing to Array[3] = 8
  # And now, we too need see this: the element that "I" was pointing was 6, but now is 8, knowing this, continue:
  8 < 8 ? No, so, do not do anything
  
# Done, the final Array is [1] [3] [6] [8], in ascending order, the magic of Insertion Sort Algorithm
# The same process is done for any Array
# Note that the loop count is the Array length raised to 2, in this case was 4^2 = 4 * 4 = 16, 16 steps was needed to order the array
```

### The output of `main.cpp`
```
Raw Array:                                                                                                              
Element 0: 3                                                                                                            
Element 1: 6                                                                                                            
Element 2: 1                                                                                                            
Element 3: 8           

Starting the sort with Insertion Sort Algorithm                                                                         
Done, the sorted array is:

Element 0: 1                                                                                                            
Element 1: 3                                                                                                            
Element 2: 6                                                                                                            
Element 3: 8
```
