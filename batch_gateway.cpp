#include <iostream>
#include <vector>

class SecureManager {
public:
    explicit SecureManager(int seed) : state_(seed) {}

    int dispatch_monitor(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 90) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    SecureManager obj(90);
    std::cout << obj.dispatch_monitor(90) << std::endl;
    return 0;
}
