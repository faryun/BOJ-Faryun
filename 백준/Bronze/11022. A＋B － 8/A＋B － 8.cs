int n = int.Parse(Console.ReadLine());
            
for(int i = 1; i <= n; i++)
{
    string str = Console.ReadLine();
    string[] num = str.Split(' ');
    int a = int.Parse(num[0]);
    int b = int.Parse(num[1]);
    Console.WriteLine("Case #{0}: {1} + {2} = {3}", i, a, b, a+b);
}