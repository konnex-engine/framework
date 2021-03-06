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


#include "User_name.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

User_name::User_name()
{
    m_First_name = "";
    m_First_nameIsSet = false;
    m_Middle_names = "";
    m_Middle_namesIsSet = false;
    m_Last_name = "";
    m_Last_nameIsSet = false;
    
}

User_name::~User_name()
{
}

void User_name::validate()
{
    // TODO: implement validation
}

nlohmann::json User_name::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_First_nameIsSet)
    {
        val["first name"] = ModelBase::toJson(m_First_name);
    }
    if(m_Middle_namesIsSet)
    {
        val["middle names"] = ModelBase::toJson(m_Middle_names);
    }
    if(m_Last_nameIsSet)
    {
        val["last name"] = ModelBase::toJson(m_Last_name);
    }
    

    return val;
}

void User_name::fromJson(const nlohmann::json& val)
{
    if(val.find("first name") != val.end())
    {
        setFirstName(val.at("first name"));
    }
    if(val.find("middle names") != val.end())
    {
        setMiddleNames(val.at("middle names"));
    }
    if(val.find("last name") != val.end())
    {
        setLastName(val.at("last name"));
    }
    
}


std::string User_name::getFirstName() const
{
    return m_First_name;
}
void User_name::setFirstName(std::string const& value)
{
    m_First_name = value;
    m_First_nameIsSet = true;
}
bool User_name::firstNameIsSet() const
{
    return m_First_nameIsSet;
}
void User_name::unsetFirst_name()
{
    m_First_nameIsSet = false;
}
std::string User_name::getMiddleNames() const
{
    return m_Middle_names;
}
void User_name::setMiddleNames(std::string const& value)
{
    m_Middle_names = value;
    m_Middle_namesIsSet = true;
}
bool User_name::middleNamesIsSet() const
{
    return m_Middle_namesIsSet;
}
void User_name::unsetMiddle_names()
{
    m_Middle_namesIsSet = false;
}
std::string User_name::getLastName() const
{
    return m_Last_name;
}
void User_name::setLastName(std::string const& value)
{
    m_Last_name = value;
    m_Last_nameIsSet = true;
}
bool User_name::lastNameIsSet() const
{
    return m_Last_nameIsSet;
}
void User_name::unsetLast_name()
{
    m_Last_nameIsSet = false;
}

}
}
}
}

