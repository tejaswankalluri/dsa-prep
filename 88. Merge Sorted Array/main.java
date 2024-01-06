// https://leetcode.com/problems/merge-sorted-array
import java.util.Arrays;
class main {
    public static void main(String[] args){
        int[] nums1 = {1,2,3,0,0,0};
        int[] nums2 = {2,5,6};
        int m = 3;
        int n = 3;
        solution(nums1,m,nums2,n);
        System.out.println(Arrays.toString(nums1));
    }

    public static void solution(int[] nums1, int m, int[] nums2, int n){
        int ptr1 = m-1;
        int ptr2 = n-1;
        int mergedPtr = m + n - 1;
        while(ptr1 >=0 && ptr2 >=0){
            if(nums1[ptr1] > nums2[ptr2]){
                nums1[mergedPtr] = nums1[ptr1];
                ptr1--;
            }else{
                nums1[mergedPtr] = nums2[ptr2];
                ptr2--;
            }
            mergedPtr--;
        }

    }
}