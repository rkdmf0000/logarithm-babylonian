double logarithm(const long powered, const unsigned int loop)
{
    double result(1);
    int i(0);
    for (i=0; i<loop; ++i) result = (result + (powered / result)) / 2;
    return result;
};
