#!/usr/bin/python3


def search_replace(my_list, search, replace):
    listing = []
    listing[:] = [replace if search == i else i for i in my_list]
    return listing
