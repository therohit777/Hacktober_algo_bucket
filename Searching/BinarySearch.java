package GitCowls;

public class BinarySearch {
    public static void main(String[] args) {
        int[] arr ={-22, -13, -6, -3, 2, 4 ,10, 14, 28, 31, 45};
        int target =28;
        int ans = BinarySearchCode(arr,target);
        System.out.println(ans);

    }
    static int BinarySearchCode(int[] arr , int target){
        int start =0;
        int end = arr.length - 1 ;

        while (start <= end){
            int mid = start + (end-start)/2;

            if(target< arr[mid]){
                end = mid-1;
            } else if (target > arr[mid]) {
                start = mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
}
