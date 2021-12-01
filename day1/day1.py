#!/usr/bin/env python3
# Advent of Code, 2021
# Day 1
import sys

def main():
    increased = 0
    previous = 0

    for line in sys.stdin:
        # If the current line cannot be converted to an integer, just ignore it.
        try:
            current = int(line)
        except ValueError:
            continue

        if current > previous:
            increased += 1

        previous = current

    # Subtract one to account for the first measurement.
    increased -= 1

    print(increased)

if __name__ == "__main__":
    main()
