# CST136SRS01
Mayday Mamate

Grading Name: Chris Michalsen

Solution Name: CST136SRS01  
Project Name(s): Exceptional

---

Purpose:

- Pratice using various C++ error handling mechanisms.
- Learn to use C++ exceptions.
- Understand the exception class hierarchy and how to extend it. 
- Learn about ctor options. 

Create an integer range class or struct named "RangeInt".  

Create a ctor that accepts: \[lower bound, upper bound).  
Create a default ctor is unbound on both upper and lower values.  

Create the default ctor by delegating, default parameters, or default generation.  

Create a const member for kUnboundLower and kUnboundUpper.  


I was not able to get to or figure out yet how to handle the narrowing conversions. 
Create lower bound and upper bound setters and getters. Handle narrowing conversions (float, double, long, unsigned, ...). Allow std::string and c-strings for setters and handle non-valid strings.  

Create setters for the value and throw an exception if the value exceeds the bounds. Ensure a strong exception guarantee.  

Create a getter for the value.  


I was not able to get to this
Devise a strategy for dealing with changing bounds when the value is outside the bounds.  

Write test code in main the exercises your code. Be sure to use a try/catch block and std::exception::what() in your testing code.  

Don't forget to use noexcept and const when and where applicable.  

Describe the reason(s) for your default ctor technique in the README.md.
While browsing the CppCoreGuidelines I saw that I can set the default ctor to = default which would use the initialized values in my header file. This looked clean and easy to understand.


Describe the reason you made RangeInt a struct or class. (see the cppguidelines for details.)
I made RangeInt a class because I did not want the user to have public access to its members. This way I can force them to access them through the functions I created.