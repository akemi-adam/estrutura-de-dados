def swap(v: list, i: int, j: int) -> None:
    v[i], v[j] = v[j], v[i]
    

def merge(v: list, s: int, m: int, e: int):
    w: list = []
    i: int = s
    j: int = m + 1
    length: int = e - s + 1
    for k in range(length):
        if j > e or (i <= m and v[i] < v[j]):
            w.append(v[i])
            i += 1
        else:
            w.append(v[j])
            j += 1
    for k in range(length):
        v[s + k] = w[k]