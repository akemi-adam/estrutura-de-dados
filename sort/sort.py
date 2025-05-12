from helpers.helpers import swap, merge

def i_insertion_sort(v: list) -> None:
    for i in range(1, len(v)):
        j: int = i - 1
        while j >= 0 and v[j] > v[j + 1]:
            swap(v, j, j + 1)
            j -= 1

                
def i_bubble_sort(v: list) -> None:
    sorted: bool = False
    while not sorted:
        sorted = True
        for i in range(len(v) - 1):
            if v[i] > v[i + 1]:
                swap(v, i, i + 1)
                sorted = False
                

def i_selection_sort(v: list) -> None:
    for i in range(len(v) - 1):
        s: int = i
        for j in range(i + 1, len(v)):
            if v[s] > v[j]: s = j
        swap(v, i, s)


def r_merge_sort(v: list, s: int, e: int):
    if s < e:
        m: int = (s + e) // 2
        r_merge_sort(v, s, m)
        r_merge_sort(v, m + 1, e)
        merge(v, s, m, e)
