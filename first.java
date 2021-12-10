import java.applet.Applet;
import java.awt.Graphics;

public class first extends Applet {
    
    public void paint(Graphics g) {
       
        g.drawString("welcome", 150, 150);
    }

    public static void main(String[] args) {
        Graphics g;
        first f=new first();
        f.paint(g);
    }
}