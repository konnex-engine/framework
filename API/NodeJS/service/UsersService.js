'use strict';


/**
 * Creates a new Konnex User
 * Creates a new Konnex User in the database.
 *
 * email String 
 * password String 
 * username String  (optional)
 * full name CreateUserForm_full name  (optional)
 * returns User
 **/
exports.createUser = function(email,password,username,fullname) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "addresses href" : "https://api.konnex-app.com/v1/users/635853879/addresses",
  "products href" : "https://api.konnex-app.com/v1/users/635853879/products",
  "images href" : "https://api.konnex-app.com/v1/users/635853879/images",
  "companies href" : "https://api.konnex-app.com/v1/users/635853879/companies",
  "teams href" : "https://api.konnex-app.com/v1/users/635853879/teams",
  "name" : {
    "last name" : "User",
    "first name" : "Konnex",
    "middle names" : "Akhenaten"
  },
  "id" : 635853879,
  "events href" : "https://api.konnex-app.com/v1/users/635853879/events",
  "contactdetails href" : "https://api.konnex-app.com/v1/users/635853879/contactdetails",
  "services href" : "https://api.konnex-app.com/v1/users/635853879/services",
  "username" : "konnected2019"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Delete user data.
 * Delete records for a specific Konnex User.
 *
 * userID Integer The User ID for the specific user.
 * no response value expected for this operation
 **/
exports.deleteUser = function(userID) {
  return new Promise(function(resolve, reject) {
    resolve();
  });
}


/**
 * Retrieves data for a specific Konnex User
 * Obtain information for a specific user by user ID.
 *
 * userID Integer The User ID for the specific user.
 * returns User
 **/
exports.getUserByID = function(userID) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "addresses href" : "https://api.konnex-app.com/v1/users/635853879/addresses",
  "products href" : "https://api.konnex-app.com/v1/users/635853879/products",
  "images href" : "https://api.konnex-app.com/v1/users/635853879/images",
  "companies href" : "https://api.konnex-app.com/v1/users/635853879/companies",
  "teams href" : "https://api.konnex-app.com/v1/users/635853879/teams",
  "name" : {
    "last name" : "User",
    "first name" : "Konnex",
    "middle names" : "Akhenaten"
  },
  "id" : 635853879,
  "events href" : "https://api.konnex-app.com/v1/users/635853879/events",
  "contactdetails href" : "https://api.konnex-app.com/v1/users/635853879/contactdetails",
  "services href" : "https://api.konnex-app.com/v1/users/635853879/services",
  "username" : "konnected2019"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Retrieves all available Konnex User data
 * Obtain information about Konnex users.
 *
 * bodyLimit Integer The number of user records to return. (optional)
 * pageLimit Integer The number of pages of user records to return. (optional)
 * returns List
 **/
exports.getUsers = function(bodyLimit,pageLimit) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "addresses href" : "https://api.konnex-app.com/v1/users/635853879/addresses",
  "products href" : "https://api.konnex-app.com/v1/users/635853879/products",
  "images href" : "https://api.konnex-app.com/v1/users/635853879/images",
  "companies href" : "https://api.konnex-app.com/v1/users/635853879/companies",
  "teams href" : "https://api.konnex-app.com/v1/users/635853879/teams",
  "name" : {
    "last name" : "User",
    "first name" : "Konnex",
    "middle names" : "Akhenaten"
  },
  "id" : 635853879,
  "events href" : "https://api.konnex-app.com/v1/users/635853879/events",
  "contactdetails href" : "https://api.konnex-app.com/v1/users/635853879/contactdetails",
  "services href" : "https://api.konnex-app.com/v1/users/635853879/services",
  "username" : "konnected2019"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}


/**
 * Update user data.
 * Update records for a specific Konnex User.
 *
 * userID Integer The User ID for the specific user.
 * user User  (optional)
 * returns User
 **/
exports.updateUser = function(userID,user) {
  return new Promise(function(resolve, reject) {
    var examples = {};
    examples['application/json'] = {
  "addresses href" : "https://api.konnex-app.com/v1/users/635853879/addresses",
  "products href" : "https://api.konnex-app.com/v1/users/635853879/products",
  "images href" : "https://api.konnex-app.com/v1/users/635853879/images",
  "companies href" : "https://api.konnex-app.com/v1/users/635853879/companies",
  "teams href" : "https://api.konnex-app.com/v1/users/635853879/teams",
  "name" : {
    "last name" : "User",
    "first name" : "Konnex",
    "middle names" : "Akhenaten"
  },
  "id" : 635853879,
  "events href" : "https://api.konnex-app.com/v1/users/635853879/events",
  "contactdetails href" : "https://api.konnex-app.com/v1/users/635853879/contactdetails",
  "services href" : "https://api.konnex-app.com/v1/users/635853879/services",
  "username" : "konnected2019"
};
    if (Object.keys(examples).length > 0) {
      resolve(examples[Object.keys(examples)[0]]);
    } else {
      resolve();
    }
  });
}

