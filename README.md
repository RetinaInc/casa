RoomifyCasa
===========

The Casa Roomify Distro


Installation instructions:
==========================
1. Download Drupal core.

    `drush dl drupal`

2. Go to the `/profiles` directory inside Drupal and clone this repo into roomifycasa:

    `git clone https://github.com/BluesparkLabs/RoomifyCasa.git roomifycasa`

3. Go to the `/profiles/roomifycasa` directory and run:

    `drush make --contrib-destination --no-core roomifycasa.make`

4. Download the Full Calendar fork from - 'https://github.com/Roomify/fullcalendar/archive/master.zip' to

	`/profiles/roomifycasa/libraries/rooms_fullcalendar`

5. Install the site
