import java.io.*;
import java.lang.*;
import java.util.*;
 
interface one {
    public void print_FUN();
}
 
interface two {
    public void print_for();
}
 
interface three extends one, two {
    public void print_FUN();
}
class child implements three {
    @Override public void print_FUN()
    {
        System.out.println("HUSSAIN LOHAWALA");
    }
 
    public void print_for() { System.out.println("HUSSAIN"); }
}
 

public class inhte{
    public static void main(String[] args)
    {
        child c = new child();
        c.print_FUN();
        c.print_for();
        c.print_FUN();
    }
}