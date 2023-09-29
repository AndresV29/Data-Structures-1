#include <iostream>
#include <iomanip>

// Define product prices
const double PRODUCT_1_PRICE = 5.0;
const double PRODUCT_2_PRICE = 10.0;
const double PRODUCT_3_PRICE = 15.0;
const double DISCOUNT_PERCENT = 10.0;
const double CASH_DISCOUNT_PERCENT = 5.0;

int main() {
    int product1_quantity = 0;
    int product2_quantity = 0;
    int product3_quantity = 0;

    while (true) {
        // Display menu
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Product 1 ($" << PRODUCT_1_PRICE << ")" << std::endl;
        std::cout << "2. Product 2 ($" << PRODUCT_2_PRICE << ")" << std::endl;
        std::cout << "3. Product 3 ($" << PRODUCT_3_PRICE << ")" << std::endl;
        std::cout << "4. Checkout" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            product1_quantity++;
        } else if (choice == 2) {
            product2_quantity++;
        } else if (choice == 3) {
            product3_quantity++;
        } else if (choice == 4) {
            double total = (product1_quantity * PRODUCT_1_PRICE) +
                           (product2_quantity * PRODUCT_2_PRICE) +
                           (product3_quantity * PRODUCT_3_PRICE);

            double discount = 0;

            // Apply discount for buying more than 1 product
            if (product1_quantity + product2_quantity + product3_quantity > 1) {
                discount = (DISCOUNT_PERCENT / 100.0) * total;
            }

            // Apply additional discount for paying with cash
            char payWithCash;
            std::cout << "Pay with cash? (y/n): ";
            std::cin >> payWithCash;

            if (payWithCash == 'y' || payWithCash == 'Y') {
                discount += (CASH_DISCOUNT_PERCENT / 100.0) * total;
            }

            // Calculate the final total
            double finalTotal = total - discount;

            // Display the receipt
            std::cout << "\nReceipt:" << std::endl;
            if (product1_quantity > 0) {
                std::cout << "Product 1: " << product1_quantity << " x $" << std::fixed << std::setprecision(2)
                          << PRODUCT_1_PRICE << " = $" << (product1_quantity * PRODUCT_1_PRICE) << std::endl;
            }
            if (product2_quantity > 0) {
                std::cout << "Product 2: " << product2_quantity << " x $" << std::fixed << std::setprecision(2)
                          << PRODUCT_2_PRICE << " = $" << (product2_quantity * PRODUCT_2_PRICE) << std::endl;
            }
            if (product3_quantity > 0) {
                std::cout << "Product 3: " << product3_quantity << " x $" << std::fixed << std::setprecision(2)
                          << PRODUCT_3_PRICE << " = $" << (product3_quantity * PRODUCT_3_PRICE) << std::endl;
            }

            std::cout << "Subtotal: $" << total << std::endl;
            std::cout << "Discount: $" << discount << std::endl;
            std::cout << "Total: $" << finalTotal << std::endl;

            break; // Exit the loop
        } else {
            std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    }

    return 0;
}
