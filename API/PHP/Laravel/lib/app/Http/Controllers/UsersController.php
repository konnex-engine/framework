<?php

/**
 * Konnex User API
 * An API that allows for creating, reading, updating and deleting of Konnex User data.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: info@konnex-engine.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Source files are located at:
 *
 * > swagger-codegen/modules/swagger-codegen/src/main/resources/php-laravel/
 */


namespace App\Http\Controllers;

use Illuminate\Support\Facades\Request;

class UsersController extends Controller
{
    /**
     * Constructor
     */
    public function __construct()
    {
    }

    /**
     * Operation createUser
     *
     * Creates a new Konnex User.
     *
     *
     * @return Http response
     */
    public function createUser()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['email'])) {
            throw new \InvalidArgumentException('Missing the required parameter $email when calling createUser');
        }
        $email = $input['email'];

        if (!isset($input['password'])) {
            throw new \InvalidArgumentException('Missing the required parameter $password when calling createUser');
        }
        $password = $input['password'];

        $username = $input['username'];

        $fullName = $input['fullName'];


        return response('How about implementing createUser as a post method ?');
    }
    /**
     * Operation getUsers
     *
     * Retrieves all available Konnex User data.
     *
     *
     * @return Http response
     */
    public function getUsers()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if ($input['bodyLimit'] > 50) {
            throw new \InvalidArgumentException('invalid value for $bodyLimit when calling UsersController.getUsers, must be smaller than or equal to 50.');
        }
        if ($input['bodyLimit'] < 10) {
            throw new \InvalidArgumentException('invalid value for $bodyLimit when calling UsersController.getUsers, must be bigger than or equal to 10.');
        }
        $bodyLimit = $input['bodyLimit'];

        if ($input['pageLimit'] > 10) {
            throw new \InvalidArgumentException('invalid value for $pageLimit when calling UsersController.getUsers, must be smaller than or equal to 10.');
        }
        if ($input['pageLimit'] < 1) {
            throw new \InvalidArgumentException('invalid value for $pageLimit when calling UsersController.getUsers, must be bigger than or equal to 1.');
        }
        $pageLimit = $input['pageLimit'];


        return response('How about implementing getUsers as a get method ?');
    }
    /**
     * Operation deleteUser
     *
     * Delete user data..
     *
     * @param int $userID The User ID for the specific user. (required)
     *
     * @return Http response
     */
    public function deleteUser($userID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing deleteUser as a delete method ?');
    }
    /**
     * Operation getUserByID
     *
     * Retrieves data for a specific Konnex User.
     *
     * @param int $userID The User ID for the specific user. (required)
     *
     * @return Http response
     */
    public function getUserByID($userID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getUserByID as a get method ?');
    }
    /**
     * Operation updateUser
     *
     * Update user data..
     *
     * @param int $userID The User ID for the specific user. (required)
     *
     * @return Http response
     */
    public function updateUser($userID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing updateUser as a put method ?');
    }
}
