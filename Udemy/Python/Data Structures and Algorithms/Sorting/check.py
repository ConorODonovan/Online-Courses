def check(a, b, n):
    for i in range(0, len(a)):
        j = i
        k = i

        posIntCountLeft = 0
        posIntCountRight = 0

        while j > 0:
            j -= 1
            if a[j] > 0:
                posIntCountLeft += 1

        while k < len(a) - 1:
            k += 1
            if a[k] > 0:
                posIntCountRight += 1

        b.append(posIntCountLeft - posIntCountRight)

    return b


if __name__ == "__main__":
    lista = [5, -4, 7, -9, 0, 43, -55, -5, 9, 9, 99]
    listb = []

    print(lista)

    print(check(lista, listb, len(lista)))
