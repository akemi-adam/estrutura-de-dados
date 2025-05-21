#include "./sort.h"
#include "./../helpers/helpers.h"

/**
 * Implementação do Selection Sort
 * 
 * @param int* v: Vetor a ser ordenado
 * @param int n: Tamanho do vetor
 * 
 * @return void
 */
void i_selection_sort(int* v, int n) {
    for (unsigned int i = 0; i < (n - 1); i++) {
        int s = i;
        for (unsigned int j = i + 1; j < n; j++) {
            if (v[s] > v[j]) s = j;
        }
        int_swap(v, i, s);
    }
}

/**
 * Implementação do Insertion Sort
 * 
 * @param int* v: Vetor a ser ordenado
 * @param int n: Tamanho do vetor
 * 
 * @return void
 */
void i_insertion_sort(int* v, int n) {
    for (unsigned int i = 1; i < n; i++) {
        int j = i - 1;
        while (j >= 0 && v[j] > v[j + 1]) {
            int_swap(v, j + 1, j);
            j--;
        }
    }
}

/**
 * Implementação do merge sort recursiva
 * 
 * @param int* v: Array a ser ordenado
 * @param int s: Índice de início
 * @param int e: Índice de limite 
 * 
 * @return void
 */
void r_merge_sort(int* v, int s, int e) {
    if (s < e) {
        int m = (e + s) / 2;
        r_merge_sort(v, s, m);
        r_merge_sort(v, m + 1, e);
        merge(v, s, m, e);
    }
}

/**
 * Implementação do distribution sort iterativa
 * 
 * @param int* v: Array a ser ordenado
 * @param int n: Tamanho do array
 * 
 * @return void
 */
void i_distribution_sort(int* v, int n) {
    int v_min = min(v, n),
        v_max = max(v, n),
        k = v_max - v_min + 1,
        c[k], w[n];

    zeros(c, n);

    for (int i = 0; i < n; i++) c[v[i] - v_min]++;

    for (int i = 1; i < k; i++) c[i] += c[i - 1];

    for (int i = 0; i < n; i++) {
        int j = v[i] - v_min;
        w[c[j] - 1] = v[i];
        c[j]--;
    }

    for (int i = 0; i < n; i++) v[i] = w[i];
}

/**
 * Implementação do quick sort recursiva
 * 
 * @param int* v: Array a ser ordenado
 * @param int s: Índice de início
 * @param int e: Índice de limite 
 * 
 * @return void
 */
void r_quick_sort(int* v, int s, int e) {
    if (s < e) {
        unsigned int p = partition(v, s, e);
        r_quick_sort(v, s, p - 1);
        r_quick_sort(v, p + 1, e);
    }
}