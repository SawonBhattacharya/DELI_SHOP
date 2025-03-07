# DELI_SHOP

## Intermediate Programming 601.220

   Project 4
   ---------

Design and develop a program that manages a (model of a) deli shop. The deli offers several goods to buy from, including Roast Beef, Pastrami, Salami, Pickles, Black Olives, and Green Olives. Assume that each of these specific products has an unlimited supply and is sold by weight.

Customers arrive at the deli and are assigned a number (for the day). There can be at most 10 customers in the deli at any point. The deli handles one customer at a time (a simplifying assumption) and can switch the customer being served out of those currently in the deli.

## The deli has a scale. The scale weighs a single product, supporting the following operations: 
- add weight (add more of the same product)
- subtract weight (reduce the amount of the product on the scale).
- get weight (return the weight of the current amount).
- zero weight (remove whatever amount is on the scale).

There is a price list, which has default prices for each of the possible products above. The price can be adjusted for each product at any time.
## The price list supports the following operations:
- set price (for a specific product)
- get price (for a specific product)
- print price list (including all products)

A customer selects a product, tries to get a desired weight of it by adding or subtracting on a scale, and when satisfied, prices it and adds it to its cart. Then, the customer can select another product (or possibly the same product) and get another package priced and so on, until the customer decides to check out and buy whatever is in the cart according to the price printed on each package. At that point, a bill of what is in the cart is printed, including a line for each package (specifying type of product, weight, price and cost) and a total cost for the purchase. Each customer can have an unlimited number of packages.

Note - price changes affect all future packaging but do not affect
packages that are already sold or already in customer carts.

At any time, the deli can check the total product (in pounds) sold (checked out), the total revenues for each product and the total revenues for the deli from the beginning of the day.

## The following operations are supported for a cart:
- Select product
- add to cart
- print invoice so far (for packages in the cart in the order they were inserted).
- Check out - buy cart content (and print an invoice).

## The following operations are supported for the deli:
- Arrival of customer.
- Select customer to serve.
- Check out the customer that is currently being served.
- report (report the total product sold, total revenues per product and total revenues for the deli from the beginning of the day).
- New day.

Be creative in designing and implementing your program.

## 1. Design the deli program: start with class definitions and user interface. You should have at least the following classes: Deli, Cart, Price_list, Scale. Classes / objects should follow good design principles, using private variables and interface functions to enforce encapsulation.
   
## 2. Develop the program.

Submission date for having an initial typed design is Friday October 30 in the beginning of the tutorial. The tutorial will be focused on discussing the design, so no late submissions can be accepted. You can change your design after submission for the development part. Please bring a detailed typed design and all the necessary classes h files (each class with its own h file) to the tutorial on Wednesday, November 4th.

Submission date for complete project including a design document specifying classes (data structure and operation algorithms), working code for classes and a deli program with appropriate user interface is Wednesday November 11, noon. The program should work on ugrad1-24 machines. We ask that you demonstrate your program there. Submission is accomplished by e-mailing a tar file to amir220@cs.jhu.edu as usual. The tar should not include object files, executables, or core files. Please include all the necessary files for us to build and grade your submission (design, all source files, and a makefile that compiles and builds the project based on the submitted source files).
