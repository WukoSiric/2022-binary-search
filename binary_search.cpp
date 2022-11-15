#include <tuple> 
#include <vector>

std::tuple<int, int> binary_search(std::vector<int> &v, int target) {
    int left = 0;
    int right = v.size() - 1;
    int mid = (left + right) / 2;
    int iterations = 0;
    while (left <= right) {
        iterations++;
        if (v[mid] == target) {
            return std::make_tuple(mid, iterations);
        } else if (v[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        mid = (left + right) / 2;
    }
    return std::make_tuple(-1, -1);
}

