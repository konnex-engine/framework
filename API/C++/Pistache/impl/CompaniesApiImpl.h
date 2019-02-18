/**
* Konnex Company API
* An API that allows for creating, reading, updating and deleting of Konnex User Company data.
*
* OpenAPI spec version: 1.0.0
* Contact: info@konnex-engine.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* CompaniesApiImpl.h
*
* 
*/

#ifndef COMPANIES_API_IMPL_H_
#define COMPANIES_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <CompaniesApi.h>

#include <pistache/optional.h>

#include "Company.h"
#include "CompanyName.h"
#include "KeyValuePairs.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class CompaniesApiImpl : public org::openapitools::server::api::CompaniesApi {
public:
    CompaniesApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~CompaniesApiImpl() {}

    void create_company(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response);
    void delete_company(const int32_t &companyID, Pistache::Http::ResponseWriter &response);
    void get_companies(const Pistache::Optional<int32_t> &bodyLimit, const Pistache::Optional<int32_t> &pageLimit, Pistache::Http::ResponseWriter &response);
    void get_company_by_id(const int32_t &companyID, Pistache::Http::ResponseWriter &response);
    void update_company(const int32_t &companyID, const std::vector<KeyValuePairs> &keyValuePairs, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif