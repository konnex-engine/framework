<?php
/**
 * User
 */
namespace app\Models;

/**
 * User
 */
class User {

    /** @var int $id */
    private $id;

    /** @var string $username */
    private $username;

    /** @var \app\Models\UserName $name */
    private $name;

    /** @var string $contactdetailsHref */
    private $contactdetailsHref;

    /** @var string $addressesHref */
    private $addressesHref;

    /** @var string $imagesHref */
    private $imagesHref;

    /** @var string $companiesHref */
    private $companiesHref;

    /** @var string $productsHref */
    private $productsHref;

    /** @var string $servicesHref */
    private $servicesHref;

    /** @var string $eventsHref */
    private $eventsHref;

    /** @var string $teamsHref */
    private $teamsHref;

}
