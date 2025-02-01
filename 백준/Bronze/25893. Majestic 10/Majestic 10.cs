int n = int.Parse(Console.ReadLine());
for(int i = 0; i < n; i++)
{
    string str = Console.ReadLine();
    string[] s = str.Split(" ");
    int temp = 0;
    for(int j = 0; j < 3; j++) if(int.Parse(s[j]) >= 10) temp++;
    if(temp == 0)
    { 
        Console.WriteLine(str);
        Console.WriteLine("zilch");
        Console.WriteLine();
    }
    else if(temp == 1)
    { 
        Console.WriteLine(str);
        Console.WriteLine("double");
        Console.WriteLine();
    }
    else if(temp == 2)
    { 
        Console.WriteLine(str);
        Console.WriteLine("double-double");
        Console.WriteLine();
    }
    else if(temp == 3)
    { 
        Console.WriteLine(str);
        Console.WriteLine("triple-double");
        Console.WriteLine();
    }
}