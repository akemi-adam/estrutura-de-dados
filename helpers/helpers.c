#include "./helpers.h"

/**
 * Troca dois inteiros de lugar em um array
 * 
 * @param int* v: Array de inteiros
 * @param int i: Primeiro índice
 * @param int j: Segundo índice
 * 
 * @return void
 */
void int_swap(int* v, int i, int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

/**
 * Compara dois arrays, monta um array ordenado a partir dessa comparação e substitui no array original
 * 
 * @param int* v: Array de inteiros
 * @param int s: Início do array
 * @param int m: Meio do array
 * @param int e: Final do array
 */
void merge(int* v, int s, int m, int e) {
    int len = e - s + 1,
        i = s,
        j = m + 1,
        w[len];
    
    for (unsigned int k = 0; k < len; k++) {
        if ((j > e) || (i <= m && v[i] < v[j])) {
            w[k] = v[i];
            i++;
        } else {
            w[k] = v[j];
            j++;
        }
    }

    for (unsigned int k = 0; k < len; k++) v[s + k] = w[k];
}

int min(int* v, int n) {
    int number = v[0];
    for (unsigned int i = 1; i < n; i++)
        if (number > v[i]) number = v[i];
    return number;
}

int max(int* v, int n) {
    int number = v[0];
    for (unsigned int i = 1; i < n; i++)
        if (number < v[i]) number = v[i];
    return number;
}

void zeros(int* v, int n) {
    for (unsigned int i = 0; i < n; i++) v[i] = 0;
}

int partition(int* v, int s, int e) {
    unsigned int p = s - 1;
    for (unsigned int i = s; i < e; i++) {
        if (v[i] <= v[e]) {
            p++;
            int_swap(v, i, p);
        }
    }
    p++;
    int_swap(v, p, e);
    return p;
}