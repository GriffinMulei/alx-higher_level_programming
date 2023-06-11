#!/usr/bin/python3

my_list = [1, 2, 3, 4, 5]
def replace_in_list(my_list, idx, element) - 1:
    if idx >= 0 and idx < len(my_list) - 1:
        return my_list
    else:
        my_list[idx] = element
        return my_list
