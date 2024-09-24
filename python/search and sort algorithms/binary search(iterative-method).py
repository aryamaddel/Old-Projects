"Searching an element using Binary Search"

list = [12, 45, 67, 89, 99, 100]  # sorted list

# numbner to search
number = 67


def search(list, n):
    low = 0
    high = len(list)-1
    mid = 0

    while low <= high:
        mid = (low+high)//2
        if list[mid] == n:
            return mid
        elif list[mid] < n:
            low = mid + 1
        else:
            high = mid - 1
    return False


search_result = search(list, number)
if search_result != False:
    print('Element found at : ', search_result)
elif not search_result:
    print("Element NOT Found")
else:
    print("Error")
