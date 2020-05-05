#!/usr/bin/python3


def no_c(my_string):
    equal = ''
    for letter in my_string:
        if letter == 'c' or letter == 'C':
            continue

        equal += letter

    return equal
