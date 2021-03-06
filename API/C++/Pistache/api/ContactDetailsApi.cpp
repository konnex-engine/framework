/**
* Konnex Contact Details API
* An API that allows for creating, reading, updating and deleting of Konnex User Contact Details data.
*
* OpenAPI spec version: 1.0.0
* Contact: info@konnex-engine.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "ContactDetailsApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

ContactDetailsApi::ContactDetailsApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
};

void ContactDetailsApi::init() {
    setupRoutes();
}

void ContactDetailsApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Post(*router, base + "/:objectType/:objectID/contactdetails", Routes::bind(&ContactDetailsApi::create_contact_details_handler, this));
    Routes::Delete(*router, base + "/:objectType/:objectID/contactdetails/:contactID", Routes::bind(&ContactDetailsApi::delete_contact_details_handler, this));
    Routes::Get(*router, base + "/:objectType/:objectID/contactdetails", Routes::bind(&ContactDetailsApi::get_contact_details_handler, this));
    Routes::Get(*router, base + "/:objectType/:objectID/contactdetails/:contactID", Routes::bind(&ContactDetailsApi::get_contact_details_by_id_handler, this));
    Routes::Put(*router, base + "/:objectType/:objectID/contactdetails/:contactID", Routes::bind(&ContactDetailsApi::update_contact_details_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&ContactDetailsApi::contact_details_api_default_handler, this));
}

void ContactDetailsApi::create_contact_details_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {
      this->create_contact_details(request, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void ContactDetailsApi::delete_contact_details_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto objectType = request.param(":objectType").as<std::string>();
    auto objectID = request.param(":objectID").as<int32_t>();
    auto contactID = request.param(":contactID").as<int32_t>();
    
    try {
      this->delete_contact_details(objectType, objectID, contactID, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void ContactDetailsApi::get_contact_details_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto objectType = request.param(":objectType").as<std::string>();
    auto objectID = request.param(":objectID").as<int32_t>();
    
    // Getting the query params
    auto bodyLimitQuery = request.query().get("bodyLimit");
    Pistache::Optional<int32_t> bodyLimit;
    if(!bodyLimitQuery.isEmpty()){
        int32_t value;
        if(fromStringValue(bodyLimitQuery.get(), value)){
            bodyLimit = Pistache::Some(value);
        }
    }
    auto pageLimitQuery = request.query().get("pageLimit");
    Pistache::Optional<int32_t> pageLimit;
    if(!pageLimitQuery.isEmpty()){
        int32_t value;
        if(fromStringValue(pageLimitQuery.get(), value)){
            pageLimit = Pistache::Some(value);
        }
    }
    
    try {
      this->get_contact_details(objectType, objectID, bodyLimit, pageLimit, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void ContactDetailsApi::get_contact_details_by_id_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto objectType = request.param(":objectType").as<std::string>();
    auto objectID = request.param(":objectID").as<int32_t>();
    auto contactID = request.param(":contactID").as<int32_t>();
    
    try {
      this->get_contact_details_by_id(objectType, objectID, contactID, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void ContactDetailsApi::update_contact_details_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto objectType = request.param(":objectType").as<std::string>();
    auto objectID = request.param(":objectID").as<int32_t>();
    auto contactID = request.param(":contactID").as<int32_t>();
    
    // Getting the body param
    std::vector<KeyValuePairs> keyValuePairs;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
      keyValuePairs =   ArrayHelper::fromJson<KeyValuePairs>(request_body);
      this->update_contact_details(objectType, objectID, contactID, keyValuePairs, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}

void ContactDetailsApi::contact_details_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}

