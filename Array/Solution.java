package Array;
public class Solution {
    static  int removeElement(int[] nums, int val) {
       int n=0;
       for(int i=0;i<nums.length;i++){
           if(nums[i]!=val){
               nums[n]=nums[i];
               n++;
           }
       }
       return n;
    }
    public static void main(String[] args) {
        int arr[]={3,2,2,3};
        System.out.println(removeElement(arr,3));
    }
}