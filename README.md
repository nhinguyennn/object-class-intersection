# object-class-intersection
C++ program that creates a Point/Rectangle class, taking 2 objects of the latter class to determine if they intersect or not. Instructions and sample output are below: 

In this assignment, you will implement two classes.

Point: A Point in a two dimensional plane has an integer x coordinate value and an integer y coordinate value.
Rectangle: A Rectangle is a class that has three attributes: 1) Point type data that represent the top-left point of the rectangle, 2) integer length and 3) integer width.
Write the appropriate class definition for Point class and Rectangle class with necessary constructors, mutator and accessor functions.

Write a function that will take two objects of Rectangle class as parameter and return whether they intersect or not.

Write a main function that will take inputs from user for two rectangles. Each rectangle requires 4 set of inputs: 1) x of top-left point, 2) y of top-left point, 3) length and 4) width.  The main function will return the 4 set of coordinate values of the rectangles and whether they intersect or not. Print the 4 set of co-ordinate values of a rectangle in the following order:
```
Top-left point
Bottom-left point
Bottom-right point
Top-right point
 ```

Sample Input:

x of rectangle 1: 2

y of rectangle 1: 4

length of rectangle 1: 2

width of rectangle 1: 3

 x of rectangle 2: 4

y of rectangle 2: 3

length of rectangle 2: 2

width of rectangle 2: 3

 

Sample Output:

Co-ordinates of rectangle 1: (2,4), (2,2), (5,2), (5,4)

Co-ordinates of rectangle 2: (4,3), (4,1), (7,1), (7,3)

They intersect.
