package util

import (
	"time"
	"math/rand"
)

func RandList(number int) []int {
	var slice []int
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < number; i++ {
		slice = append(slice, rand.Intn(100))
	}
	return slice
}

func Shuffle(a []int) []int {
	for i := range a {
		j := rand.Intn(i + 1)
		a[i], a[j] = a[j], a[i]
	}
	return a
}

func InOrder(numbers []int) bool {
	for i := 0; i < len(numbers) - 1; i++ {
		if numbers[i] > numbers[i+1] {
			return false
		}
	}
	return true
}