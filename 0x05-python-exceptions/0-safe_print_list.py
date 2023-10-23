#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    nb_printed = 0
    try:
        for i in range(0, x):
            print(my_list[i])
            nb_printed += 1
    except:
        return nb_printed
    return nb_printed
