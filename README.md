
# A multithreaded program that will perform the summation of nth Factorial Using Thread 


## Design a multithreaded program that will perform the following task-
        A = 1! + 2! + 3! + … + n!

1. The main thread will take input of an integer (n).
2. The main thread will create n additional threads.
3. The main thread will pass each additional thread a unique integer (1 to n) as parameter.
4. Each additional thread will calculate the factorial of the parameter it has received from main thread.
 
 - 1st additional thread will calculate 1!
 - 2nd additional thread will calculate 2!
 - 3rd additional thread will calculate 3!
 - …
 - nth additional thread will calculate n!

5. Each additional thread will print the calculated factorial- 
 - 1st additional thread will print, “This is Thread 1, factorial = 1” 
 - 2nd additional thread will print “This is Thread 2, factorial = 2” 
 - 3rd additional thread will print “This is Thread 3, factorial = 6” 
 -  … 
 - nth additional thread will print “This is Thread n, factorial = n!” 
6. The main thread will wait for all additional threads to complete their tasks. Then the main thread will add the n no of factorials received from n additional threads. 
7. The main thread will print “This is main thread. Value of A = ?”  


## Sample I/O


#### 4 // value of n

This is Thread 1, factorial = 1

This is Thread 2, factorial = 2

This is Thread 3, factorial = 6

This is Thread 4, factorial = 24

This is main thread. Value of A = 33.

#### 6 // value of n

This is Thread 1, factorial = 1

This is Thread 2, factorial = 2

This is Thread 3, factorial = 6

This is Thread 4, factorial = 24

This is Thread 5, factorial = 120

This is Thread 6, factorial = 720

This is main thread. Value of A = 873.

