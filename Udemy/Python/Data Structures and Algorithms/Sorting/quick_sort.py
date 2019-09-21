'''
Quick Sort
'''


def quick_sort(a):
    sort(a, 0, len(a) - 1)


def sort(a, low, up):
    if low >= up:  # zero of one element in sublist
        return
    p = partition(a, low, up)
    sort(a, low, p - 1)  # Sort left sublist
    sort(a, p + 1, up)  # Sort right sublist


def partition(a, low, up):
    pivot = a[low]
    i = low + 1  # Moves from left to right
    j = up  # Moves from right to left

    while i <= j:
        while a[i] < pivot and i < up:
            i += 1
        while a[j] > pivot:
            j -= 1

        if i < j:  # Swap a[i] and a[j]
            temp = a[i]
            a[i] = a[j]
            a[j] = temp
            i += 1
            j -= 1
        else:  # Found proper place for pivot
            break

    # Proper place for pivot is j
    a[low] = a[j]
    a[j] = pivot

    return j


list1 = [5, 77, 6, 89, 23323, 3232, 4556, 1, 2]
print(list1)
quick_sort(list1)
print(list1)
