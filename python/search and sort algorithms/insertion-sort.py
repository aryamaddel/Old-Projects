arr = [4,3,2,74,23,12,34,54,2,3,1,4,5,6,7,8,9,10,11,13,14,15,16,17,18,19,20]

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1 
        while j>=0 and arr[j]>=key:
            arr[j+1] = arr[j]
            j -=1
        arr[j+1] = key
    return arr

print(insertion_sort(arr))