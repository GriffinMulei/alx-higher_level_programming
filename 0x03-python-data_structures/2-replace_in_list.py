#!/usr/bin/python3

my_list = [1, 2, 3, 4, 5]
idx = 2
element = 10
def replace_in_list(my_list, idx, element):
    if idx < 0 and idx >= len(my_list):
        return my_list
    else:
        my_list[idx] = element
        return my_list
