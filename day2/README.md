# Day 2, Part 1

- `forward X` increases the horizontal position by X units.
- `down X` **increases** the depth by X units.
- `up X` **decreases** the depth by X units.

What is the product of the final horizontal position and the depth?

	$ cc day2_part1.c -o part1
	$ ./part1 < input

# Day 2, Part 2

- `down X` **increases** your aim by X units.
- `up X` **decreases** your aim by X units.
- `forward X` does two things:
	* It increases your horizontal position by `X` units.
	* It increases your depth by your aim **multiplied by** `X`.

What is the product of the final horizontal position and the depth?

	$ cc day2_part2.c -o part2
	$ ./part2 < input
