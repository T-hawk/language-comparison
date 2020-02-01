import java.util.Arrays;
import java.util.LinkedList;
import java.util.Random;

public class QuickSearch {
    public static void main(String[] args) {
        Integer[] vals = new Integer[] {9, 1021, 8, 3};

        System.out.println(quickSort(new LinkedList<Integer>(Arrays.asList(vals))));
    }

    public static LinkedList<Integer> quickSort(LinkedList<Integer> array) {
        if (array.size() <= 1) {
            return array;
        } else {
            Random r = new Random();

            int pivot = r.nextInt(array.size());

            LinkedList<Integer> high = new LinkedList<Integer>();
            LinkedList<Integer> low = new LinkedList<Integer>();

            for (int i = 0; i < array.size(); i++) {
                if (i != pivot) {
                    if (array.get(i) < array.get(pivot)) {
                        low.add(array.get(i));
                    } else {
                        high.add(array.get(i));
                    }
                }
            }

            LinkedList<Integer> returnVal = new LinkedList<Integer>(quickSort(low));
            returnVal.add(array.get(pivot));
            returnVal.addAll(quickSort(high));

            return returnVal;
        }
    }
}
