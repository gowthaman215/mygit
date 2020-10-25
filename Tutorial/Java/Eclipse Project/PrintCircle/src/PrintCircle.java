import java.io.*;

public class PrintCircle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		double r=25;
		double i,j;
		double p;

		p=Math.floor((4*r-3)/8);
	    for (i=p; i>=-p; i--)
		{
			for (j=-r; j<=r; j++)
			{	
			    if(r*r*i*i+p*p*j*j <= r*r*p*p )
				{
					System.out.print("*");
				}
				else
				{
					System.out.print(" ");
				}
			}
			System.out.print("\n");
		}

	}

}
