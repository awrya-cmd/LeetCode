#include <vector>

class ProductOfNumbers {
private:
    std::vector<int> prefix;

public:
    ProductOfNumbers() {
        // Initialize with 1 to handle multiplication cleanly
        prefix = {1};
    }
    
    void add(int num) {
        if (num == 0) {
            // A zero wipes out all previous products, so reset the stream
            prefix = {1};
        } else {
            prefix.push_back(prefix.back() * num);
        }
    }
    
    int getProduct(int k) {
        int n = prefix.size();
        // If k reaches back to or past the last zero, the product is 0
        if (k >= n) {
            return 0;
        }
        return prefix.back() / prefix[n - 1 - k];
    }
};
