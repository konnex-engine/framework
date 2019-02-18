'use strict';

var utils = require('../utils/writer.js');
var Users = require('../service/UsersService');

module.exports.createUser = function createUser (req, res, next) {
  var email = req.swagger.params['email'].value;
  var password = req.swagger.params['password'].value;
  var username = req.swagger.params['username'].value;
  var fullname = req.swagger.params['full name'].value;
  Users.createUser(email,password,username,fullname)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.deleteUser = function deleteUser (req, res, next) {
  var userID = req.swagger.params['userID'].value;
  Users.deleteUser(userID)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getUserByID = function getUserByID (req, res, next) {
  var userID = req.swagger.params['userID'].value;
  Users.getUserByID(userID)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.getUsers = function getUsers (req, res, next) {
  var bodyLimit = req.swagger.params['bodyLimit'].value;
  var pageLimit = req.swagger.params['pageLimit'].value;
  Users.getUsers(bodyLimit,pageLimit)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};

module.exports.updateUser = function updateUser (req, res, next) {
  var userID = req.swagger.params['userID'].value;
  var user = req.swagger.params['User'].value;
  Users.updateUser(userID,user)
    .then(function (response) {
      utils.writeJson(res, response);
    })
    .catch(function (response) {
      utils.writeJson(res, response);
    });
};
