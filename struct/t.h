char getche()
{
    char c;
    system("stty -icanon");
    c=getchar();
    system("stty icanon");
    return c; 
}
