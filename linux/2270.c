cocci_test_suite() {
	struct __thermal_zone
__init *cocci_id/* drivers/thermal/of-thermal.c 854 */;
	const char *cocci_id/* drivers/thermal/of-thermal.c 781 */;
	const char *const cocci_id/* drivers/thermal/of-thermal.c 761 */[];
	struct of_phandle_args cocci_id/* drivers/thermal/of-thermal.c 683 */;
	struct thermal_trip *cocci_id/* drivers/thermal/of-thermal.c 680 */;
	struct __thermal_zone {
		enum thermal_device_mode mode;
		int passive_delay;
		int polling_delay;
		int slope;
		int offset;
		int ntrips;
		struct thermal_trip *trips;
		int num_tbps;
		struct __thermal_bind_params *tbps;
		void *sensor_data;
		const struct thermal_zone_of_device_ops *ops;
	} cocci_id/* drivers/thermal/of-thermal.c 67 */;
	const struct thermal_zone_of_device_ops *cocci_id/* drivers/thermal/of-thermal.c 619 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/of-thermal.c 617 */;
	struct thermal_zone_device **cocci_id/* drivers/thermal/of-thermal.c 590 */;
	struct device *cocci_id/* drivers/thermal/of-thermal.c 587 */;
	void *cocci_id/* drivers/thermal/of-thermal.c 587 */;
	int cocci_id/* drivers/thermal/of-thermal.c 587 */;
	void cocci_id/* drivers/thermal/of-thermal.c 581 */;
	struct __thermal_bind_params {
		struct __thermal_cooling_bind_param *tcbp;
		unsigned int count;
		unsigned int trip_id;
		unsigned int usage;
	} cocci_id/* drivers/thermal/of-thermal.c 45 */;
	struct thermal_zone_device_ops cocci_id/* drivers/thermal/of-thermal.c 395 */;
	int *cocci_id/* drivers/thermal/of-thermal.c 381 */;
	struct __thermal_cooling_bind_param {
		struct device_node *cooling_device;
		unsigned long min;
		unsigned long max;
	} cocci_id/* drivers/thermal/of-thermal.c 31 */;
	enum thermal_trip_type *cocci_id/* drivers/thermal/of-thermal.c 306 */;
	enum thermal_device_mode cocci_id/* drivers/thermal/of-thermal.c 283 */;
	enum thermal_device_mode *cocci_id/* drivers/thermal/of-thermal.c 273 */;
	struct __thermal_cooling_bind_param *cocci_id/* drivers/thermal/of-thermal.c 210 */;
	struct __thermal_bind_params *cocci_id/* drivers/thermal/of-thermal.c 209 */;
	struct thermal_cooling_device *cocci_id/* drivers/thermal/of-thermal.c 206 */;
	enum thermal_trend *cocci_id/* drivers/thermal/of-thermal.c 195 */;
	const struct thermal_trip *cocci_id/* drivers/thermal/of-thermal.c 163 */;
	bool cocci_id/* drivers/thermal/of-thermal.c 142 */;
	u32 cocci_id/* drivers/thermal/of-thermal.c 1029 */;
	struct thermal_zone_params *cocci_id/* drivers/thermal/of-thermal.c 1027 */;
	struct thermal_zone_device_ops *cocci_id/* drivers/thermal/of-thermal.c 1017 */;
	struct __thermal_zone *cocci_id/* drivers/thermal/of-thermal.c 1016 */;
	struct device_node *cocci_id/* drivers/thermal/of-thermal.c 1015 */;
	int __init cocci_id/* drivers/thermal/of-thermal.c 1013 */;
}
