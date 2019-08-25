import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class main
{
    static long a[]=new long[1000000009];

    public static void main(String[] args) throws IOException
    {
        for(long i=0;i<1000000009;i++)
            a[i]=0;

        BufferedReader br = new BufferedReader(
                new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int t = Integer.parseInt(st.nextToken());
        for(int g=0;g<t;g++)
        {
            long n = Long.parseLong(st.nextToken());
            long s=0;
            for(long i=0;i<n;i++)
            {
                long a = Long.parseLong(st.nextToken());
                long b = Long.parseLong(st.nextToken());
                if(a==1)
                {

                    a[b]++ ;
                    s=s+a[b];
                }
                else
                {
                    if(a[b]>0)
                    {
                        s=s-a[b];
                        a[b]-- ;
                    }
                }
                System.out.println(s);
            }
        }







    }
}