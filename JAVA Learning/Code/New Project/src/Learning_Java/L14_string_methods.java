package Learning_Java;

import java.util.Scanner;

public class L14_string_methods {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = "KABIR";
      /*  int value= name.length();
        System.out.println(value);
        String lstring= name.toLowerCase(Locale.ROOT);
        System.out.println(lstring);
        String ustring= lstring.toUpperCase();
        System.out.println(ustring);
        String ts= "    Kabir Ahmed Ridoy   ";
        System.out.println(ts.trim());*/
       /* System.out.println(name.substring(2));
        System.out.println(name.substring(2,4));
        System.out.println(name.replace('K','R'));
        System.out.println(name.replace("KAB","abc"));
        System.out.println(name.startsWith("K"));
        System.out.println(name.endsWith("BIR"));*/
        System.out.println(name.charAt(2));
        System.out.println(name.indexOf("BI"));
        String st = "ARRARR";
        System.out.println(st.indexOf("AR", 3));
        System.out.println(st.lastIndexOf("ARR"));
        System.out.println(name.equals("KABIR"));
        System.out.println(name.equalsIgnoreCase("kabir"));


    }
}
