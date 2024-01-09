#include "Computer.h"
#include <vector>

int main() {
	setlocale(0, "");

	vector<Computer> arr;
	arr.push_back(Computer("HP", 1.2, 4, false, 20'000));
	arr.push_back(Computer("Acer", 3.2, 16, false, 35'000));
	arr.push_back(Computer("Lenovo", 2.4, 8, true, 56'000));
	arr.push_back(Computer("Samsung", 3.2, 32, true, 27'000));

	for (int i = 0; i < arr.size(); i++) {
		arr[i].show();
	}

	return 0;
}