import random


def bogo_sort(numbers):
  # print(numbers)
  random.shuffle(numbers)
  return numbers

if __name__ == '__main__':
  li = [1,2,3,4,5]
  print(li)
  print(bogo_sort(li))