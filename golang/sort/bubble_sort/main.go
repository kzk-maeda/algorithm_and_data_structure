package main

import (
	"fmt"
	"../util"
)

func BubbleSort(numbers []int) []int {
	len_numbers := len(numbers)
	for i := 0; i < len_numbers - 1; i++ {
		for j := 0; j < len_numbers - 1 - i; j ++ {
			if numbers[j] > numbers[j+1] {
				numbers[j], numbers[j+1] = numbers[j+1], numbers[j]
			}
		}
	}
	return numbers
}

func main() {
	li := util.RandList(5)
	fmt.Println(li)
	fmt.Println(BubbleSort(li))
}