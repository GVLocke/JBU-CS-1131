double unitprice(int diameter, double price)
{
    double radius, area;
    const double PI  = 3.141592654;

    radius = diameter / static_cast<double>(2);
    area = PI * radius * radius;
    return (price/area);
}
