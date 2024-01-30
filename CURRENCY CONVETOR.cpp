#include <iostream>
#include <iomanip>

int main() {
    
    double usdToEuroRate = 0.92;
    double usdToGBP = 0.78;
	double usdToTSH = 2515;
	double usdToRUB = 89.69;
	double usdToUGX = 3814.60;
	double usdToKES = 163;
    double usdToRand = 18.79;

  
    double amountInUSD;
    std::cout << "Enter the amount in USD: ";
    std::cin >> amountInUSD;

    
    double amountInEuro = amountInUSD * usdToEuroRate;
    double amountInGBP = amountInUSD * usdToGBP;
	double amountInTSH = amountInUSD * usdToTSH;
	double amountInRUB = amountInUSD * usdToRUB;
	double amountInUGX = amountInUSD * usdToUGX;
	double amountInKES = amountInUSD * usdToKES;
	double amountInRand = amountInUSD * usdToRand;
	
    
   
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << amountInUSD << " USD is equivalent to:" << std::endl;
    std::cout << amountInEuro << " Euro" << std::endl;
    std::cout << amountInGBP << " GBP" << std::endl;
	std::cout << amountInTSH << " TSH" << std::endl;
	std::cout << amountInRUB << " RUB" << std::endl;
	std::cout << amountInUGX << " UGX" << std::endl;
	std::cout << amountInKES << " KES" << std::endl;
	std::cout << amountInRand << " Rand" << std::endl;
	
	                     
  
  
    return 0;
}

