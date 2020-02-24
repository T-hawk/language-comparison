fn swap(array: &mut [i32], a: usize, b: usize) {
    let temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

fn partition(array: &mut [i32], low: usize, high: usize) -> i32 {
    let pivot = array[high];
    let mut i = low;
    let mut j = low;
    while j < high {
        if array[j] < pivot {
            swap(array, i, j);
            i+=1;
        }
        j+=1
    }

    swap(array, i , high);
    return i as i32;
}

fn quick_sort(array: &mut [i32], low: usize, high: usize) {
    if low < high {
        let pivot = partition(array, low, high);

        if pivot == 0 {
            quick_sort(array, low, pivot as usize);
        } else {
            quick_sort(array, low, (pivot - 1) as usize);
        }
        quick_sort(array, (pivot + 1) as usize, high);
    }
}

fn main() {
    let mut array: [i32; 10] = [0, 17, 0, 9, 1, 2, 3, 2, 1, 6];
    let size = array.len() - 1;
    quick_sort(&mut array, 0, size);
    println!("Array: {:?}", array);
}
