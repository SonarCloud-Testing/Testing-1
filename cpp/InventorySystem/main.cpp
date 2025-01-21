#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    string name;
    double price;
    int stock;

    Product(const string& n, double p, int s) : name(n), price(p), stock(s) {}

    void displayInfo() const {
        cout << "Product: " << name << ", Price: $" << price << ", Stock: " << stock << endl;
    }
};

int main() {
    Product p("Laptop", 899.99, 50);
    p.displayInfo();

    vector<Product> inventory;
    inventory.push_back(p);

    return 0;
}