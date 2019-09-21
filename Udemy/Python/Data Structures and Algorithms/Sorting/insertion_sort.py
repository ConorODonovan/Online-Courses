'''
Insertion Sort
'''


def insertion_sort(a):
    for i in range(1, len(a)):
        temp = a[i]
        j = i - 1
        while j >= 0 and a[j] > temp:
            a[j + 1] = a[j]
            j = j - 1
        a[j + 1] = temp


list1 = [5, 50, 55, 34, 3, 23323, 4343, 999]
print(list1)
insertion_sort(list1)
print(list1)
