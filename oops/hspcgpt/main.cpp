#include <iostream>
#include <vector>
#include <limits>

class Hospital {
private:
    std::string hospital_id;
    std::string hospital_name;
    std::string hospital_rating;

public:
    // Constructor to initialize the object with parameters
    Hospital(const std::string& id, const std::string& name, const std::string& rating)
        : hospital_id(id), hospital_name(name), hospital_rating(rating) {}

    // Constructor to copy attributes of another hospital object
    Hospital(const Hospital& other)
        : hospital_id(other.hospital_id), hospital_name(other.hospital_name), hospital_rating(other.hospital_rating) {}

    // Display all attributes of a Hospital object
    void display() const {
        std::cout << "Hospital ID: " << hospital_id << std::endl;
        std::cout << "Hospital Name: " << hospital_name << std::endl;
        std::cout << "Hospital Rating: " << hospital_rating << std::endl;
    }

    // Getter for hospital rating
    std::string getRating() const {
        return hospital_rating;
    }

    // Setter for hospital rating
    void setRating(const std::string& rating) {
        hospital_rating = rating;
    }
};

class Doctor : public Hospital {
private:
    std::string doctor_id;
    std::string doctor_name;
    std::string doctor_speciality;
    std::string registered_hospital_name;
    float doctor_fees;

public:
    // Constructor to initialize the Doctor object with parameters
    Doctor(const std::string& id, const std::string& name, const std::string& speciality,
           const std::string& reg_hospital, float fees, const std::string& hospital_id,
           const std::string& hospital_name, const std::string& hospital_rating)
        : Hospital(hospital_id, hospital_name, hospital_rating),
          doctor_id(id), doctor_name(name), doctor_speciality(speciality),
          registered_hospital_name(reg_hospital), doctor_fees(fees) {}

    // Method to calculate tax as 20% of consultancy fees
    float calculateTax() const {
        return 0.2 * doctor_fees;
    }

    // Display all attributes of a Doctor object
    void display() const {
        Hospital::display();  // Call display method of the base class
        std::cout << "Doctor ID: " << doctor_id << std::endl;
        std::cout << "Doctor Name: " << doctor_name << std::endl;
        std::cout << "Doctor Speciality: " << doctor_speciality << std::endl;
        std::cout << "Registered Hospital: " << registered_hospital_name << std::endl;
        std::cout << "Doctor Fees: " << doctor_fees << std::endl;
    }

    // Getter for doctor fees
    float getDoctorFees() const {
        return doctor_fees;
    }

    // Getter for doctor name
    std::string getDoctorName() const {
        return doctor_name;
    }

    // Display hospital details for the doctor
    void displayHospitalDetails() const {
        Hospital::display();
    }
};

int main() {
    int n_hospitals, n_doctors;

    // Accept the number of hospitals
    std::cout << "Enter the number of hospitals: ";
    std::cin >> n_hospitals;

    // Create an array to store Hospital objects
    std::vector<Hospital> hospitals_arr;
    
    // Input details for each hospital
    for (int i = 0; i < n_hospitals; ++i) {
        std::string hospital_id, hospital_name, hospital_rating;
        std::cout << "Enter hospital details for hospital " << i + 1 << ":\n";
        std::cout << "Hospital ID: ";
        std::cin >> hospital_id;
        std::cout << "Hospital Name: ";
        std::cin >> hospital_name;
        std::cout << "Hospital Rating (Good/Decent/Average/Poor): ";
        std::cin >> hospital_rating;

        // Create a Hospital object and add it to the array
        hospitals_arr.emplace_back(hospital_id, hospital_name, hospital_rating);
    }

    // Accept the number of doctors
    std::cout << "Enter the number of doctors: ";
    std::cin >> n_doctors;

    // Create an array to store Doctor objects
    std::vector<Doctor> doctors_arr;

    // Input details for each doctor
    for (int i = 0; i < n_doctors; ++i) {
        std::string doctor_id, doctor_name, doctor_speciality, registered_hospital_name;
        float doctor_fees;
        std::string hospital_id, hospital_name, hospital_rating;

        std::cout << "Enter details for doctor " << i + 1 << ":\n";
        std::cout << "Doctor ID: ";
        std::cin >> doctor_id;
        std::cout << "Doctor Name: ";
        std::cin >> doctor_name;
        std::cout << "Doctor Speciality: ";
        std::cin >> doctor_speciality;
        std::cout << "Registered Hospital: ";
        std::cin >> registered_hospital_name;
        std::cout << "Doctor Fees: ";
        std::cin >> doctor_fees;
        
        // Input details for the hospital where the doctor practices
        std::cout << "Enter details for the hospital where the doctor practices:\n";
        std::cout << "Hospital ID: ";
        std::cin >> hospital_id;
        std::cout << "Hospital Name: ";
        std::cin >> hospital_name;
        std::cout << "Hospital Rating (Good/Decent/Average/Poor): ";
        std::cin >> hospital_rating;

        // Create a Doctor object and add it to the array
        doctors_arr.emplace_back(doctor_id, doctor_name, doctor_speciality, registered_hospital_name,
                                 doctor_fees, hospital_id, hospital_name, hospital_rating);
    }

    // Calculate and print tax for the doctor with the highest consultancy fees
    float max_fees = std::numeric_limits<float>::min();
    const Doctor* highest_fee_doctor = nullptr;

    for (const auto& doctor : doctors_arr) {
        if (doctor.getDoctorFees() > max_fees) {
            max_fees = doctor.getDoctorFees();
            highest_fee_doctor = &doctor;
        }
    }

    if (highest_fee_doctor) {
        std::cout << "Tax for the doctor with the highest consultancy fees: "
                  << highest_fee_doctor->calculateTax() << std::endl;
    }

    // Accept a doctor_name from the user. Find the hospital where this doctor practices.
    std::string search_doctor_name;
    std::cout << "Enter the name of the doctor to find the hospital where they practice: ";
    std::cin >> search_doctor_name;

    for (const auto& doctor : doctors_arr) {
        if (doctor.getDoctorName() == search_doctor_name) {
            std::cout << "Hospital where the doctor practices:\n";
            doctor.displayHospitalDetails();
            break;
        }
    }

    // Accept a rating from the user. Find hospitals with this matching rating.
    std::string search_rating;
    std::cout << "Enter the rating to find hospitals with matching rating: ";
    std::cin >> search_rating;

    for (const auto& hospital : hospitals_arr) {
        if (hospital.getRating() == search_rating) {
            std::cout << "Hospital with matching rating:\n";
            hospital.display();
            std::cout << "----------------------------------\n";
        }
    }

    return 0;
}
