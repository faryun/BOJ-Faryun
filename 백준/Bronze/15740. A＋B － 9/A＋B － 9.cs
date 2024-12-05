using System;
using System.Numerics;

string inp = Console.ReadLine();
string[] num = inp.Split(' ');

BigInteger a = BigInteger.Parse(num[0]);
BigInteger b = BigInteger.Parse(num[1]);

Console.WriteLine(a + b);