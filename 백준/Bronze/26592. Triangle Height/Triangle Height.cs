int n = int.Parse(Console.ReadLine());

for(int i = 0; i < n; i++)
{
    string str = Console.ReadLine();
    string[] num = str.Split(' ');
    double a = double.Parse(num[0]);
    double b = double.Parse(num[1]);
    double res = 2 * a / b;
    string s = res.ToString("0.00");
    Console.WriteLine($"The height of the triangle is {s} units");;
}