using System.Numerics;

BigInteger fact(int n)
{
    if(n < 2) return 1;
    return n * fact(n-1);
}

int n = int.Parse(Console.ReadLine());

Console.Write(fact(n));