/**
* Konnex User API
* An API that allows for creating, reading, updating and deleting of Konnex User data.
*
* OpenAPI spec version: 1.0.0
* Contact: info@konnex-engine.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "User.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

User::User()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Username = "";
    m_UsernameIsSet = false;
    m_NameIsSet = false;
    m_Contactdetails_href = "";
    m_Contactdetails_hrefIsSet = false;
    m_Addresses_href = "";
    m_Addresses_hrefIsSet = false;
    m_Images_href = "";
    m_Images_hrefIsSet = false;
    m_Companies_href = "";
    m_Companies_hrefIsSet = false;
    m_Products_href = "";
    m_Products_hrefIsSet = false;
    m_Services_href = "";
    m_Services_hrefIsSet = false;
    m_Events_href = "";
    m_Events_hrefIsSet = false;
    m_Teams_href = "";
    m_Teams_hrefIsSet = false;
    
}

User::~User()
{
}

void User::validate()
{
    // TODO: implement validation
}

nlohmann::json User::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_IdIsSet)
    {
        val["id"] = m_Id;
    }
    if(m_UsernameIsSet)
    {
        val["username"] = ModelBase::toJson(m_Username);
    }
    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_Contactdetails_hrefIsSet)
    {
        val["contactdetails href"] = ModelBase::toJson(m_Contactdetails_href);
    }
    if(m_Addresses_hrefIsSet)
    {
        val["addresses href"] = ModelBase::toJson(m_Addresses_href);
    }
    if(m_Images_hrefIsSet)
    {
        val["images href"] = ModelBase::toJson(m_Images_href);
    }
    if(m_Companies_hrefIsSet)
    {
        val["companies href"] = ModelBase::toJson(m_Companies_href);
    }
    if(m_Products_hrefIsSet)
    {
        val["products href"] = ModelBase::toJson(m_Products_href);
    }
    if(m_Services_hrefIsSet)
    {
        val["services href"] = ModelBase::toJson(m_Services_href);
    }
    if(m_Events_hrefIsSet)
    {
        val["events href"] = ModelBase::toJson(m_Events_href);
    }
    if(m_Teams_hrefIsSet)
    {
        val["teams href"] = ModelBase::toJson(m_Teams_href);
    }
    

    return val;
}

void User::fromJson(const nlohmann::json& val)
{
    if(val.find("id") != val.end())
    {
        setId(val.at("id"));
    }
    if(val.find("username") != val.end())
    {
        setUsername(val.at("username"));
    }
    if(val.find("name") != val.end())
    {
        if(!val["name"].is_null())
        {
            User_name newItem;
            newItem.fromJson(val["name"]);
            setName( newItem );
        }
        
    }
    if(val.find("contactdetails href") != val.end())
    {
        setContactdetailsHref(val.at("contactdetails href"));
    }
    if(val.find("addresses href") != val.end())
    {
        setAddressesHref(val.at("addresses href"));
    }
    if(val.find("images href") != val.end())
    {
        setImagesHref(val.at("images href"));
    }
    if(val.find("companies href") != val.end())
    {
        setCompaniesHref(val.at("companies href"));
    }
    if(val.find("products href") != val.end())
    {
        setProductsHref(val.at("products href"));
    }
    if(val.find("services href") != val.end())
    {
        setServicesHref(val.at("services href"));
    }
    if(val.find("events href") != val.end())
    {
        setEventsHref(val.at("events href"));
    }
    if(val.find("teams href") != val.end())
    {
        setTeamsHref(val.at("teams href"));
    }
    
}


int32_t User::getId() const
{
    return m_Id;
}
void User::setId(int32_t const value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool User::idIsSet() const
{
    return m_IdIsSet;
}
void User::unsetId()
{
    m_IdIsSet = false;
}
std::string User::getUsername() const
{
    return m_Username;
}
void User::setUsername(std::string const& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool User::usernameIsSet() const
{
    return m_UsernameIsSet;
}
void User::unsetUsername()
{
    m_UsernameIsSet = false;
}
User_name User::getName() const
{
    return m_Name;
}
void User::setName(User_name const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool User::nameIsSet() const
{
    return m_NameIsSet;
}
void User::unsetName()
{
    m_NameIsSet = false;
}
std::string User::getContactdetailsHref() const
{
    return m_Contactdetails_href;
}
void User::setContactdetailsHref(std::string const& value)
{
    m_Contactdetails_href = value;
    m_Contactdetails_hrefIsSet = true;
}
bool User::contactdetailsHrefIsSet() const
{
    return m_Contactdetails_hrefIsSet;
}
void User::unsetContactdetails_href()
{
    m_Contactdetails_hrefIsSet = false;
}
std::string User::getAddressesHref() const
{
    return m_Addresses_href;
}
void User::setAddressesHref(std::string const& value)
{
    m_Addresses_href = value;
    m_Addresses_hrefIsSet = true;
}
bool User::addressesHrefIsSet() const
{
    return m_Addresses_hrefIsSet;
}
void User::unsetAddresses_href()
{
    m_Addresses_hrefIsSet = false;
}
std::string User::getImagesHref() const
{
    return m_Images_href;
}
void User::setImagesHref(std::string const& value)
{
    m_Images_href = value;
    m_Images_hrefIsSet = true;
}
bool User::imagesHrefIsSet() const
{
    return m_Images_hrefIsSet;
}
void User::unsetImages_href()
{
    m_Images_hrefIsSet = false;
}
std::string User::getCompaniesHref() const
{
    return m_Companies_href;
}
void User::setCompaniesHref(std::string const& value)
{
    m_Companies_href = value;
    m_Companies_hrefIsSet = true;
}
bool User::companiesHrefIsSet() const
{
    return m_Companies_hrefIsSet;
}
void User::unsetCompanies_href()
{
    m_Companies_hrefIsSet = false;
}
std::string User::getProductsHref() const
{
    return m_Products_href;
}
void User::setProductsHref(std::string const& value)
{
    m_Products_href = value;
    m_Products_hrefIsSet = true;
}
bool User::productsHrefIsSet() const
{
    return m_Products_hrefIsSet;
}
void User::unsetProducts_href()
{
    m_Products_hrefIsSet = false;
}
std::string User::getServicesHref() const
{
    return m_Services_href;
}
void User::setServicesHref(std::string const& value)
{
    m_Services_href = value;
    m_Services_hrefIsSet = true;
}
bool User::servicesHrefIsSet() const
{
    return m_Services_hrefIsSet;
}
void User::unsetServices_href()
{
    m_Services_hrefIsSet = false;
}
std::string User::getEventsHref() const
{
    return m_Events_href;
}
void User::setEventsHref(std::string const& value)
{
    m_Events_href = value;
    m_Events_hrefIsSet = true;
}
bool User::eventsHrefIsSet() const
{
    return m_Events_hrefIsSet;
}
void User::unsetEvents_href()
{
    m_Events_hrefIsSet = false;
}
std::string User::getTeamsHref() const
{
    return m_Teams_href;
}
void User::setTeamsHref(std::string const& value)
{
    m_Teams_href = value;
    m_Teams_hrefIsSet = true;
}
bool User::teamsHrefIsSet() const
{
    return m_Teams_hrefIsSet;
}
void User::unsetTeams_href()
{
    m_Teams_hrefIsSet = false;
}

}
}
}
}

