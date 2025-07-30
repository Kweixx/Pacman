#include <iostream>

void board(char w[20][20]) {
	std::cout << "+---------------------------------------+\n";
    for (int r = 0; r < 20; r++) {
        for (int c = 0;c < 20; c++) {
            std::cout << "|" << w[r][c];
        }
		std::cout << "|\n";
    }
    std::cout << "+---------------------------------------+\n";
}

int main()
{
    char w[20][20]; // initialize game board

    for (int r = 0; r < 20; r++) {
        for (int c = 0; c < 20; c++) {
            w[r][c] = ' ';
        }
    }

    board(w);
}
