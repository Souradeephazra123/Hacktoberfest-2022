#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

class Solution {
public:
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int d = n % 10;
            n = n / 10;
            totalSum += d * d;
        }
        return totalSum;
    }

    bool isHappy(int n) {
        std::vector<unsigned int> seen;
        while (n != 1 && std::find(seen.begin(), seen.end(), n) == seen.end()) {
            seen.push_back(n);
            n = getNext(n);
        }
        return n == 1;
    }
};

int main() {
    std::unique_ptr<Solution> ptr(new Solution());
    std::printf("%d\n", ptr->isHappy(2));
}
