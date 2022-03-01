/*
* Copyright (c) 2021 ACOAUTO Team.
* All rights reserved.
*
* Detailed license information can be found in the LICENSE file.
*
* File: iotpi_led_key_jstruct.c iotpi_led_key JSON <-> C struct.
*
* This file is automatically generated by the jstruct tool, please do not modify.
*
* Author: Han.hui <hanhui@acoinfo.com>
*
*/

#include <stdlib.h>
#include <string.h>
#include "cJSON.h"
#include "iotpi_led_key_jstruct.h"

/*
 * Deserialize the JSON string into a structure 'led_key'
 */
bool iotpi_led_key_json_parse (struct led_key *des, const char *str, size_t len)
{
	int i, sza;
	register double v;
	cJSON *json, *item, *array;

	(void)i;
	(void)v;
	(void)sza;
	(void)item;
	(void)array;

	json = cJSON_ParseWithLength(str, len);
	if (!json) {
		return	(false);
	}

	item = cJSON_GetObjectItem(json, "led1");
	if (item && cJSON_IsBool(item)) {
		des->led1 = (bool)cJSON_GetBoolValue(item);
	}

	item = cJSON_GetObjectItem(json, "led2");
	if (item && cJSON_IsBool(item)) {
		des->led2 = (bool)cJSON_GetBoolValue(item);
	}

	item = cJSON_GetObjectItem(json, "led3");
	if (item && cJSON_IsBool(item)) {
		des->led3 = (bool)cJSON_GetBoolValue(item);
	}

	item = cJSON_GetObjectItem(json, "key1");
	if (item && cJSON_IsBool(item)) {
		des->key1 = (bool)cJSON_GetBoolValue(item);
	}

	item = cJSON_GetObjectItem(json, "key2");
	if (item && cJSON_IsBool(item)) {
		des->key2 = (bool)cJSON_GetBoolValue(item);
	}

	item = cJSON_GetObjectItem(json, "key3");
	if (item && cJSON_IsBool(item)) {
		des->key3 = (bool)cJSON_GetBoolValue(item);
	}

	des->json = (void *)json;
	return	(true);

error:
	cJSON_Delete(json);
	return	(false);
}

/*
 * Free iotpi_led_key_json_parse() buffer, Warning: string type member can no longer be used
 */
void iotpi_led_key_json_parse_free (struct led_key *des)
{
	if (des && des->json) {
		cJSON_Delete((cJSON *)des->json);
		des->json = NULL;
	}
}

/*
 * Serialize the structure 'led_key' into a JSON string
 */
char *iotpi_led_key_json_stringify (struct led_key *des)
{
	int i;
	char *string;
	cJSON *json, *item, *array;

	(void)i;
	(void)item;
	(void)array;

	if (!des) {
		return	(NULL);
	}

	json = cJSON_CreateObject();
	if (!json) {
		return	(NULL);
	}

	item = cJSON_CreateBool(des->led1);
	if (!item) {
		goto	error;
	}
	if (!cJSON_AddItemToObject(json, "led1", item)) {
		cJSON_Delete(item);
		goto	error;
	}

	item = cJSON_CreateBool(des->led2);
	if (!item) {
		goto	error;
	}
	if (!cJSON_AddItemToObject(json, "led2", item)) {
		cJSON_Delete(item);
		goto	error;
	}

	item = cJSON_CreateBool(des->led3);
	if (!item) {
		goto	error;
	}
	if (!cJSON_AddItemToObject(json, "led3", item)) {
		cJSON_Delete(item);
		goto	error;
	}

	item = cJSON_CreateBool(des->key1);
	if (!item) {
		goto	error;
	}
	if (!cJSON_AddItemToObject(json, "key1", item)) {
		cJSON_Delete(item);
		goto	error;
	}

	item = cJSON_CreateBool(des->key2);
	if (!item) {
		goto	error;
	}
	if (!cJSON_AddItemToObject(json, "key2", item)) {
		cJSON_Delete(item);
		goto	error;
	}

	item = cJSON_CreateBool(des->key3);
	if (!item) {
		goto	error;
	}
	if (!cJSON_AddItemToObject(json, "key3", item)) {
		cJSON_Delete(item);
		goto	error;
	}

	string = cJSON_PrintUnformatted(json);
	cJSON_Delete(json);
	return	(string);

error:
	cJSON_Delete(json);
	return	(NULL);
}

/*
 * Free iotpi_led_key_json_stringify() return value
 */
void iotpi_led_key_json_stringify_free (char *str)
{
	if (str) {
		cJSON_free(str);
	}
}

/*
 * end
 */
