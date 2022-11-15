#include <iostream> 
#include "binary_search.h"
#include <vector>
#include <tuple>

// Create vector of ints
std::vector<int> create_vector(int smallest, int largest) {
    std::vector<int> new_vector;
    for (int i = smallest; i < (largest+1); i++) {
        new_vector.push_back(i);
    }
    return new_vector;
}

int main() {
    // Creating vector from 1 .. 999
    std::vector<int> range = create_vector(1,999);

    std::tuple<int, int> result = binary_search(range, 20);
    // Binary Search For 20 
    std::cout << "Binary Search For 20" << std::endl;
    std::cout << "Index: " << std::get<0>(result) << std::endl;
    std::cout << "Iterations: " << std::get<1>(result) << std::endl;
    
    return 0;
}