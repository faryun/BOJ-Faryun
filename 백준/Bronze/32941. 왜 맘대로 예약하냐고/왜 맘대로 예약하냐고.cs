string str = Console.ReadLine();
string[] s = str.Split(' ');
int T = int.Parse(s[0]);
int X = int.Parse(s[1]);
int n = int.Parse(Console.ReadLine());
int temp = 0;
for(int i = 0; i < n; i++)
{
    int k = int.Parse(Console.ReadLine());
    string time = Console.ReadLine();
    string[] ti = time.Split(' ');    
    for(int j = 0; j < k; j++)
    {
        if(int.Parse(ti[j]) == X) temp++;
    }
}
if(n == temp) Console.Write("YES");
else Console.Write("NO");