int n = int.Parse(Console.ReadLine());

for(int i = 0; i < n; i++)
{
    int y = int.Parse(Console.ReadLine());
    int d = y % 100;
    if((y + 1) % d == 0) Console.WriteLine("Good");
    else Console.WriteLine("Bye");
}