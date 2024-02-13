#include<iostream>
#include<cstring>
enum Rating{GOOD, DECENT, AVERAGE, POOR};
class Hospital
{
    int hospital_id;
    std::string hospital_name;
    std::string hospital_rating;
    public:
    Hospital();
    Hospital(int , std::string , std::string);
    virtual void accept();
    virtual std::string get_name();
    std::string get_rat();
    friend std::ostream& operator<<(std::ostream&, Hospital);
};
Hospital::Hospital()
{
    hospital_id=123;
    hospital_name="City Hospital";
    hospital_rating="GOOD";
}
Hospital::Hospital(int i, std::string nm, std::string r)
{
    int hospital_id=i;
    hospital_name=nm;
    hospital_rating=r;
    
}
std::string Hospital::get_name()
{
    return hospital_name;
}
std::string Hospital::get_rat()
{
    return hospital_rating;
}
void Hospital::accept()
{
    std::cout<<"Enter Hospital ID: ";
    std::cin>>hospital_id;
    std::cout<<"Enter Hospital Name: ";
    std::cin>>hospital_name;
    std::cout<<"Enter Hospital Rating \n(0 Good 1 Decent 2 Average 3 Poor): ";
    int n;
    while(1)
    {
        std::cin>>n;
        if (n==0||n==1||n==2||n==3)
        {
            switch (n)
            {
            case 0:
                hospital_rating="Good";
                break;
            case 1:
                hospital_rating="Decent";
                break;
            case 2:
                hospital_rating="Average";
                break;
            case 3:
                hospital_rating="Poor";
                break;
            }
            break;
        }
        std::cout<<"Enter Right Choice\n";
    }
}
std::ostream& operator<<(std::ostream& os, Hospital h)
{
    os<<"Hospital ID: "<<h.hospital_id<<"\n";
    os<<"Hospital Name: "<<h.hospital_name<<"\n";
    os<<"Hospital Rating: "<<h.hospital_rating<<"\n";
    return os;
}
class Doctor
{
    int doctor_id;
    std::string doctor_name;
    std::string doctor_speciality;
    std::string registered_hospital_name;
    float doctor_fees;
    public:
    Doctor();
    Doctor(int , std::string, std::string, std::string, float);
    void CalculateTax();
    void accept();
    float get_fees();
    std::string get_hosp();
    std::string get_name();
    friend std::ostream& operator<<(std::ostream&, Doctor);
};
Doctor::Doctor()
{

}
Doctor::Doctor(int i,std::string nm, std::string sp, std::string hn, float fee)
{
    doctor_id=i;
    doctor_name=nm;
    doctor_speciality=sp;
    registered_hospital_name=hn;
    doctor_fees=fee;
}
float Doctor::get_fees()
{
    return doctor_fees;
}
std::string Doctor::get_name()
{
    return doctor_name;
}
std::string Doctor::get_hosp()
{
    return registered_hospital_name;
}
void Doctor::accept()
{
    std::cout<<"Enter Doc ID:";
    std::cin>>doctor_id;
    std::cout<<"Enter Doc Name:";
    std::cin>>doctor_name;
    std::cout<<"Enter Doc spec:";
    std::cin>>doctor_speciality;
    std::cout<<"Enter Doc Hosp Name:";
    std::cin>>registered_hospital_name;
    std::cout<<"Enter Doc Fees:";
    std::cin>>doctor_fees;
}
void Doctor::CalculateTax()
{
    std::cout<<"Tax: "<<0.2*doctor_fees<<"\n";
}
std::ostream& operator<<(std::ostream& os, Doctor d)
{
    os<<"Doctor ID: "<<d.doctor_id<<"\n";
    os<<"Doctor name: "<<d.doctor_name<<"\n";
    os<<"Speciality: "<<d.doctor_speciality<<"\n";
    os<<"Speciality: "<<d.registered_hospital_name<<"\n";
    os<<"Doctor Fees: "<<d.doctor_fees<<"\n";
    return os;
}
int main()
{
    int n, m;
    std::cout<<"\nEnter the no. of Hospitals: ";
    std::cin>>n;
    Hospital *hospitals_arr{ new Hospital[n]};
    for (int i = 0; i < n; i++)
    {
        hospitals_arr[i].accept();
    }
    std::cout<<"\nEnter no. of Doctors: ";
    std::cin>>m;
    Doctor *doc_arr{new Doctor[m]};    
    for (int j = 0; j < m; j++)
    {
        doc_arr[j].accept();
    }
    float max=0;
    int p;
    for (int k = 0; k < m; k++)
    {
        if (doc_arr[k].get_fees()>max)
        {
            max=doc_arr[k].get_fees();
            p=k;   
        }
    }
    std::cout<<"\nDoctor with high fees: \n";
    std::cout<<doc_arr[p].get_name()<<"\n";
    doc_arr[p].CalculateTax();
    std::cout<<"Enter Doctor name to search: ";
    std::string name;
    std::cin>>name;
    for (int l = 0; l < m; l++)
    {
        if (doc_arr[l].get_name()==name)
        {
            std::cout<<doc_arr[l].get_hosp()<<"\n";
            break;
        }
        std::cout<<"No record found\n";
    }
    std::string rat;
    std::cout<<"Enter Rating to find: ";
    std::cin>>rat;
    int h;
    int count=0;
    for (h = 0; h < n; h++)
    {
        if (hospitals_arr[h].get_rat()==rat)
        {
            std::cout<<hospitals_arr[h].get_name()<<"\n";
            count++;
        }
    }
    if(h==n)
        std::cout<<count<<" Hospitals found"<<"\n";
    return 0;
}