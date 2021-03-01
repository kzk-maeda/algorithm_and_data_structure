package main

import (
	"fmt"
	"../util"
)

func partition(numbers_address *[]int, low int, high int) int {
	numbers := *numbers_address
	i := low - 1
	pivot := numbers[high]
	for j := low; j <= high; j ++ {
		if numbers[j] <= pivot {
			i += 1
			numbers[i], numbers[j] = numbers[j], numbers[i]
		}
	}
	numbers[i+1], numbers[high] = numbers[high], numbers[i+1]

	return i+1
}

func QuickSort(numbers *[]int) []int {
	_quickSort(numbers, 0, len(*numbers)-1)
	return *numbers
}

func _quickSort(numbers *[]int, low int, high int) {
	if low < high {
		fmt.Println(*numbers)
		partition_index := partition(numbers, low, high)
		_quickSort(numbers, low, partition_index-1)
		_quickSort(numbers, partition_index+1, high)
	}
}

func main()  {
	li := util.RandList(5)
	fmt.Println(li)
	fmt.Println(QuickSort(&li))
}
