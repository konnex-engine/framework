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
/*
 * CreateUserForm_full_name.h
 *
 * 
 */

#ifndef CreateUserForm_full_name_H_
#define CreateUserForm_full_name_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  CreateUserForm_full_name
    : public ModelBase
{
public:
    CreateUserForm_full_name();
    virtual ~CreateUserForm_full_name();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// CreateUserForm_full_name members

    /// <summary>
    /// 
    /// </summary>
    std::string getFirstName() const;
    void setFirstName(std::string const& value);
    bool firstNameIsSet() const;
    void unsetFirst_name();
    /// <summary>
    /// 
    /// </summary>
    std::string getMiddleNames() const;
    void setMiddleNames(std::string const& value);
    bool middleNamesIsSet() const;
    void unsetMiddle_names();
    /// <summary>
    /// 
    /// </summary>
    std::string getLastName() const;
    void setLastName(std::string const& value);
    bool lastNameIsSet() const;
    void unsetLast_name();

protected:
    std::string m_First_name;
    bool m_First_nameIsSet;
    std::string m_Middle_names;
    bool m_Middle_namesIsSet;
    std::string m_Last_name;
    bool m_Last_nameIsSet;
};

}
}
}
}

#endif /* CreateUserForm_full_name_H_ */
