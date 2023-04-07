// Program: crossProduct.cpp
// Description: prompts user for two 3D vectors and computes their cross product.
// Only computes numerical values.

#include <iostream>
#include <vector>
using namespace std;

void computeCrossProduct(vector<double>, vector<double>, vector<double>&);

int main() {
    const int VECTOR_SIZE = 3;
    vector<double> vector1(VECTOR_SIZE);
    vector<double> vector2(VECTOR_SIZE);
    vector<double> crossProduct(VECTOR_SIZE);

    // Prompt user for input
    cout << "Enter components of first vector: ";
    for (int i = 0; i < VECTOR_SIZE; i++) {
        cin >> vector1.at(i);
    }
    cout << "Enter components of second vector: ";
    for (int i = 0; i < VECTOR_SIZE; i++) {
        cin >> vector2.at(i);
    }

    // Compute cross product
    computeCrossProduct(vector1, vector2, crossProduct);

    // Output result
    cout << "Cross product: <" << crossProduct.at(0) << ", " << crossProduct.at(1) << ", " << crossProduct.at(2) << ">" << endl;

    return 0;
}

// Computes cross product of vector1 and vector2
void computeCrossProduct(vector<double> vector1, vector<double> vector2, vector<double>& crossProduct) {
    double a, b, c;
    // Compute each component of the cross product
    a = (vector1.at(1) * vector2.at(2)) - (vector2.at(1) * vector1.at(2));
    b = (vector1.at(0) * vector2.at(2)) - (vector2.at(0) * vector1.at(2));
    c = (vector1.at(0) * vector2.at(1)) - (vector2.at(0) * vector1.at(1));

    // Fill in results into crossProduct vector
    crossProduct.at(0) = a;
    crossProduct.at(1) = -b;
    crossProduct.at(2) = c;
}
