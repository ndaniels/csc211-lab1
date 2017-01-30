#include <iostream>
#include <cstdlib>

int get_max(int list[], int length) {
	int guess = 0;
	for (int i = 0; i < length; i++) {
		int candidate = list[i];
		if (candidate > guess) guess = candidate;
	}
	return guess;
}

int main(int argc, char* argv[]) {
	int numbers[argc-1];
    for (int i = 0; i < argc-1; i++) {
    	numbers[i] = atoi(argv[i]);
    }
    int max = get_max(numbers, argc-1);
    std::cout << max;
    std::cout << std::endl;
    return 0;
}

