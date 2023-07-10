#include <iostream>
using namespace std;

int main()
{
    const int STRIPS = 20;
    const double WEIGHT = 1.0;
    const double HEAVY_CAPSULE_WEIGHT = 1.1;

    double total_weight = 0.0;
    double expected_weight = 0.0;
    int heavy_strip_number = -1;

    for (int i = 1; i <= STRIPS; i++)
    {
        double strip_weight = 0.0;

        for (int j = 1; j <= i; j++)
        {
            strip_weight += WEIGHT;
        }

        total_weight += strip_weight;
    }

    expected_weight = STRIPS * (STRIPS + 1) / 2 * WEIGHT;

    if (total_weight > expected_weight)
    {
        double difference = total_weight - expected_weight;
        heavy_strip_number = static_cast<int>(difference / 0.1);
    }

    if (heavy_strip_number != -1)
    {
        cout << "The heavy strip is number " << heavy_strip_number << endl;
    }
    else
    {
        cout << "All strips are of equal weight" << endl;
    }

    return 0;
}