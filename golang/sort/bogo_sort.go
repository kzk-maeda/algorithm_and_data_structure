package main

import (
	"fmt"
	"math/rand"
)

func BogoSort(numbers []int) []int {
	for !inOrder(numbers) {
		shuffle(numbers)
	}
	return numbers
}


func inOrder(numbers []int) bool {
	for i := 0; i < len(numbers) - 1; i++ {
		if numbers[i] > numbers[i+1] {
			return false
		}
	}
	return true
}

func shuffle(a []int) []int {
	for i := range a {
		j := rand.Intn(i + 1)
		a[i], a[j] = a[j], a[i]
	}
	return a
}

func main() {
	li := []int{1,3,2,6,5}
	fmt.Println(li)
	fmt.Println(BogoSort(li))
}