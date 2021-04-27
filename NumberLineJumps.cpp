string kangaroo(int x1, int v1, int x2, int v2)
{
    /*
    x1 = 0, v1 = 3
    x2 = 4, v2 = 2
    n = jump_count
    
    x2 + (n * v2) = x1 + (n * v1)
    (x2 - x1) = (n * v1) - (n * v2)
    (x2 - x1) = n(v1 - v2)
    (x2 - x1) / (v1 - v2) = n
    (4 - 0) / (3 - 2) = 4 / 1 = 4
    */
    
    if ( (v1 > v2) && (x2-x1)%(v1-v2) == 0 )
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

string kangaroo2(int x1, int v1, int x2, int v2)
{
    string result{"NO"};
    int total1 = x1;
    int total2 = x2;

    while (1)
    {
        total1 += v1;
        total2 += v2;

        if (total1 == total2)
        {
            result = "YES";
            break;
        }
        else if (total1 > total2)
        {
            result = "NO";
            break;
        }
    }
    return result;
}
