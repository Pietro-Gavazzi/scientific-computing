#include <iostream>
#include <math.h> // for pow

// using namespace std;

int main() {


    // If else

    int x = 0; // initialize integer variable x

    if (x=0)
    {
        std::cout << "Entered \"if\" body \n";
    }
    std::cout << "x = " << x << "\n";



    if (x == 100){
    std::cout << "x is " << x << std::endl;
    } else {
    std::cout << "x is not 100" << std::endl;
    }

    if(x > 0)
        std::cout << "x is positive" << std::endl;
    else if (x < 0)
        std::cout << "x is negative" << std::endl;
    else
        std::cout << "x is 0" << std::endl;




    // While do

    // WHILE LOOP

    int n = 0; // initialize integer variable n

    while (n<3) // while condition
    { // begin body of while loop
    std::cout << n << ", "; // prints the value of n
    ++n; // increases n by 1
    } // end body of while loop


    std::cout << "while loop is over" << std::endl;




    //DO-WHILE LOOP
    std::string str; // declare variable str of type string
    do { // begin do-while loop
    std::cout << "Enter \"bye\" to stop" << std::endl;
    std::getline(std::cin,str); // store user input in str
    } while (str != "bye"); // end do-while loop
    std::cout << "do-while loop is over" << std::endl;




    //RANGE-BASED "FOR" LOOP
    std::string str2 {"Hello!"}; // initializes variable str
    for (char c : str2) // the elements in a string are of type char
    {
        std::cout << "[" << c << "]";
    }
    std::cout << '\n';


    int array[2] {8, 9};
    for (int i : array)
    {
        std::cout << "[" << i << "]";
    }
    std::cout << std::endl;

    int smallest = 0;
    int smallest_not_found = 1;

    while(smallest_not_found){
        
        smallest --;

        if (1.+ pow(2, smallest-1) == 1.){
            smallest_not_found = 0;
        }
    }
    std::cout << "smallest int is " << smallest << std::endl;




    //     Write a loop to find the smallest integer i such that 1 + 2i^6 = 1 in double
    // precision. The value 2i for the obtained i is often termed the machine precision
    // (in double precision).


}