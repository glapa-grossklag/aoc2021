/**
 * Advent of Code, 2021
 * Day 2
 * Part 2
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 16
#define STREQL(s, t) (strcmp((s), (t)) == 0)

int main(void) {
	int horizontal_position = 0;
	int depth = 0;
	int aim = 0;

	char direction[SIZE];
	int distance;
	while (scanf("%s %d", direction, &distance) == 2) {
		if (STREQL(direction, "forward")) {
			horizontal_position += distance;
			depth += aim * distance;
		} else if (STREQL(direction, "down")) {
			aim += distance;
		} else if (STREQL(direction, "up")) {
			aim -= distance;
		} else {
			fprintf(stderr, "Exiting, invalid direction: \"%s\"\n", direction);
			return EXIT_FAILURE;
		}
	}

	printf("%d\n", horizontal_position * depth);
    return EXIT_SUCCESS;
}
