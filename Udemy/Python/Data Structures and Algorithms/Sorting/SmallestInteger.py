# Find the smallest integer in a finite sequence of integers


def find_smallest(int_list):
    temp = int_list[0]
    count = 0

    for i in int_list:
        if i < temp:
            temp = i
        count += 1

    return temp, count


if __name__ == "__main__":
    my_list = [99, 44, 22, 43, 54, 65, 322, 543, 21, 45, 3, 6, 4, 333]

    print("The smallest integer in the list is {}".format(find_smallest(my_list)))
