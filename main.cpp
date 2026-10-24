#include <cassert>
#include <iostream>
#include <string>
#include <vector>

int countPassed(const std::vector<int>& scores) {
    int passed = 0;
    for (int score : scores) {
        if (score >= 60) ++passed;
    }
    return passed;
}

int main(int argc, char** argv) {
    if (argc > 1 && std::string(argv[1]) == "--test") {
        assert(countPassed({59}) == 0);
        assert(countPassed({60}) == 1);
        assert(countPassed({61}) == 1);
        assert(countPassed({80}) == 1);
        assert(countPassed({}) == 0);
        std::cout << "All tests passed\n";
        return 0;
    }
    std::vector<int> scores;
    int score;
    while (std::cin >> score) scores.push_back(score);
    std::cout << countPassed(scores) << '\n';
}
