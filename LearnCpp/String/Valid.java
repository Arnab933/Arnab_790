package LearnCpp.String;
import java.util.ArrayList;
import java.util.HashMap;

class Valid {
  public static void main(String[] args) {
    String str = "()[]{}";
    ArrayList<Integer> arr = new ArrayList<>();
    arr.add(1);
    arr.add(1);
    arr.add(2);
    arr.add(1);
    int s = 0;
    for (int i = 0; i < arr.size(); i++)
      s = s ^ arr.get(i);
    // System.out.println(s);
    System.out.println(isValid(str));
    // System.out.println(str.charAt(0));
  }

  public static boolean isValid(String s) {
    HashMap<Character, Integer> hash = new HashMap<>();
    hash.put('(', 1);
    hash.put(')', 1);
    hash.put('[', 2);
    hash.put(']', 2);
    hash.put('{', 3);
    hash.put('}', 3);
    int j = 0;
    for (int i = 0; j < s.length() && i < s.length() / 2; i++) {
      if (hash.get(s.charAt(i)) != hash.get(s.charAt(s.length() - i - 1))
          && hash.get(s.charAt(j)) != hash.get(s.charAt(j + 1)))
        return false;
      j = j + 2;
    }
    return true;
  }
}