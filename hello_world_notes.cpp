// iostream is used for standard input and output operations;
#include <iostream>

 /* int refers to the data type of the return value for the function,
 in this case 0; main is the entry point of the program, and is required
 for every C++ program; */
 int main() {
    /* std::cout is an object in the C++ Standard Library input/output stream (iostream),
    used for sending output to the standard output stream, e.g. the terminal;
    std:: is the namespace in which the cout object is defined; :: is the scope
    resolution operator, used to specify that cout is part of the std namespace;
    C++ SL components are typically placed in the std namespace to avoid naming conflicts;
    cout is the output stream object used for sending data to the standard output, it stands
    for 'character ouput'; << is the stream insertion operator, used to insert data into the 
    output stream; std::endl is used to insert a newline character and flush the output buffer,
    it is equivalent to a newline character, \n; */
    std::cout << ("Hello, world!") << std::endl;
    // The value 0 typically signifies that program completed without any errors;
    return 0;
 }

 /* To compile your program on Windows, you can navigate to the local repo
 and run the command "g++ -o <executable-name> <source-filename>", e.g.
 "g++ -o hello_world hello_world.cpp" ; then run your executable like so,
 ".\hello_world" ; */
