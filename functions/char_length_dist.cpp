#include <cstdio>
#include <map>
#include <cstring>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Please provide some argument to the program.\n");
        return -1;
    }

    std::map<size_t, int>occurrences;

    for (size_t i{ 1 }; i < argc; i++) {
        auto word_size{ strlen(argv[i]) };
        occurrences[word_size] += 1;
    }

    for (auto entry: occurrences) {
        printf("%zd: ", entry.first);
        for (size_t i{}; i < entry.second; i++) {
            printf("*");
        }
        printf("\n");
    }
}