'''
Bubble Sort
'''


def bubble_sort(a):
    for x in range(len(a) - 1, 0, -1):
        swaps = 0
        for j in range(x):
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                swaps += 1
        if swaps == 0:
            break


list1 = [3, 0, 44, 543, 2323, 2, 1, 9, 88]
print(list1)
bubble_sort(list1)
print(list1)
