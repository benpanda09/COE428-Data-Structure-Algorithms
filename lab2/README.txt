Benjamin Pan, 501091678, 01/23/23

Summary of each code 

towersMain is the main program of this lab which will execute and run all the programs to solve the Towers of Hanoi

towers is a program designed to act as an library for the main program towersMain to access. This program is a recursive algoritem to help solve the Towers of Hanoi problem.



Part 1

Question 1 

a) towers(5,2,3) will call towers(4,2,1) recursively where '0' is the number of disk (x), '1' is the from where/which tower (y) and '3' is to where/which tower (z). 
b) towers(x,y,z) will be called a total of 5 times before returing to its initial invocation
c) Move #5 will be printed when the first recursive returns. After all the recursive are completed Move #3 will be initialized and will be printed (the first disk of tower 2 will be moved to tower 3). 
d) 11 recursive calls to towers(x,y,z) will be invoked for the second recursion. And this will invoke tower(1,3,1) where '1' is the number of disk (x), '3' is the from where/which tower (y) and '1' is to where/which tower (z). 
The second "loop" will be towers(0,3,2) like how it is displayed on the output. 

Question 2

The program will output 255 lines if tower(8,1,2) is invoked. 



Conclusion: 

Achieved all parts of the lab and met all requirements. 

 

