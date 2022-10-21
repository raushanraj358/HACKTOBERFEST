import java.util.*;
public class SortingArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[]= new int[n];
        for(int i = 0;i < n; i++){
            a[i] = sc.nextInt();
        }
        sc.close();
        Arrays.sort(a);
        for(int x: a){
            System.out.print(x + " ");
        }
    }
}
