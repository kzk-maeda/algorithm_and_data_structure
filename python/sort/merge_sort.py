from typing import List


def merge_sort(numbers: List[int]) -> List[int]:
  if len(numbers) <= 1:
    return numbers
  
  center = len(numbers) // 2
  left = numbers[:center]
  right = numbers[center:]

  merge_sort(left)
  merge_sort(right)

  # i : 左側Listのidx
  # j : 右側Listのidx
  # k : merge後Listのidx
  i = j = k = 0
  while i < len(left) and j < len(right):
    if left[i] <= right[j]:
      numbers[k] = left[i]
      i += 1
    else:
      numbers[k] = right[j]
      j += 1
    k += 1
  
  while i < len(left):
    numbers[k] = left[i]
    i += 1
    k += 1
  
  while j < len(right):
    numbers[k] = right[j]
    j += 1
    k += 1
  
  return numbers


if __name__ == '__main__':
  import random
  li = [random.randint(0, 100) for _ in range(10)]
  print(li)
  print(merge_sort(li))