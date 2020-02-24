def quick_sort(array):
    if len(array) <= 1:
        return array
    else:
        pivot = array[0]
        array.remove(pivot)
        high, low = [], []
        for num in array:
            if num < pivot:
                low.append(num)
            else:
                high.append(num)
        return quick_sort(low) + [pivot] + quick_sort(high)

print(quick_sort([0, 5, 1, 4, 9]))
