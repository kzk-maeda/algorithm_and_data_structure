package main

import (
	"fmt"
	"../util"
)

func BogoSort(numbers []int) []int {
	for !util.InOrder(numbers) {
	util.Shuffle(numbers)
	}
	return numbers
}

func main() {
	// li := []int{1,3,2,6,5}
	li := util.RandList(5)
	fmt.Println(li)
	fmt.Println(BogoSort(li))
}