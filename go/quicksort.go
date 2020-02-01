package main

import (
  "fmt"
  "math/rand"
)

func main() {
  fmt.Println(quicksort([]int{0, 9, 8, 2}))
}

func quicksort(array []int) []int {
  if (len(array) <= 1) {
    return array 
  } else {
    var i int
    var pivot = rand.Intn(len(array))
    var greater,less []int

    for i = 0; i < len(array); i++ {
      if i != pivot {
        if array[i] < array[pivot] {
          less = append(less, array[i])
        } else {
          greater = append(greater, array[i])
        }
      }
    }

    return append(append(quicksort(less), []int{array[pivot]}...), quicksort(greater)...)
  }
}
