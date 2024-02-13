#include<iostream>
#include<cstring>
enum Rating{GOOD, DECENT, AVERAGE, POOR};
class Hospital
{
    int hospital_id;
    char* hospital_name;
    Rating hospital_rating;
    public:
    Hospital();
    Hospital(int , char* , int);
    void accept();
    friend std::ostream& operator<<(std::ostream&, Hospital);
    friend std::ostream& operator>>(std::ostream& in, Hospital& ho);
};
Hospital::Hospital()
{
    hospital_id=123;
    hospital_name="City Hospital";
    hospital_rating=GOOD;
}
Hospital::Hospital(int i, char* nm, int r)
{
    int hospital_id=i;
    strcpy(hospital_name, nm);
    switch (r)
    {
    case 0:
        hospital_rating=GOOD;
        break;
    case 1:
        hospital_rating=DECENT;
        break;
    case 2:
        hospital_rating=AVERAGE;
        break;
    case 3:
        hospital_rating=POOR;
        break;
    }
}
void Hospital::accept()
{
    std::cout<<"Enter Hospital ID: ";
    std::cin>>hospital_id;
    std::cout<<"Enter Hospital Name: ";
    std::cin>>hospital_name;
    int rat;
    std::cout<<"Enter Hospital Rating \n(0 Good 1 Decent 2 Average 3 Poor): ";
    std::cin>>rat;
    Rating temp=(Rating)rat;
    switch (temp)
    {
    case GOOD:
        hospital_rating=GOOD;
        break;
    case DECENT:
        hospital_rating=DECENT;
        break;
    case AVERAGE:
        hospital_rating=AVERAGE;
        break;
    case POOR:
        hospital_rating=POOR;
        break;
    }

}
std::ostream& operator<<(std::ostream& os, Hospital h)
{
    os<<"Hospital ID: "<<h.hospital_id<<"\n";
    os<<"Hospital Name: "<<h.hospital_name<<"\n";
    switch (h.hospital_rating)
    {
    case GOOD:
        std::cout<<"Hospital Rating: Good\n";
        break;
    case DECENT:
        std::cout<<"Hospital Rating: Decent\n";
        break;
    case AVERAGE:
        std::cout<<"Hospital Rating: Average\n";
        break;
    case POOR:
        std::cout<<"Hospital Rating: Poor\n";
        break;
    }
    return os;
}
class Doctor
{

};
int main()
{
    Hospital H1;
    H1.accept();
    std::cout<<H1;

    return 0;
}