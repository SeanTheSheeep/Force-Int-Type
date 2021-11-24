
#include <iostream>
#include <string>

using namespace std;

int integerScanner(string answer)
{
    try {
        int n = stoi(answer); //tries to convert to integer from string
      
        //You MAY throw an error here if the string contains a decimal tp prevent a float type.
      
        return n; // returns the integer
    }
    catch (...)
    {
        cout << "error, try again" << endl;
        cin >> answer;
        return integerScanner(answer); //goes back into the function with the new input (line 7)
    }
}

int main()
{
    string ticket = "ABC"; //you CAN change this to an input

    int ticketNumber = integerScanner(ticket); //calls function until the number is a integer type

    cout << "Ticket number:" << ticketNumber;
}

