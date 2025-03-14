def binarySearch(arr, low, high, target):
    if high >= low:
        mid = (high + low) // 2
        
        if arr[mid] == target:
            return mid
        elif arr[mid] > target:
            return binarySearch(arr, low, min - 1, target)
        else:
            return binarySearch(arr, mid + 1, high, target)
    else:
        return -1

arr = [2, 3, 4, 10, 40]
target = 10

result = binarySearch(arr, 0, len(arr)-1, target) 

if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array") 
