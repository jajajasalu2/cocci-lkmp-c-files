cocci_test_suite() {
	struct gb_power_supply_event_request *cocci_id/* drivers/staging/greybus/power_supply.c 994 */;
	struct gb_message *cocci_id/* drivers/staging/greybus/power_supply.c 993 */;
	struct gb_power_supply cocci_id/* drivers/staging/greybus/power_supply.c 946 */;
	const struct gb_power_supply_changes cocci_id/* drivers/staging/greybus/power_supply.c 91 */[];
	void cocci_id/* drivers/staging/greybus/power_supply.c 88 */(struct gb_power_supply *gbpsy,
								     struct gb_power_supply_prop *prop);
	struct gb_power_supply_get_supplies_response cocci_id/* drivers/staging/greybus/power_supply.c 875 */;
	struct gb_power_supplies *cocci_id/* drivers/staging/greybus/power_supply.c 858 */;
	struct power_supply_config cocci_id/* drivers/staging/greybus/power_supply.c 820 */;
	struct gb_power_supply_changes {
		enum power_supply_property prop;
		u32 tolerance_change;
		void (*prop_changed)(struct gb_power_supply *gbpsy,
				     struct gb_power_supply_prop *prop);
	} cocci_id/* drivers/staging/greybus/power_supply.c 81 */;
	const union power_supply_propval *cocci_id/* drivers/staging/greybus/power_supply.c 802 */;
	s32 cocci_id/* drivers/staging/greybus/power_supply.c 785 */;
	struct gb_power_supply_set_property_request cocci_id/* drivers/staging/greybus/power_supply.c 770 */;
	struct work_struct *cocci_id/* drivers/staging/greybus/power_supply.c 735 */;
	struct gb_power_supply_prop *cocci_id/* drivers/staging/greybus/power_supply.c 626 */;
	union power_supply_propval *cocci_id/* drivers/staging/greybus/power_supply.c 624 */;
	enum power_supply_property cocci_id/* drivers/staging/greybus/power_supply.c 623 */;
	int cocci_id/* drivers/staging/greybus/power_supply.c 622 */;
	struct gb_power_supply_get_property_response cocci_id/* drivers/staging/greybus/power_supply.c 595 */;
	struct gb_power_supply_get_property_request cocci_id/* drivers/staging/greybus/power_supply.c 594 */;
	struct gb_connection *cocci_id/* drivers/staging/greybus/power_supply.c 592 */;
	u8 cocci_id/* drivers/staging/greybus/power_supply.c 512 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/power_supply.c 511 */;
	struct gb_power_supply_get_property_descriptors_response *cocci_id/* drivers/staging/greybus/power_supply.c 510 */;
	struct gb_power_supply_get_property_descriptors_request *cocci_id/* drivers/staging/greybus/power_supply.c 509 */;
	struct gb_power_supplies {
		struct gb_connection *connection;
		u8 supplies_count;
		struct gb_power_supply *supply;
		struct mutex supplies_lock;
	} cocci_id/* drivers/staging/greybus/power_supply.c 49 */;
	struct gb_power_supply_get_description_response cocci_id/* drivers/staging/greybus/power_supply.c 478 */;
	struct gb_power_supply_get_description_request cocci_id/* drivers/staging/greybus/power_supply.c 477 */;
	struct power_supply *cocci_id/* drivers/staging/greybus/power_supply.c 448 */;
	unsigned int cocci_id/* drivers/staging/greybus/power_supply.c 446 */;
	char *cocci_id/* drivers/staging/greybus/power_supply.c 444 */;
	size_t cocci_id/* drivers/staging/greybus/power_supply.c 444 */;
	bool cocci_id/* drivers/staging/greybus/power_supply.c 398 */;
	const struct gb_power_supply_changes *cocci_id/* drivers/staging/greybus/power_supply.c 395 */;
	struct gb_power_supply *cocci_id/* drivers/staging/greybus/power_supply.c 353 */;
	void cocci_id/* drivers/staging/greybus/power_supply.c 353 */;
	struct gb_power_supply {
		u8 id;
		bool registered;
		struct power_supply *psy;
		struct power_supply_desc desc;
		char name[64];
		struct gb_power_supplies *supplies;
		struct delayed_work work;
		char *manufacturer;
		char *model_name;
		char *serial_number;
		u8 type;
		u8 properties_count;
		u8 properties_count_str;
		unsigned long last_update;
		u8 cache_invalid;
		unsigned int update_interval;
		bool changed;
		struct gb_power_supply_prop *props;
		enum power_supply_property *props_raw;
		bool pm_acquired;
		struct mutex supply_lock;
	} cocci_id/* drivers/staging/greybus/power_supply.c 25 */;
	struct gb_power_supply_prop {
		enum power_supply_property prop;
		u8 gb_prop;
		int val;
		int previous_val;
		bool is_writeable;
	} cocci_id/* drivers/staging/greybus/power_supply.c 17 */;
	struct greybus_driver cocci_id/* drivers/staging/greybus/power_supply.c 1131 */;
	const struct greybus_bundle_id cocci_id/* drivers/staging/greybus/power_supply.c 1125 */[];
	struct gb_bundle *cocci_id/* drivers/staging/greybus/power_supply.c 1115 */;
	enum power_supply_property *cocci_id/* drivers/staging/greybus/power_supply.c 106 */;
	struct greybus_descriptor_cport *cocci_id/* drivers/staging/greybus/power_supply.c 1055 */;
	const struct greybus_bundle_id *cocci_id/* drivers/staging/greybus/power_supply.c 1053 */;
}
