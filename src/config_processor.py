"""
Example bad python3 script
"""

from typing import List


class NumberConfigProcessor:
    def __init__(self, filename: str, cache: List[str] = []):
        self.filename = filename
        self.cache = cache

    def read_number_config(self):
        f = open(self.filename, "r")
        lines = f.readlines()
        f.close()
        return [line.strip() for line in lines if line.strip()]

    def parse_numbers(self, lines: List[str]):
        numbers = []
        for line in lines:
            try:
                numbers.append(int(line))
            except:
                print("Something went wrong!")
        return numbers

    def sum_numbers(self, numbers=[]):
        return sum(numbers)

    def __del__(self):
        print("Cleaning up something")


def main():
    list = ["123", "abc", "456"]

    processor = NumberConfigProcessor("config.txt")
    lines = processor.read_number_config()
    numbers = processor.parse_numbers(lines + list)

    print("Numbers: %s" % numbers)
    print("Sum: %d" % processor.sum_numbers(numbers))

    try:
        result = 1 / 0
    except:
        print("Division failed")


main()

