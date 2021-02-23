package main

import (
	"fmt"
	"../util"
)

func InsertionSort(numbers []int) []int {
	len_numbers := len(numbers)
	var temp int
	var j int
	for i := 1; i < len_numbers; i++ {
		temp = numbers[i]
		j = i - 1
		for j >= 0 && numbers[j] > temp {
			numbers[j+1] = numbers[j]
			j -= 1
		}
		numbers[j+1] = temp
	}
	return numbers
}

func main() {
	li := util.RandList(5)
	fmt.Println(li)
	fmt.Println(InsertionSort(li))
}