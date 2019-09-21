'''
Iterative Merge Sort
'''


def merge_sort(a):
    n = len(a)
    temp = [None] * n
    size = 1
    while size <= n - 1:
        sort_pass(a, temp, size, n)
        size = size * 2


def sort_pass(a, temp, size, n):
    low1 = 0
    while low1 + size <= n - 1:
        up1 = low1 + size - 1
        low2 = low1 + size
        up2 = low2 + size - 1

        if up2 >= n:  # if length of last sublist is less than size
            up2 = n - 1

        merge(a, temp, low1, up1, low2, up2)

        low1 = up2 + 1  # Take next two sublists for merging

    for i in range(low1, n):
        temp[i] = a[i]  # If any sublist is left alone

    copy(a, temp, n)


def merge(a, temp, low1, up1, low2, up2):
    # a[low1]....a[up1] and a[low2]....a[up2] merged to temp[low1]....temp[up2]
    i = low1
    j = low2
    k = low1

    while i <= up1 and j <= up2:
        if a[i] <= a[j]:
            temp[k] = a[i]
            i += 1
        else:
            temp[k] = a[j]
            j += 1
        k += 1

    while i <= up1:
        temp[k] = a[i]
        i += 1
        k += 1

    while j <= up2:
        temp[k] = a[j]
        j += 1
        k += 1


def copy(a, temp, n):
    # copies temp[low]....temp[up] to a[low]....a[up]
    for i in range(n):
        a[i] = temp[i]


list1 = [4, 44, 1, 2, 5454, 3232, 2121, 3, 9, 99, 999, 98, 89, 22]
print(list1)
merge_sort(list1)
print(list1)
