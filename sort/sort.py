def swap(v: list, i: int, j: int) -> None:
    v[i], v[j] = v[j], v[i]


def i_insertion_sort(v: list) -> None:
    for i in range(1, len(v)):
        j: int = i - 1
        while j >= 0 and v[j] > v[j + 1]:
            swap(v, j, j + 1)
            j -= 1

                
