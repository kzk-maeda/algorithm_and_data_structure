import random
from typing import List

def in_order(numbers: List[int]) -> bool:
  for i in range(len(numbers)-1):
    if numbers[i] > numbers[i+1]:
      return False
    
  return True

  # all(numbers[i] <= numbers[i+1] for i in range(len(numbers)-1))

def bogo_sort(numbers: List[int]) -> List[int]:
  # print(numbers)
  while not in_order(numbers):
    random.shuffle(numbers)
  return numbers

if __name__ == '__main__':
  li = [1,3,4,2,5]
  print(li)
  print(bogo_sort(li))