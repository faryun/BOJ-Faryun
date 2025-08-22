int a = 0, b = 0, i = 0;
for(i = 0; i < 6; i++)
{
    string str = Console.ReadLine();
    int t = i % 3;
    if(i < 3)
    {
        if(t == 0) a += int.Parse(str) * 3;
        if(t == 1) a += int.Parse(str) * 2;
        if(t == 2) a += int.Parse(str);
    }
    else
    {
        if(t == 0) b += int.Parse(str) * 3;
        if(t == 1) b += int.Parse(str) * 2;
        if(t == 2) b += int.Parse(str);
    }
}

if(a > b) Console.Write("A");
else if(a == b) Console.Write("T");
else Console.Write("B");