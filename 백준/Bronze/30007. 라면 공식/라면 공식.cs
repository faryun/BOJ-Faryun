int n = int.Parse(Console.ReadLine());

for(int i = 0; i < n; i++)
{
    string str = Console.ReadLine();
    string[] num = str.Split(' ');
    int a = int.Parse(num[0]);
    int b = int.Parse(num[1]);
    int x = int.Parse(num[2]);
    Console.WriteLine(a * (x - 1) + b);
}