int n = int.Parse(Console.ReadLine());
for(int i = 0; i < n; i++)
{
    string str = Console.ReadLine();
    string[] stats = str.Split(' ');
    int hp = int.Parse(stats[0]), mp = int.Parse(stats[1]), atk = int.Parse(stats[2]), def = int.Parse(stats[3]);
    int hp_add= int.Parse(stats[4]), mp_add = int.Parse(stats[5]), atk_add = int.Parse(stats[6]), def_add = int.Parse(stats[7]);
    hp += hp_add;
    mp += mp_add;
    atk += atk_add;
    def += def_add;
    if(hp < 1) hp = 1;
    if(mp < 1) mp = 1;
    if(atk < 0) atk = 0;
    Console.WriteLine(hp + 5 * mp + 2 * atk + 2 * def);
}