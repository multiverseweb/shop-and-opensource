# Online Catalogue & Shop Management

C++ (Using File Handling)

## Abstract

In this project, we will try to develop an interface to facilitate the posting and fetching of information about currency which is part of our collection. The idea is to develop a program that will allow viewers of the collection to look for the currency they are interested in by entering the country it belongs to. In case the collector does not have any currency of that country, it will allow the user to add information about it from his side by filling details in fields like year, description, country, denomination and composition. In case the currency the user is looking for is present in the collection, the user will be presented with a choice whether he is looking for a coin or a banknote. Based on the user input, the interface will display all the relevant currency and the user will be able to search for a particular currency by entering its denomination. The user will be able to view the information of the currency and whether it is available for trading or not.
In this project, we will also allow the users to create customer accounts, where they can see the cart subtotal and the items, if they wish to buy currency which is available for sale. 
The essence of this project is to create a fully functional interactive collection display gallery as seen on the instagram page owned by us [@numismatic_gallery_](https://instagram.com/numismatic_gallery_)

---

## Introduction of the Numismatic Gallery Management System

We will make this project by using C++ and text file handling. It will be a menu-driven program, in which we will use different user-defined functions for different actions that the user wants to perform. Some of the actions that the user will be able to perform are:
✯ View details                  ✯ Add details
✯ Delete details                ✯ Admin mode  
✯ User login 				    ✯ Update details
✯ View Cart				        ✯ Exit
Some of the functions that we will develop for the same purpose are as follows:

<mark>Functions developed:</mark>

***country( )***: This function will look at whether the currency of the entered country exists in the collection or not.
***add_coin( )***: This function will help the user to enter information about the currency coin that is not yet part of the collection.
***add_note( )***: This function will help the user to enter information about the currency note that is not yet part of the collection.
***delete_coin( )***: This function will help the user to delete information about the currency coin which may be incorrect.
***delete_note( )***: This function will help the user to delete information about the currency coin which may be incorrect.
***accounts( )***:  This function will help in managing the customer accounts.

---
## Literature Study of Numismatic Gallery Management System

### 1. Introduction

> **1.1 Purpose:** The purpose of this document is to build an online system to manage the collection of coins and banknotes and to ease the collection management. The users/collectors must be able to post and fetch the information about an item. Also, users can create their accounts and login to them to see the contents of their shopping cart in case they want to buy from Numismatic Gallery.

> **1.2 Intended Audience:** This project is a prototype for the collection management system and will be available worldwide. The targeted audience are the collectors of numismatic items, who can fetch information such as year of mint, composition material, availability, design, estimated value, etc. of the collectible they possess or buy the item they wish for.

> **1.3 Project scope:** The purpose of this project is to create a convenient and easy-to-use application for collectors, searching for information or trying to buy items. Above all, we hope to provide a comfortable user experience along with the best pricing available. The Numismatic Gallery Management System will allow collectors to:
- Store and manage detailed information about their coin collection.
- Securely browse their collection through a login system.
- Add desired coins to a shopping cart for potential purchase.
- Complete transactions through the integrated shop feature.

> **1.4 References:** The reference for user interface for this software may be taken from the websites: [](https://multiverseweb.github.io/coinshop/) and  [](https://multiverseweb.github.io/login/) .

> **1.5  Definitions, Acronyms, and Abbreviations:**
- C++: The programming language used for software development.
- File Handling: The database management system used for data storage.
- SRS: Software Requirement Specification.

### 2. Overall Description

> **2.1 Product Perspective:** The Coin Collector Database Management System is a standalone web-based application. It interfaces with a text file database to store and retrieve coin collection and shopping cart data. The project database system stores the following information:
Item Details: It includes the information of collectibles that are already available for sale and users can fetch the information about these items or can buy them too.
Customer Details: It includes the customer account details such as customer name, password and items in cart.

> **2.2 Product Features:**
>> *2.2.1 User Authentication:*
- Users can register using their name and password.
- Secure login mechanism for accessing the system.
>> *2.2.2 Coin Collection Management:*
- Users can add, edit, and delete coin entries.
- Each coin entry includes details such as coin name, year, country, condition, and description.
- Organise collections based on attributes (e.g., year, country, condition).
>> *2.2.3 Shopping Cart Management:*
- Users can add and manage items in their shopping cart.
- Cart contents can be reviewed and modified.
- Users can complete purchases through the shopping cart.
>> *2.2.4 Shop:*
- Displays available coins for sale.
- Listings include coin name, year, country of origin, price, and availability.
>> **2.3 User Classes and Characteristics:**
- Collectors: Registered users who can manage their coin collections and make purchases.
- Admin: System administrators responsible for managing user accounts and shop listings.

> **2.4 Operating Environment:** The operating environment for the system is as follows:
 - Distributed Database	
 - Client/Server system
 - Operating System: Windows 
 - Database: Text Files
 - Backend: C++

### 3. Functional Requirements

Detailed functional requirements are specified in Section 2.2.

### 4. Non-Functional Requirements
> **4.1 Performance Requirements:**
- The system shall provide a responsive user experience.
- Database operations should be optimised for minimal latency.
> **4.2 Security Requirements:**
- User data and transactions shall be securely encrypted.
- Authentication shall prevent unauthorised access.
- Data backup and recovery mechanisms shall be implemented.
> **4.3 Usability Requirements:**
- The user interface shall be intuitive and user-friendly.

### 5. Methodology Used
> **5.1 User Interface**
 Mobile View



Desktop View


> **5.2 Hardware Interface:**
- A browser that supports HTML, CSS and JavaScript.
> **5.3  Performance:**
- The application shall load quickly and respond to user interactions in a timely manner.
- The sky map rendering shall be smooth, even on devices with lower 
processing power.
> **5.4  Open Source:**
- This should be an open source web software in which users should be able to copy the information they want.

> **5.5 Software Interfaces:**

| Software Used | Description |
|:----------:|---:|
| Operating System| We have chosen the Windows operating system for its supporting environment and its user-friendliness. |
| Database|To save records, we have chosen text files.|
|Backend Language|We have chosen C++ for its more interactive support.|

> **5.6 Communication Interface:**
 The project supports all types of web browsers and devices.

### 6. Constraints
> **6.1 Data Storage:**
Dependent on scalable databases for user accounts and interactions, adhering to privacy regulations.
> **6.2  Internet Connectivity:**
Platform requires an active internet connection for access.

### 7. Conclusion
This Software Requirement Specification (SRS) document serves as a comprehensive guide for the development of the Numismatic Gallery Management System, ensuring that all specified requirements are addressed. Detailed requirements ensure a secure, accessible, and user-friendly environment, supported by ongoing maintenance and future enhancements.

---
---

## Conclusion

In summary, the Collection Management System, developed using Python and MySQL, seamlessly integrated with a dedicated website frontend, stands as a sophisticated solution for enthusiasts managing their coin and banknote collections. The project's strength lies in the combination of Python's flexibility for backend logic and MySQL's prowess as a relational database, fostering efficient data management.

The MySQL database serves as a robust backend, ensuring the structured storage of user account details and collection items. This relational model facilitates quick and organised retrieval, updating, and deletion of data, contributing to a smooth and responsive user experience.

The frontend, embedded within a user-friendly website, significantly elevates the accessibility and usability of the system. The graphical interface enhances user interaction, offering features such as responsive design, dynamic updates, and intuitive navigation. This not only simplifies the user experience but also opens avenues for customization, branding, and extended user engagement.

Moreover, Python's adaptability augurs well for future expansions. The system can seamlessly incorporate advanced features, such as fortified user authentication methods, detailed item descriptions, and sophisticated search functionalities. The combination of a powerful backend, a user-centric frontend, and Python's extensibility establishes a foundation that accommodates the evolving needs of collectors.

In essence, the Collection Management System, with its Python-MySQL synergy and a dedicated website frontend, transcends the basic requirements of a collection management platform. It not only caters to the fundamental functionalities but also lays the groundwork for a scalable, customizable, and immersive user experience in the ever-evolving world of collection management.

---
---

```C++
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
                        cout << 
“=========================== User Menu =========================== " << endl;
                        cout << "1. Add Item to Collection" << endl;
                        cout << "2. View Collection" << endl;
                        cout << "3. Delete Item from Collection" << endl;
                        cout << "4. Add Item to Shopping Cart" << endl;
                        cout << "5. View Shopping Cart" << endl;
                        cout << "6. Delete Item from Shopping Cart" << endl;
                        cout << "7. Delete Account" << endl;
                        cout << "8. Logout" << endl;
                        cout << "=====================================================================" << endl;
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
    cout << "======================Numismatic Gallery Management System ==================================================================== " << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Log In" << endl;
    cout << "3. Admin Mode" << endl;
    cout << "4. Exit" << endl;
    cout << "=====================================================================" << endl;
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
    cout <<
"========================== Your Collection ==========================" << endl;
    for (const Item& item : user.collection) {
        cout << "Country: " << item.name << ", Type: " << item.type << ", Value: " << item.value << endl;
    }
    cout << "=====================================================================" << endl;
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
    cout << 
"=========================== Your Shopping Cart ======================" << endl;
    for (const Item& item : user.shoppingCart) {
        cout << "Country: " << item.name << ", Type: " << item.type << ", Value: " << item.value << endl;
    }
    cout << "=====================================================================" << endl;
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
        cout <<
"=========================== Admin Mode ===========================" << endl;
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
        cout << "====================================================================" << endl;
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

```

[Link to frontend.](https://multiverseweb.github.io/login/)

![Image](https://cdn.iconscout.com/icon/free/png-256/free-markdown-1-457956.png)
