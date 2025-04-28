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