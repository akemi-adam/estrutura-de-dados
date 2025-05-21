from helpers.helpers import swap, merge, partition

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


def i_distribution_sort(v: list):
    n = len(v)
    v_min = min(v)
    v_max = max(v)
    
    k = v_max - v_min + 1
    c = [0 for _ in range(k)]
    w = [0 for _ in range(n)]

    for i in range(n):
        j = v[i] - v_min
        c[j] += 1

    for i in range(1, k): c[i] += c[i - 1]

    for i in range(n):
        j = v[i] - v_min
        c[j] -= 1
        p = c[j]
        w[p] = v[i]

    for i in range(n): v[i] = w[i]
    
    
def r_quick_sort(v, s, e):
    if s < e:
        p: int = partition(v, s, e)
        print(v)
        r_quick_sort(v, s, p - 1)
        r_quick_sort(v, p + 1, e)