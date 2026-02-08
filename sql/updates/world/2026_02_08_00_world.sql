SET FOREIGN_KEY_CHECKS = 0;

START TRANSACTION;

/* Legion tower / invasion style events */
UPDATE `game_event` SET `description` = 'Spire of Dark Followers (Alliance)' WHERE `eventEntry` = 105;
UPDATE `game_event` SET `description` = 'Spire of Dark Followers (Horde)'    WHERE `eventEntry` = 106;

UPDATE `game_event` SET `description` = 'Star Hunter Watchpost (Horde)'      WHERE `eventEntry` = 107;
UPDATE `game_event` SET `description` = 'Star Hunter Watchpost (Alliance)'   WHERE `eventEntry` = 108;

UPDATE `game_event` SET `description` = 'Cordana''s Peak (Alliance)'         WHERE `eventEntry` = 109;
UPDATE `game_event` SET `description` = 'Cordana''s Peak (Horde)'            WHERE `eventEntry` = 110;

UPDATE `game_event` SET `description` = 'Citadel of Whispering Winds (Horde)'    WHERE `eventEntry` = 111;
UPDATE `game_event` SET `description` = 'Citadel of Whispering Winds (Alliance)' WHERE `eventEntry` = 112;

UPDATE `game_event` SET `description` = 'Night Watch Summit (Alliance)'      WHERE `eventEntry` = 113;
UPDATE `game_event` SET `description` = 'Night Watch Summit (Horde)'         WHERE `eventEntry` = 114;

UPDATE `game_event` SET `description` = 'Black Hawk Bastion (Horde)'         WHERE `eventEntry` = 115;
UPDATE `game_event` SET `description` = 'Black Hawk Bastion (Alliance)'      WHERE `eventEntry` = 116;

/* Cerberax rotation */
UPDATE `game_event` SET `description` = 'Cerberax: Dark Rift'                WHERE `eventEntry` = 117;
UPDATE `game_event` SET `description` = 'Cerberax: Weaver''s Lair'           WHERE `eventEntry` = 118;
UPDATE `game_event` SET `description` = 'Cerberax: Terrace of Tears'         WHERE `eventEntry` = 119;
UPDATE `game_event` SET `description` = 'Cerberax: Crescent Ruins'           WHERE `eventEntry` = 120;
UPDATE `game_event` SET `description` = 'Cerberax: Soul Ruins'               WHERE `eventEntry` = 121;
UPDATE `game_event` SET `description` = 'Cerberax: Fel Fury Shore'           WHERE `eventEntry` = 122;
UPDATE `game_event` SET `description` = 'Cerberax: Fel Fire Gorge'           WHERE `eventEntry` = 123;
UPDATE `game_event` SET `description` = 'Cerberax: Warrior''s Torment'       WHERE `eventEntry` = 124;
UPDATE `game_event` SET `description` = 'Cerberax: Dead Forest Shore'        WHERE `eventEntry` = 125;

/* Cerberax reset */
UPDATE `game_event` SET `description` = 'Cerberax: Reset'                    WHERE `eventEntry` = 153;

DROP TABLE IF EXISTS `game_event_locale`;
CREATE TABLE `game_event_locale` (
  `EventEntry` mediumint unsigned NOT NULL DEFAULT '0',
  `Locale` varchar(4) NOT NULL DEFAULT '',
  `Description` text,
  `VerifiedBuild` smallint DEFAULT '0',
  PRIMARY KEY (`EventEntry`,`Locale`)
) ENGINE=InnoDB
  DEFAULT CHARSET=utf8mb4
  COLLATE=utf8mb4_unicode_ci
  ROW_FORMAT=DYNAMIC
  COMMENT='Game Events (Localized)';

INSERT INTO `game_event_locale` (`EventEntry`, `Locale`, `Description`, `VerifiedBuild`)
SELECT `eventEntry`, 'deDE', `description`, 0
FROM `game_event`
WHERE `description` IS NOT NULL
ON DUPLICATE KEY UPDATE
  `Description`   = VALUES(`Description`),
  `VerifiedBuild` = VALUES(`VerifiedBuild`);

/* Major holidays / known events */
UPDATE `game_event_locale` SET `Description` = 'Sonnenwendfest'                      WHERE `EventEntry` = 1  AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Winterhauchfest'                    WHERE `EventEntry` = 2  AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Dunkelmond-Jahrmarkt (Aufbau)'      WHERE `EventEntry` = 3  AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Feuerwerksspektakel – Abklingzeit'  WHERE `EventEntry` = 4  AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Feuerwerksspektakel'                WHERE `EventEntry` = 5  AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Neujahrsabend'                      WHERE `EventEntry` = 6  AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Mondfest'                           WHERE `EventEntry` = 7  AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Liebe liegt in der Luft'            WHERE `EventEntry` = 8  AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Nobelgarten'                        WHERE `EventEntry` = 9  AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Kinderwoche'                        WHERE `EventEntry` = 10 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Erntefest'                          WHERE `EventEntry` = 11 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Schlotternächte'                    WHERE `EventEntry` = 12 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Feuerwerksfeier'                    WHERE `EventEntry` = 13 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Anglerwettbewerb im Schlingendorntal – Ankündigung'
WHERE `EventEntry` = 14 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Anglerwettbewerb im Schlingendorntal – Angelplätze'
WHERE `EventEntry` = 15 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Gurubashi-Arena – Beutezug'          WHERE `EventEntry` = 16 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Ruf zu den Waffen: Alteractal!'      WHERE `EventEntry` = 18 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Ruf zu den Waffen: Kriegshymnenschlucht!' WHERE `EventEntry` = 19 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Ruf zu den Waffen: Arathibecken!'    WHERE `EventEntry` = 20 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Ruf zu den Waffen: Auge des Sturms!' WHERE `EventEntry` = 21 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Braufest'                            WHERE `EventEntry` = 24 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Pilgerfreuden'                       WHERE `EventEntry` = 26 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Piratentag'                          WHERE `EventEntry` = 50 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Tag der Toten'                       WHERE `EventEntry` = 51 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Winterhauchfest: Geschenke'          WHERE `EventEntry` = 52 AND `Locale` = 'deDE';

/* German overrides for the previously RU entries */
UPDATE `game_event_locale` SET `Description` = 'Spitze der Dunklen Anhänger (Allianz)'  WHERE `EventEntry` = 105 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Spitze der Dunklen Anhänger (Horde)'    WHERE `EventEntry` = 106 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Außenposten des Sternenjägers (Horde)'  WHERE `EventEntry` = 107 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Außenposten des Sternenjägers (Allianz)' WHERE `EventEntry` = 108 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Gipfel von Cordana (Allianz)'           WHERE `EventEntry` = 109 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Gipfel von Cordana (Horde)'             WHERE `EventEntry` = 110 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Zitadelle der flüsternden Winde (Horde)'   WHERE `EventEntry` = 111 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Zitadelle der flüsternden Winde (Allianz)' WHERE `EventEntry` = 112 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Gipfel der Nachtwache (Allianz)'         WHERE `EventEntry` = 113 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Gipfel der Nachtwache (Horde)'           WHERE `EventEntry` = 114 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Bastion des Schwarzen Falken (Horde)'    WHERE `EventEntry` = 115 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Bastion des Schwarzen Falken (Allianz)'  WHERE `EventEntry` = 116 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Cerberax: Dunkler Riss'                  WHERE `EventEntry` = 117 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Cerberax: Grube der Weber'               WHERE `EventEntry` = 118 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Cerberax: Terrasse der Tränen'           WHERE `EventEntry` = 119 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Cerberax: Halbmondruinen'                WHERE `EventEntry` = 120 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Cerberax: Seelenruinen'                  WHERE `EventEntry` = 121 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Cerberax: Ufer der Teufelswut'           WHERE `EventEntry` = 122 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Cerberax: Schlucht des Teufelsfeuers'    WHERE `EventEntry` = 123 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Cerberax: Qual des Kriegers'             WHERE `EventEntry` = 124 AND `Locale` = 'deDE';
UPDATE `game_event_locale` SET `Description` = 'Cerberax: Ufer des Totenwaldes'          WHERE `EventEntry` = 125 AND `Locale` = 'deDE';

UPDATE `game_event_locale` SET `Description` = 'Cerberax: Zurücksetzen'                  WHERE `EventEntry` = 153 AND `Locale` = 'deDE';

COMMIT;

SET FOREIGN_KEY_CHECKS = 1;