package src.java.array;

public class ArrayEx1 {
    public static void main(String[] args) {
        int [] temp;
        int [] arr = { 5,9,15,2,8,16,18,20,22,100};
        int n = arr.length;
        for (int i = 0; i<n; i++){
            if (arr[i]%2==0)
            System.out.println(arr[i] + "");
        }
    }
}
