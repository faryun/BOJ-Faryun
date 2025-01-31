int n = int.Parse(Console.ReadLine());
for(int i = 0; i < n; i++)
{
    int t = int.Parse(Console.ReadLine());
    if(t % 2 == 0) Console.WriteLine($"{t} is even");
    else Console.WriteLine($"{t} is odd");
}