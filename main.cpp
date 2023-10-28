#include "src/algorithms.h"

int main() {
    std::unique_ptr<Algorithms> algorithms = std::make_unique<Algorithms>();
    algorithms->run();
}