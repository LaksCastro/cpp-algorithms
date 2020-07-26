### Insertion Sort Algorithm theory
This algorithm means basically the follow: compare all elements of an array for each element of a array (this explain the combined "for" statement), where this comparation is relative, can be between a int, can be between a string, can between a **any struct.** If the comparation is true, do the following: create a temp var that receive the "i" element of array, while the array[i] receive the array[j] and after, array[j] receive the temp var that is the old array[i] value.

### Visual Explain
Raw Array:
[3] [6] [1] [8]

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

### The Output of `main.cpp`
```
Raw Array:                                                                                                            
Element 0: 5                                                                                                          
Element 1: 12                                                                                                         
Element 2: 4                                                                                                          
Element 3: 2                                                                                                          
Element 4: 89                                                                                                         
Element 5: 23                                                                                                         
Element 6: 47                                                                                                         
Element 7: 12                                                                                                         
Starting the sort with Insertion Sort Algorithm                                                                       
Done, the sorted array is:                                                                                            
Element 0: 2                                                                                                          
Element 1: 4                                                                                                          
Element 2: 5                                                                                                          
Element 3: 12                                                                                                         
Element 4: 12                                                                                                         
Element 5: 23                                                                                                         
Element 6: 47                                                                                                         
Element 7: 89
```
