using System;

string inp = Console.ReadLine();
string[] num = inp.Split('/');

int k = int.Parse(num[0]);
int d = int.Parse(num[1]);
int a = int.Parse(num[2]);

if(k + a < d || d == 0) Console.WriteLine("hasu");
else Console.WriteLine("gosu");