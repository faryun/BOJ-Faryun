Console.SetOut(new StreamWriter(Console.OpenStandardOutput()));
int n = int.Parse(Console.ReadLine());
for(int i = 0; i < n; i++)
{
    String str = Console.ReadLine();
    String[] s = str.Split(' ');
    for(int j = 0; j < s.Length; j++)
    {
        char[] temp = s[j].ToCharArray();
        Array.Reverse(temp);
        String res = new string(temp);
        Console.Write($"{res} ");
    }
    Console.Write("\n");
}
Console.Out.Flush();