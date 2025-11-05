using System;
using System.Collections.Generic;
class Program {
	static void Main(string[] args) {
        while(true)
        {
            string init = Console.ReadLine();
            string[] ini = init.Split(' ');
            int a = int.Parse(ini[0]);
            int b = int.Parse(ini[1]);
            int res = 0;
            HashSet<int> CD_list = new HashSet<int>();
            if (a == 0 && b == 0) break;
            
            for(int i = 0; i < a; i++)
            {
                int n = int.Parse(Console.ReadLine());
                CD_list.Add(n);
            }

            for (int j = 0; j < b; j++)
            {
                int m = int.Parse(Console.ReadLine());
                if (CD_list.Contains(m))
                {
                    res++;
                }
            }

            Console.WriteLine(res);
        }
	}
}