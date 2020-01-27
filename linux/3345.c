cocci_test_suite() {
	struct caps_sensor_2 {
		u16 cap;
		u16 system_power;
		u16 n_cap;
		u16 max;
		u16 min;
		u16 user;
		u8 user_source;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 93 */;
	struct power_sensor_a0 {
		u32 sensor_id;
		struct power_sensor_data_and_time system;
		u32 reserved;
		struct power_sensor_data_and_time proc;
		struct power_sensor_data vdd;
		struct power_sensor_data vdn;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 84 */;
	struct power_sensor_data_and_time {
		u16 update_time;
		u16 value;
		u32 update_tag;
		u64 accumulator;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 77 */;
	ssize_t (*cocci_id/* drivers/hwmon/occ/common.c 731 */)(struct device *,
								struct device_attribute *,
								char *);
	struct temp_sensor_2 *cocci_id/* drivers/hwmon/occ/common.c 730 */;
	struct occ_attribute *cocci_id/* drivers/hwmon/occ/common.c 729 */;
	struct device *cocci_id/* drivers/hwmon/occ/common.c 727 */;
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/occ/common.c 717 */;
	struct power_sensor_data {
		u16 value;
		u32 update_tag;
		u64 accumulator;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 71 */;
	struct extended_sensor *cocci_id/* drivers/hwmon/occ/common.c 659 */;
	unsigned long long cocci_id/* drivers/hwmon/occ/common.c 639 */;
	size_t cocci_id/* drivers/hwmon/occ/common.c 635 */;
	struct power_sensor_2 {
		u32 sensor_id;
		u8 function_id;
		u8 apss_channel;
		u16 reserved;
		u32 update_tag;
		u64 accumulator;
		u16 value;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 61 */;
	struct caps_sensor_3 *cocci_id/* drivers/hwmon/occ/common.c 591 */;
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/occ/common.c 544 */;
	struct caps_sensor_2 *cocci_id/* drivers/hwmon/occ/common.c 541 */;
	struct power_sensor_1 {
		u16 sensor_id;
		u32 update_tag;
		u32 accumulator;
		u16 value;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 54 */;
	struct device_attribute *cocci_id/* drivers/hwmon/occ/common.c 537 */;
	char *cocci_id/* drivers/hwmon/occ/common.c 537 */;
	ssize_t cocci_id/* drivers/hwmon/occ/common.c 536 */;
	struct freq_sensor_2 {
		u32 sensor_id;
		u16 value;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 49 */;
	struct power_sensor_a0 *cocci_id/* drivers/hwmon/occ/common.c 461 */;
	struct freq_sensor_1 {
		u16 sensor_id;
		u16 value;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 44 */;
	struct power_sensor_2 *cocci_id/* drivers/hwmon/occ/common.c 422 */;
	u64 cocci_id/* drivers/hwmon/occ/common.c 409 */;
	u64 *cocci_id/* drivers/hwmon/occ/common.c 409 */;
	u32 *cocci_id/* drivers/hwmon/occ/common.c 409 */;
	struct temp_sensor_2 {
		u32 sensor_id;
		u8 fru_type;
		u8 value;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 38 */;
	struct power_sensor_1 *cocci_id/* drivers/hwmon/occ/common.c 375 */;
	struct freq_sensor_2 *cocci_id/* drivers/hwmon/occ/common.c 345 */;
	u32 cocci_id/* drivers/hwmon/occ/common.c 344 */;
	struct temp_sensor_1 {
		u16 sensor_id;
		u16 value;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 33 */;
	struct freq_sensor_1 *cocci_id/* drivers/hwmon/occ/common.c 315 */;
	struct temp_sensor_1 *cocci_id/* drivers/hwmon/occ/common.c 228 */;
	__be16 cocci_id/* drivers/hwmon/occ/common.c 180 */;
	u8 cocci_id/* drivers/hwmon/occ/common.c 128 */[8];
	u16 cocci_id/* drivers/hwmon/occ/common.c 127 */;
	int cocci_id/* drivers/hwmon/occ/common.c 124 */;
	struct extended_sensor {
		union {
			u8 name[4];
			u32 sensor_id;
		};
		u8 flags;
		u8 reserved;
		u8 data[6];
	}__packed cocci_id/* drivers/hwmon/occ/common.c 114 */;
	const char *cocci_id/* drivers/hwmon/occ/common.c 1074 */;
	u8 *cocci_id/* drivers/hwmon/occ/common.c 1032 */;
	struct caps_sensor_3 {
		u16 cap;
		u16 system_power;
		u16 n_cap;
		u16 max;
		u16 hard_min;
		u16 soft_min;
		u16 user;
		u8 user_source;
	}__packed cocci_id/* drivers/hwmon/occ/common.c 103 */;
	struct occ_sensor_data_block *cocci_id/* drivers/hwmon/occ/common.c 1026 */;
	struct occ_poll_response_header *cocci_id/* drivers/hwmon/occ/common.c 1025 */;
	struct occ_poll_response *cocci_id/* drivers/hwmon/occ/common.c 1023 */;
	struct occ_response *cocci_id/* drivers/hwmon/occ/common.c 1022 */;
	struct occ_sensors *cocci_id/* drivers/hwmon/occ/common.c 1021 */;
	struct occ_sensor *cocci_id/* drivers/hwmon/occ/common.c 1020 */;
	unsigned int cocci_id/* drivers/hwmon/occ/common.c 1019 */;
	struct occ *cocci_id/* drivers/hwmon/occ/common.c 1017 */;
	void cocci_id/* drivers/hwmon/occ/common.c 1017 */;
}
