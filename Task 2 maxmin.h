#pragma once
#ifndef MAXMIN_H
#define MAXMIN_H

template <class ItemType>
ItemType findMax(ItemType arr[], int size) {
    ItemType max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <class ItemType>
ItemType findMin(ItemType arr[], int size) {
    ItemType min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

#endif
