def quick_sort(arr)
  if arr.length < 2
    return arr
  else
    pivot = arr[0]
    less = []
    greater = []

    (arr - [pivot]).each do |i|
      if i <= pivot
        less.push(i)
      else
        greater.push(i)
      end
    end

    return  quick_sort(less) + [pivot] + quick_sort(greater)
  end
end

pp quick_sort([0, 5, 3, 1, 10])
