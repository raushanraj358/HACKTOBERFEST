import java.util.*;
public class array_sum {
            public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i = 0; i < n; i++){
                arr[i] = sc.nextInt();
            }
            arraySum(n, arr);
            sc.close();
        }

            private static void arraySum(int n, int[] arr) {
                int sum = 0;
                for(int j = 0; j < n; j++){
                    sum += arr[j];
                }
                System.out.println(sum);
            }
            

}
