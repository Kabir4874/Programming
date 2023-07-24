
package classonline;

import java.util.List;

public class Customer {
    String customerName;
    
    public void Buy(List<Product> items)
    {
        System.out.println("These product bought by "+this.customerName);
        for(Product i : items)
        {
            System.out.print("Name: "+i.name +" Price: ");
            System.out.println(i.price);
        }
    }
}
