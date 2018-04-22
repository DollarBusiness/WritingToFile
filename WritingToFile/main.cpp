#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    int number1, number2, number3;

    // open an output file
    outputFile.open("Numbers.txt");

    //Get three numbers from user
    cout << "Give me a number: ";
    cin >> number1;
    cout << "Give me another number: ";
    cin >> number2;
    cout << "Last input for a number: ";
    cin >> number3;

    //Write the numbers to a file
    outputFile << number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    cout << "The numbers are saved to a file!" << endl;

    //close the file
    outputFile.close();
    cout << "Done\n";

    return 0;
}
