#!/usr/bin/python3
"""MyList module

MyList inherits from list
and a method that prints the sorted list.
"""


class MyList(list):
    """Defines the MyList class."""

    def print_sorted(self):
        """Prints the sorted list."""
        print(sorted(self))
