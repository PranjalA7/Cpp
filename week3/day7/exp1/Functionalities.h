#include "DataModeller.h"

#include <vector>

using dataVariant = std::unique_ptr<DataModeller>;
using Container = std::vector<dataVariant>;

void CreateObjects(Container&);

void CalculateTaxPayable(const Container& data);

void CallParenOperator(const Container &data);