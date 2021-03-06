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
 * CreateCompanyForm.h
 *
 * 
 */

#ifndef CreateCompanyForm_H_
#define CreateCompanyForm_H_


#include "ModelBase.h"

#include "CompanyName.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  CreateCompanyForm
    : public ModelBase
{
public:
    CreateCompanyForm();
    virtual ~CreateCompanyForm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// CreateCompanyForm members

    /// <summary>
    /// The user ID of the Konnex User creating the company (first Admin user).
    /// </summary>
    int32_t getUserID() const;
    void setUserID(int32_t const value);
        /// <summary>
    /// 
    /// </summary>
    CompanyName getName() const;
    void setName(CompanyName const& value);
    bool nameIsSet() const;
    void unsetName();

protected:
    int32_t m_UserID;

    CompanyName m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* CreateCompanyForm_H_ */
