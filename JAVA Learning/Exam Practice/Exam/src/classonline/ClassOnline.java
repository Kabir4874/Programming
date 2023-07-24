
package classonline;

import java.util.ArrayList;
import java.util.List;

public class ClassOnline {

    public static void main(String[] args) {
        // TODO code application logic here
        Product p1 = new Product();
        p1.name = "Juice";
        p1.price = 45;
        
        Product p2 = new Product();
        p2.name = "Ice-Cream";
        p2.price = 80;
        
        Product p3 = new Product();
        p3.name = "Chocolate";
        p3.price = 50;
        
        List<Product> producItem = new ArrayList<Product>();
        
        producItem.add(p1);
        producItem.add(p2);
        producItem.add(p3);
        
        Customer c = new Customer();
        c.customerName = "Rahim";
        
        c.Buy(producItem);
    }
    
}
