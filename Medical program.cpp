#include <iostream>
#include <string>
#include <vector>

void showMenu();
void checkSymptoms();
void readInfo();
void helpMenu();

int main() {
    int choice;

    do {
        showMenu();
        std::cout << "\nEnter your choice (1-3, 0 to exit): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                checkSymptoms();
                break;
            case 2:
                readInfo();
                break;
            case 3:
                helpMenu();
                break;
            case 0:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

void showMenu() {
    std::cout << "\n=== Main Menu ===";
    std::cout << "\n1. Check Symptoms";
    std::cout << "\n2. Read Information";
    std::cout << "\n3. Help";
    std::cout << "\n0. Exit";
    std::cout << "\n=================";
}

void checkSymptoms() {
    std::cin.ignore(); // Clear input buffer
    std::vector<std::string> symptoms;
    std::string symptom;

    std::cout << "\nEnter your symptoms one by one:\n";

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, symptom);

        if (symptom == "done") break;
        symptoms.push_back(symptom);
    }

    std::cout << "\nYou entered the following symptoms:\n";
    for (const auto& s : symptoms) {
        std::cout << "- " << s << "\n";
    }

    std::cout << "\nYour results will be processed in a moment.\n";
}

void readInfo() {
    std::cout << "\n=== Read Information ===\n";
    std::cout << "This program helps you log your symptoms and provides basic information.\n";
    std::cout << ".\n";
}

void helpMenu() {
    std::cout << "\n=== Help Menu ===\n";
    std::cout << "1. Check Symptoms: Allows you to log and review your symptoms.\n";
    std::cout << "2. Read Information: Learn more about this program.\n";
    std::cout << "3. Help: Displays this help menu.\n";
    std::cout << "0. Exit: Closes the program.\n";
}
