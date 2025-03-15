#sorting function
def selectionSort(array, size):
    for i in range (size):
        min_index = i
        for j in range (i + 1, size):
            if array[j] < array[min_index]:
                min_index = j
        (array[i], array[min_index]) = (array[min_index], array[i])
        

#main
array = [4, 1, 3, 6, 2, 1, 7]
size = len(array)
print('array before sorting:')
print(array)
selectionSort(array, size)
print('array after sorting:')
print(array)









































