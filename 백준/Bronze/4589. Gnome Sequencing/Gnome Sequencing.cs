int n = int.Parse(Console.ReadLine());
Console.WriteLine("Gnomes:");
for(int i = 0; i < n; i++)
{
    string str = Console.ReadLine();
    string[] num = str.Split();
    bool flag1 = false, flag2 = false;
    for(int j = 0; j < 2; j++)
    {
        if(int.Parse(num[j]) > int.Parse(num[j+1])) flag1 = true;
	if(int.Parse(num[j]) < int.Parse(num[j+1])) flag2 = true;
    }
    if(flag1 && flag2) Console.WriteLine("Unordered");
    else Console.WriteLine("Ordered");
}