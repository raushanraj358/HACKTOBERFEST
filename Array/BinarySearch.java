import java.util.Scanner;
public class Binary_Search {
    static int solve(int a[],int n,int key){
        int start = 0; 
        int end = n-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(a[mid] == key){
                return mid;
            }
            else if(a[mid] > key){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;


    }
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        int key = sc.nextInt();
        int result = solve(a,n,key);
        if(result == -1){
            System.out.println("Searched number doesn't exist");
        }
        else{
            System.out.println("Hurrah! Searched number is found");
        }

    }
    
}


// Another code for multiple test cases
package basic;
import java.util.Scanner;
 
public class BinarySearch {
	static int Search(int a[], int n, int key) {
		int start = 0;
		int end = n-1;
		while(start <= end) {
			int mid = start+(end-start)/2;
			if(a[mid]==key) {
				return mid;
			}
			else if(a[mid] < key) {
				start = mid+1;
			}
			else {
				end = mid - 1;
			}
		}
		return -1;
	}
	public static void main(String[] args) {
		int t;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t--!=0) {
			int n;
			n = sc.nextInt();
			int a[] = new int[n];
			for(int i = 0;i < n; i++) {
				a[i] = sc.nextInt();
			}
			int key = sc.nextInt();
//			sc.close();
			int result = Search(a,n,key);
			if(result == -1) {
				System.out.println("Not Found");
			}
			else {
				System.out.println("Found");
			}
		}
		
		
	}

}
