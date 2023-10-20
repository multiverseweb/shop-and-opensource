#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
// Structure to represent an item (coin or banknote)
struct Item {
    string name;
    string type;
    double value;
};

// Structure to represent a user account
struct User {
    string username;
    string password;
    vector<Item> collection;
    vector<Item> shoppingCart;
};

// Function declarations
void displayMenu();
void createAccount(vector<User>& users);
bool authenticateUser(const vector<User>& users, const string& username, const string& password);
void addItemToCollection(User& user);
void viewCollection(const User& user);
void deleteItemFromCollection(User& user);
void addItemToShoppingCart(User& user);
void viewShoppingCart(const User& user);
void deleteItemFromCart(User& user);
void deleteAccount(vector<User>& users, const string& username, const string& password);
void adminMode();

// File handling functions
void saveUserData(const vector<User>& users);
void loadUserData(vector<User>& users);

int main() {
    vector<User> users;
    loadUserData(users);

    int choice;
    string username, password;
    https://multiverseweb.github.io/login/
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount(users);
                break;
            case 2:
                cout << "Enter your username: ";
                cin >> username;
                cout << "Enter your password: ";
                cin >> password;
                if (authenticateUser(users, username, password)) {
                    int userChoice;
                    do {
                        cout << "=================================================================================== User Menu =============================================================================== " << endl;
                        cout << "1. Add Item to Collection" << endl;
                        cout << "2. View Collection" << endl;
                        cout << "3. Delete Item from Collection" << endl;
                        cout << "4. Add Item to Shopping Cart" << endl;
                        cout << "5. View Shopping Cart" << endl;
                        cout << "6. Delete Item from Shopping Cart" << endl;
                        cout << "7. Delete Account" << endl;
                        cout << "8. Logout" << endl;
                        cout << "=============================================================================================================================================================================" << endl;
                        cout << "Enter your choice: ";
                        cin >> userChoice;

                        switch (userChoice) {
                            case 1:
                                addItemToCollection(users[distance(users.begin(), find_if(users.begin(), users.end(), [username](const User& u) { return u.username == username; }))]);
                                break;
                            case 2:
                                viewCollection(users[distance(users.begin(), find_if(users.begin(), users.end(), [username](const User& u) { return u.username == username; }))]);
                                break;
                            case 3:
                                deleteItemFromCollection(users[distance(users.begin(), find_if(users.begin(), users.end(), [username](const User& u) { return u.username == username; }))]);
                                break;
                            case 4:
                                addItemToShoppingCart(users[distance(users.begin(), find_if(users.begin(), users.end(), [username](const User& u) { return u.username == username; }))]);
                                break;
                            case 5:
                                viewShoppingCart(users[distance(users.begin(), find_if(users.begin(), users.end(), [username](const User& u) { return u.username == username; }))]);
                                break;
                            case 6:
                                deleteItemFromCart(users[distance(users.begin(), find_if(users.begin(), users.end(), [username](const User& u) { return u.username == username; }))]);
                                break;
                            case 7:
                                deleteAccount(users, username, password);
                                cout << "Account deleted successfully!" << endl;
                                userChoice = 8; // Log out after deleting the account
                                break;
                            case 8:
                                // Logout
                                cout<<"Logged out successfully."<< endl;
                                break;
                            default:
                                cout << "Invalid choice. Please try again." << endl;
                        }
                        saveUserData(users);
                    } while (userChoice != 8);
                } else {
                    cout << "Invalid username or password. Please try again." << endl;
                }
                break;
            case 3:
                adminMode();
                break;
            case 4:
                // Save user data to file before exiting
                saveUserData(users);
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    
    return 0;
}

// Function definitions

void displayMenu() {
    cout << "=================================================================== Numismatic Gallery Management System ==================================================================== " << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Log In" << endl;
    cout << "3. Admin Mode" << endl;
    cout << "4. Exit" << endl;
    cout << "=============================================================================================================================================================================" << endl;
}

void createAccount(vector<User>& users) {
    User newUser;
    cout << "Enter a username: ";
    cin >> newUser.username;
    cout << "Enter a password: ";
    cin >> newUser.password;
    users.push_back(newUser);
    cout << "Account created successfully!" << endl;
}

bool authenticateUser(const vector<User>& users, const string& username, const string& password) {
    auto it = find_if(users.begin(), users.end(), [username, password](const User& u) {
        return u.username == username && u.password == password;
    });

    return it != users.end();
}

void addItemToCollection(User& user) {
    Item newItem;
    cout << "Enter country name: ";
    cin >> newItem.name;
    cout << "Enter item type (coin/banknote): ";
    cin >> newItem.type;
    cout << "Enter item value: ";
    cin >> newItem.value;
    user.collection.push_back(newItem);
    cout << "Item added to collection successfully!" << endl;
}

void viewCollection(const User& user) {
    cout << "============================================================================= Your Collection ===============================================================================" << endl;
    for (const Item& item : user.collection) {
        cout << "Country: " << item.name << ", Type: " << item.type << ", Value: " << item.value << endl;
    }
    cout << "=============================================================================================================================================================================" << endl;
}

void deleteItemFromCollection(User& user) {
    string itemName;
    cout << "Enter the Country name of the item to delete: ";
    cin >> itemName;

    auto it = find_if(user.collection.begin(), user.collection.end(), [itemName](const Item& item) {
        return item.name == itemName;
    });

    if (it != user.collection.end()) {
        user.collection.erase(it);
        cout << "Item deleted from collection successfully!" << endl;
    } else {
        cout << "Item not found in collection." << endl;
    }
}

void addItemToShoppingCart(User& user) {
    Item newItem;
    cout << "Enter country name to add to shopping cart: ";
    cin >> newItem.name;
    user.shoppingCart.push_back(newItem);
    cout << "Item added to shopping cart successfully!" << endl;
}

void viewShoppingCart(const User& user) {
    cout << "============================================================================ Your Shopping Cart =============================================================================" << endl;
    for (const Item& item : user.shoppingCart) {
        cout << "Country: " << item.name << ", Type: " << item.type << ", Value: " << item.value << endl;
    }
    cout << "=============================================================================================================================================================================" << endl;
}

void deleteItemFromCart(User& user) {
    string itemName;
    cout << "Enter the Country name of the item to delete from the shopping cart: ";
    cin >> itemName;

    auto it = find_if(user.shoppingCart.begin(), user.shoppingCart.end(), [itemName](const Item& item) {
        return item.name == itemName;
    });

    if (it != user.shoppingCart.end()) {
        user.shoppingCart.erase(it);
        cout << "Item deleted from shopping cart successfully!" << endl;
    } else {
        cout << "Item not found in shopping cart." << endl;
    }
}

void deleteAccount(vector<User>& users, const string& username, const string& password) {
    auto it = find_if(users.begin(), users.end(), [username, password](const User& u) {
        return u.username == username && u.password == password;
    });

    if (it != users.end()) {
        users.erase(it);
        cout << "Account deleted successfully!" << endl;
    } else {
        cout << "Account not found." << endl;
    }
}

void adminMode() {
    string adminPassword;
    cout << "Enter admin password: ";
    cin >> adminPassword;

    // Hardcoded admin password for simplicity
    if (adminPassword == "te/ojas") {
        cout << "============================================================================== Admin Mode =================================================================================== " << endl;
        ifstream file("user_data.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cerr << "Error opening file for reading!" << endl;
        }
        cout << "=============================================================================================================================================================================" << endl;
    } else {
        cout << "Incorrect admin password. Access denied!" << endl;
    }
}

// File handling function definitions

void saveUserData(const vector<User>& users) {
    ofstream file("user_data.txt");
    if (file.is_open()) {
        for (const User& user : users) {
            file << user.username << " " << user.password << " ";
            for (const Item& item : user.collection) {
                file << item.name << " " << item.type << " " << item.value << " ";
            }
            file << endl;
        }
        file.close();
        cout << "User data saved successfully!" << endl;
    } else {
        cerr << "Error saving the data!" << endl;
    }
}

void loadUserData(vector<User>& users) {
    ifstream file("user_data.txt");
    if (file.is_open()) {
        User currentUser;
        while (file >> currentUser.username >> currentUser.password) {
            string itemName, itemType;
            double itemValue;
            while (file >> itemName >> itemType >> itemValue) {
                Item newItem;
                newItem.name = itemName;
                newItem.type = itemType;
                newItem.value = itemValue;
                currentUser.collection.push_back(newItem);
            }
            users.push_back(currentUser);
            currentUser.collection.clear(); // Clear collection for the next user
        }
        file.close();
        cout << "User data loaded successfully!" << endl;
    } else {
        cerr << "Error loading the data!" << endl;
    }
}


//link to frontend: https://multiverseweb.github.io/login/