#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<OnlinePaymentCabBooking>
        ("B101", "Pune", "Nashik", 100.0f, PaymentMode::CARD, 2)
    );
    data.emplace_back(
        std::make_shared<OnlinePaymentCabBooking>
        ("B102", "Pune", "Mumbai", 70.0f, PaymentMode::UPI, 3)
    );
    data.emplace_back(
        std::make_shared<OnlinePaymentCabBooking>
        ("B103", "Pune", "Kolhapur", 60.0f, PaymentMode::ONLINE_WALLET, 1)
    );

    data.emplace_back(
        std::make_shared<CashPaymentCabBooking>
        ("B104", "Pune", "Nashik", 100.0f, 20)
    );
    data.emplace_back(
        std::make_shared<CashPaymentCabBooking>
        ("B105", "Pune", "Mumbai", 70.0f, 1000)
    );
    data.emplace_back(
        std::make_shared<CashPaymentCabBooking>
        ("B106", "Pune", "Kolhapur", 60.0f, 10)
    );
}

FareCont BaseFareWithSamePickUpLocation(const Container &data, std::string loc)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    FareCont result;
    for (const Pointer& ptr : data)
    {
        if (ptr->pickupLocation() == loc)
        {
            result.emplace_back(ptr->basicFare());
        }
    }

    if (result.empty()){
        throw std::runtime_error("No pickup location matches data");
    }
    
    return result;
}

std::string BookingIDWithHighestFare(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    float max = (*data.begin())->CabFareCalculation();
    std::string result = (*data.begin())->bookingId();
    for (const Pointer& ptr : data)
    {
        float current = ptr->CabFareCalculation();
        if (max < current)
        {
            max = current;
            result = ptr->bookingId();
        }
        
    }
    return result;
}

Container LastNInstancesOfContainer(const Container &data, int lastN)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }

    Container result;
    for (auto itr = data.rbegin(); lastN>0; itr++, lastN--)
    {
        result.emplace_back(*itr);
    }

    if (result.empty()){
        throw std::runtime_error("Container empty");
    }

    return result;
}

bool CashBookingFareCalculationsAboveThreshold(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }
    
    float total = 0.0f;
    for (const Pointer& ptr : data)
    {
        total += ptr->rewardPointsClaimed();   
    }
    if (total>1000.0f)
    {
        return true;
    }
    else 
    {
        return false;
    }
    
}



void Display(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("empty data");
    }
    
    for (const Pointer& ptr : data){
        std::cout<< *ptr << "\n";
    }
    
}
int dynamic(Container& data){
    for (Pointer ptr : data){
        if(typeid(*ptr)==typeid(CashPaymentCabBooking)){
            std::shared_ptr<CashPaymentCabBooking> a = (std::dynamic_pointer_cast<CashPaymentCabBooking> (ptr));
            
        }
    }
    return 0;
}


float AverageOfOnlineBaseFare(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("DataSet Empty");
    }
    
	float sum=0;
	int count=0;
		
	for(Pointer& ptr : data){
    if(auto cast = std::dynamic_pointer_cast<OnlinePaymentCabBooking>(ptr))
		sum=sum+ptr->basicFare();
		count++;
	}
			
	return sum/data.size();	
}
bool IfAllCashAbove1000(Container &data)
{
    bool flag=true;

    if (data.empty())
    {
        throw std::runtime_error("DataSet Empty");
    }

    for(Pointer& ptr : data){
        if(auto cast = std::dynamic_pointer_cast<CashPaymentCabBooking>(ptr)){
            if(ptr->CabFareCalculation()>1000){
            bool flag = false;
            break;
            }
        }
    }

    return flag;
}

/*
DYNAMIC CASTING

void display_details(Container& data)
{
    int size=data.size();
    try{
        for(int i=0;i<size;i++)
        {
            if(typeid(*(data[i]))==typeid(DieselCar))
            {
                 std::cout<<*(std::dynamic_pointer_cast<DieselCar>(data[i]))<<std::endl;
            }
             if(typeid(*(data[i]))==typeid(PetrolCar))
            {
                 std::cout<<*(std::dynamic_pointer_cast<PetrolCar>(data[i]))<<std::endl;
            }
             if(typeid(*(data[i]))==typeid(HybridCar))
            {
                 std::cout<<*(std::dynamic_pointer_cast<HybridCar>(data[i]))<<std::endl;
            }
             if(typeid(*(data[i]))==typeid(EvCar))
            {
                 std::cout<<*(std::dynamic_pointer_cast<EvCar>(data[i]))<<std::endl;
            }
        }
    }
    catch(const char *msg)
    {
        std::cout<<"Error...!";
    }
    
}
*/