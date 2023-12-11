#include <iostream>

double CelToFah(double celsius)     //Celsius to Fahrenheit
{
  return (celsius * 9.0 / 5.0) + 32.0;
}

double FahToCel(double fahrenheit)  //Fahrenheit to Celsius
{
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double CelToKel(double celsius)   //Celsius to Kelvin
{
  return celsius + 273.15;
}

double KelToCel(double kelvin)   //Kelvin to Celsius
{
  return kelvin - 273.15;
}

int main()
{
  int choice;
  double temperature, converted_temperature;

  std::cout << "Temperature Converter" << std::endl;
  std::cout << "1. Celsius to Fahrenheit" << std::endl;
  std::cout << "2. Fahrenheit to Celsius" << std::endl;
  std::cout << "3. Celsius to Kelvin" << std::endl;
  std::cout << "4. Kelvin to Celsius" << std::endl;
  std::cout << "Enter your choice (1-4): ";
  std::cin >> choice;

  std::cout << "Enter the temperature: ";
  std::cin >> temperature;

  switch (choice)
  {
  case 1:
      converted_temperature = CelToFah(temperature);
      break;
  case 2:
      converted_temperature = FahToCel(temperature);
      break;
  case 3:
      converted_temperature = CelToKel(temperature);
      break;
  case 4:
      converted_temperature = KelToCel(temperature);
      break;
  default:
      std::cout << "Invalid choice." << std::endl;
      return 1;
  }

  std::cout << "Converted Temperature: " << converted_temperature << std::endl;

  return 0;
}