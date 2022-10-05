#ifndef ADSLAB_5_SORT_H
#define ADSLAB_5_SORT_H

#include <iostream>
#include <math.h>
#include <cctype>
using namespace std;

void Merge(int* A, int p, int q, int r);
void MergeSort(int* A, int p, int r);
void Show(int* A, int n);
void CountingSort(int* A, int n, int exp);
void RadixSort(int* A, int n);
int Partition(int* A, int p, int r);
void QuickSort(int* A, int p, int r);
int RandomizedPartition(int* A, int p, int r);
int RandomizedSelect(int* A, int p, int r, int i);
#endif //ADSLAB_5_SORT_H
