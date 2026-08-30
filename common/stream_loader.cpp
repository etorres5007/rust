#include <iostream>
#include <vector>

class StreamEngine {
public:
    explicit StreamEngine(int seed) : state_(seed) {}

    int encode_adapter(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 22) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    StreamEngine obj(22);
    std::cout << obj.encode_adapter(22) << std::endl;
    return 0;
}
