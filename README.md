# a-multithreaded-program-that-will-perform-the-summation-of-nth-Factorial

Design a multithreaded program that will perform the following task- 
      A = 1! + 2! + 3! + … + n!  

 The main thread will take input of an integer (n). 
 The main thread will create n additional threads. 
 The main thread will pass each additional thread a unique integer (1 to n) as parameter.
 Each additional thread will calculate the factorial of the parameter it has received from main thread.
    o 1st additional thread will calculate 1! o 2nd additional thread will calculate 2! 
    o 3rd additional thread will calculate 3! 
    o … 
    o nth additional thread will calculate n! 
 Each additional thread will print the calculated factorial- 
    o 1st additional thread will print, “This is Thread 1, factorial = 1” 
    o 2nd additional thread will print “This is Thread 2, factorial = 2” 
    o 3rd additional thread will print “This is Thread 3, factorial = 6” 
    o … 
    o nth additional thread will print “This is Thread n, factorial = n!” 
 The main thread will wait for all additional threads to complete their tasks. Then the main thread will add the n no of factorials received from n additional threads. 
 The main thread will print “This is main thread. Value of A = ?”  

Sample I/O 

4 // value of n 
    This is Thread 1, factorial = 1 
    This is Thread 2, factorial = 2 
    This is Thread 3, factorial = 6 
    This is Thread 4, factorial = 24 
    This is main thread. 
    Value of A = 33. 

6 // value of n 
    This is Thread 1, factorial = 1 
    This is Thread 2, factorial = 2 
    This is Thread 3, factorial = 6 
    This is Thread 4, factorial = 24 
    This is Thread 5, factorial = 120 
    This is Thread 6, factorial = 720 
    This is main thread. 
    Value of A = 873.
