'''
Selection Sort
'''


def selection_sort(a):
    for i in range(len(a) - 1):
        min_index = i
        for j in range(i + 1, len(a)):
            if a[j] < a[min_index]:
                min_index = j
        if i != min_index:
            a[i], a[min_index] = a[min_index], a[i]


list1 = [4, 6, 77, 3, 44, 9, 0]
print(list1)
selection_sort(list1)
print(list1)
