int n = int.Parse(Console.ReadLine());
for(int i = 0; i < n; i++)
{
    string str = Console.ReadLine();
    string[] s = str.Split(' ');
    int x = int.Parse(s[0]);
    for(int j = 0; j < x; j++)
    {
        Console.Write(s[1]);
    }
    Console.Write("\n");
}