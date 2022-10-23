import heapq


def parent(i):
    return (i-1) // 2


def right(i):
    return (i * 2) + 2


def left(i):
    return (i*2) + 1


def build_max_heap(nums):
    for i in range(len(nums) // 2, -1, -1):
        max_heapify(nums, i)


def max_heapify(nums, i):
    l = left(i)
    r = right(i)
    largest = -100000
    if l < len(nums) and nums[l] > nums[i]:
        largest = l
    else:
        largest = i

    if r < len(nums) and nums[r] > nums[largest]:
        largest = r

    if largest != i:
        nums[i], nums[largest] = nums[largest], nums[i]
        max_heapify(nums, largest)


if __name__ == "__main__":
    nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
    nums2 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]

    # max heap
    heapq._heapify_max(nums)
    print("MAX heap from built in heapq: ")
    print(nums)

    build_max_heap(nums2)
    print("MAX heap manually implemented: ")
    print(nums2)
