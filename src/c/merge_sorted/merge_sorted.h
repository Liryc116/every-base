#ifndef MERGE_SORTED_H
#define MERGE_SORTED_H

// We assume len(a)>=len(a1)+len(a2)
// len1 = len(a1)
// len2 = len(a2)
void merge_sorted(int* a1, size_t len1, int* a2, size_t len2, int* a);

#endif
