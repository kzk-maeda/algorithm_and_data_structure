from typing import List
import random

def selection_sort(numbers: List[int]) -> List[int]:
  len_numbers = len(numbers)
  for i in range(len_numbers):
    min_idx = i
    for j in range(i+1, len_numbers):
      if numbers[min_idx] > numbers[j]:
        min_idx = j
    numbers[i], numbers[min_idx] = numbers[min_idx], numbers[i]
  
  return numbers

if __name__ == '__main__':
  li = [random.randint(0, 1000) for _ in range(10)]
  print(li)
  print(selection_sort(li))