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
/*
 * ContactDetailsApi.h
 *
 * 
 */

#ifndef ContactDetailsApi_H_
#define ContactDetailsApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "Contact.h"
#include "KeyValuePairs.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  ContactDetailsApi {
public:
    ContactDetailsApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~ContactDetailsApi() {}
    void init();

    const std::string base = "/v1";

private:
    void setupRoutes();

    void create_contact_details_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void delete_contact_details_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_contact_details_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_contact_details_by_id_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void update_contact_details_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void contact_details_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Creates a new Contact Detail
    /// </summary>
    /// <remarks>
    /// Creates a new Konnex User Contact Detail in the database.
    /// </remarks>
    virtual void create_contact_details(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Delete contact detail data.
    /// </summary>
    /// <remarks>
    /// Delete a specific Contact Detail.
    /// </remarks>
    /// <param name="objectType">The type of object to get contact details for.</param>
    /// <param name="objectID">The leadID of the Lead to get addresses for</param>
    /// <param name="contactID">The contact ID for the specific contact to delete.</param>
    virtual void delete_contact_details(const std::string &objectType, const int32_t &objectID, const int32_t &contactID, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Retrieves all available Konnex User cotact detail data
    /// </summary>
    /// <remarks>
    /// Obtain information about Konnex users contact details.
    /// </remarks>
    /// <param name="objectType">The type of object to get contact details for.</param>
    /// <param name="objectID">The leadID of the Lead to get contact details for</param>
    /// <param name="bodyLimit">The number of user contact details records to return. (optional, default to 0)</param>
    /// <param name="pageLimit">The number of pages of contact detail records to return. (optional, default to 0)</param>
    virtual void get_contact_details(const std::string &objectType, const int32_t &objectID, const Pistache::Optional<int32_t> &bodyLimit, const Pistache::Optional<int32_t> &pageLimit, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns a specific contact detail by ID
    /// </summary>
    /// <remarks>
    /// Retrieve a specific contact detail by contact detail ID.
    /// </remarks>
    /// <param name="objectType">The type of object to get contact details for.</param>
    /// <param name="objectID">The leadID of the Lead to get addresses for</param>
    /// <param name="contactID">The Contact ID for the specific contact detail.</param>
    virtual void get_contact_details_by_id(const std::string &objectType, const int32_t &objectID, const int32_t &contactID, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Update contact detail data.
    /// </summary>
    /// <remarks>
    /// Update a specific Contact Detail.
    /// </remarks>
    /// <param name="objectType">The type of object to get contact details for.</param>
    /// <param name="objectID">The leadID of the Lead to get addresses for</param>
    /// <param name="contactID">The Contact Detail ID for the specific company.</param>
    /// <param name="keyValuePairs"> (optional)</param>
    virtual void update_contact_details(const std::string &objectType, const int32_t &objectID, const int32_t &contactID, const std::vector<KeyValuePairs> &keyValuePairs, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* ContactDetailsApi_H_ */

