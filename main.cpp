#include <iostream>

int main()
{
  // Declare variables to store temperature and unit
  double temp;
  char unit;

  // Display header for the temperature conversion program
  std::cout << "\n****** Temperature Conversion ******\n";

  // Display options for temperature units
  std::cout << "F = Fahrenheit\n";
  std::cout << "C = Celsius\n";

  // Prompt user for the desired temperature unit
  std::cout << "What unit would you like to convert to: ";
  std::cin >> unit;

  // Check the selected unit and perform the conversion accordingly
  if (unit == 'F' || unit == 'f')
  {
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;

    // Convert Celsius to Fahrenheit using the formula
    temp = (1.8 * temp) + 32.0;

    // Display the converted temperature in Fahrenheit
    std::cout << "Temperature is: " << temp << "F\n";
  }
  else if (unit == 'C' || unit == 'c')
  {
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> temp;

    // Convert Fahrenheit to Celsius using the formula
    temp = (temp - 32) / 1.8;

    // Display the converted temperature in Celsius
    std::cout << "Temperature is: " << temp << "C\n";
  }
  else
  {
    // Display an error message for invalid unit input
    std::cout << "Please enter only 'C' or 'F'\n";
  }

  // Display footer for the temperature conversion program
  std::cout << "****************************************";

  // Return 0 to indicate successful program execution
  return 0;
}
