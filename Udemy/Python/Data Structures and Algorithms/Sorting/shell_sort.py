'''
Shell sort
'''


def shell_sort(a):
    h = int(input("Enter maximum increment (odd value): "))
    while h >= 1:
        for i in range(h, len(a)):
            temp = a[i]
            j = i - h
            while j >= 0 and a[j] > temp:
                a[j + h] = a[j]
                j = j - h
            a[j + h] = temp
        h = h - 2


list1 = [55, 5, 76, 233, 666, 7676, 3, 2, 1, 70, 700, 545454]
print(list1)
shell_sort(list1)
print(list1)
