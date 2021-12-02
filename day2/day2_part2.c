/**
 * Advent of Code, 2021
 * Day 2
 * Part 2
 */
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int horizontal_position = 0;
	int depth = 0;
	int aim = 0;

	// The longest possible direction, 'forward', is 7 characters. We need space
	// for this string and a 0 at the end.
	char direction[8];
	int distance;
	while (scanf("%7s %d", direction, &distance) == 2) {
		// Note: every input is assumed to be a valid input.
		switch (direction[0]) {
			case 'f':
				// Forward
				horizontal_position += distance;
				depth += aim * distance;
				break;
			case 'd':
				// Down
				aim += distance;
				break;
			case 'u':
				// Up
				aim -= distance;
				break;
			default:
				// Invalid direction
				return EXIT_FAILURE;
		}
	}

	printf("%d\n", horizontal_position * depth);
    return EXIT_SUCCESS;
}
