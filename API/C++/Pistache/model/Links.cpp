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


#include "Links.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Links::Links()
{
    m_Contactdetails_href = "";
    m_Contactdetails_hrefIsSet = false;
    m_Addresses_href = "";
    m_Addresses_hrefIsSet = false;
    m_Logo_href = "";
    m_Logo_hrefIsSet = false;
    m_Cover_image_href = "";
    m_Cover_image_hrefIsSet = false;
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

Links::~Links()
{
}

void Links::validate()
{
    // TODO: implement validation
}

nlohmann::json Links::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Contactdetails_hrefIsSet)
    {
        val["contactdetails href"] = ModelBase::toJson(m_Contactdetails_href);
    }
    if(m_Addresses_hrefIsSet)
    {
        val["addresses href"] = ModelBase::toJson(m_Addresses_href);
    }
    if(m_Logo_hrefIsSet)
    {
        val["logo href"] = ModelBase::toJson(m_Logo_href);
    }
    if(m_Cover_image_hrefIsSet)
    {
        val["cover image href"] = ModelBase::toJson(m_Cover_image_href);
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

void Links::fromJson(const nlohmann::json& val)
{
    if(val.find("contactdetails href") != val.end())
    {
        setContactdetailsHref(val.at("contactdetails href"));
    }
    if(val.find("addresses href") != val.end())
    {
        setAddressesHref(val.at("addresses href"));
    }
    if(val.find("logo href") != val.end())
    {
        setLogoHref(val.at("logo href"));
    }
    if(val.find("cover image href") != val.end())
    {
        setCoverImageHref(val.at("cover image href"));
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


std::string Links::getContactdetailsHref() const
{
    return m_Contactdetails_href;
}
void Links::setContactdetailsHref(std::string const& value)
{
    m_Contactdetails_href = value;
    m_Contactdetails_hrefIsSet = true;
}
bool Links::contactdetailsHrefIsSet() const
{
    return m_Contactdetails_hrefIsSet;
}
void Links::unsetContactdetails_href()
{
    m_Contactdetails_hrefIsSet = false;
}
std::string Links::getAddressesHref() const
{
    return m_Addresses_href;
}
void Links::setAddressesHref(std::string const& value)
{
    m_Addresses_href = value;
    m_Addresses_hrefIsSet = true;
}
bool Links::addressesHrefIsSet() const
{
    return m_Addresses_hrefIsSet;
}
void Links::unsetAddresses_href()
{
    m_Addresses_hrefIsSet = false;
}
std::string Links::getLogoHref() const
{
    return m_Logo_href;
}
void Links::setLogoHref(std::string const& value)
{
    m_Logo_href = value;
    m_Logo_hrefIsSet = true;
}
bool Links::logoHrefIsSet() const
{
    return m_Logo_hrefIsSet;
}
void Links::unsetLogo_href()
{
    m_Logo_hrefIsSet = false;
}
std::string Links::getCoverImageHref() const
{
    return m_Cover_image_href;
}
void Links::setCoverImageHref(std::string const& value)
{
    m_Cover_image_href = value;
    m_Cover_image_hrefIsSet = true;
}
bool Links::coverImageHrefIsSet() const
{
    return m_Cover_image_hrefIsSet;
}
void Links::unsetCover_image_href()
{
    m_Cover_image_hrefIsSet = false;
}
std::string Links::getImagesHref() const
{
    return m_Images_href;
}
void Links::setImagesHref(std::string const& value)
{
    m_Images_href = value;
    m_Images_hrefIsSet = true;
}
bool Links::imagesHrefIsSet() const
{
    return m_Images_hrefIsSet;
}
void Links::unsetImages_href()
{
    m_Images_hrefIsSet = false;
}
std::string Links::getCompaniesHref() const
{
    return m_Companies_href;
}
void Links::setCompaniesHref(std::string const& value)
{
    m_Companies_href = value;
    m_Companies_hrefIsSet = true;
}
bool Links::companiesHrefIsSet() const
{
    return m_Companies_hrefIsSet;
}
void Links::unsetCompanies_href()
{
    m_Companies_hrefIsSet = false;
}
std::string Links::getProductsHref() const
{
    return m_Products_href;
}
void Links::setProductsHref(std::string const& value)
{
    m_Products_href = value;
    m_Products_hrefIsSet = true;
}
bool Links::productsHrefIsSet() const
{
    return m_Products_hrefIsSet;
}
void Links::unsetProducts_href()
{
    m_Products_hrefIsSet = false;
}
std::string Links::getServicesHref() const
{
    return m_Services_href;
}
void Links::setServicesHref(std::string const& value)
{
    m_Services_href = value;
    m_Services_hrefIsSet = true;
}
bool Links::servicesHrefIsSet() const
{
    return m_Services_hrefIsSet;
}
void Links::unsetServices_href()
{
    m_Services_hrefIsSet = false;
}
std::string Links::getEventsHref() const
{
    return m_Events_href;
}
void Links::setEventsHref(std::string const& value)
{
    m_Events_href = value;
    m_Events_hrefIsSet = true;
}
bool Links::eventsHrefIsSet() const
{
    return m_Events_hrefIsSet;
}
void Links::unsetEvents_href()
{
    m_Events_hrefIsSet = false;
}
std::string Links::getTeamsHref() const
{
    return m_Teams_href;
}
void Links::setTeamsHref(std::string const& value)
{
    m_Teams_href = value;
    m_Teams_hrefIsSet = true;
}
bool Links::teamsHrefIsSet() const
{
    return m_Teams_hrefIsSet;
}
void Links::unsetTeams_href()
{
    m_Teams_hrefIsSet = false;
}

}
}
}
}

