#!/usr/bin/python3

def new_in_list(my_list,idx, element):
    my_list = [1, 2, 3, 4, 5]
    idx = 3
    new_element = 9
    new = list(my_list)
    if idx < 0 or idx > len(my_list) -1:
        return (new)
    else:
        new[idx] = element
        return (new)
