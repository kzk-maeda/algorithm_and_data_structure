from typing import List

# Listのソート範囲の最後尾が最大値となるよう、繰り返し比較処理を実行する

def bubble_sort(numbers: List[int]) -> List[int]:
  len_numbers = len(numbers)
  for i in range(len_numbers):
    for j in range(len_numbers - 1 - i):
      if numbers[j] > numbers[j+1]:
        numbers[j], numbers[j+1] = numbers[j+1], numbers[j]
  
  return numbers
      

if __name__ == '__main__':
  nums = [2,6,4,1,3]
  print(nums)
  print(bubble_sort(nums))