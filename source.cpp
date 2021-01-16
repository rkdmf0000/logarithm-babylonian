double get_square_root(const long square_num, const unsigned int loop)
{
    double result(1);
    int i(0);
    for (i=0; i<loop; ++i) result = (result + (square_num / result)) / 2;
    return result;
};
