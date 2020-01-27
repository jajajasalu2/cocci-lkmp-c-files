cocci_test_suite() {
	struct counter_func_avail_unit *cocci_id/* drivers/counter/counter.c 916 */;
	struct counter_attr_parm cocci_id/* drivers/counter/counter.c 913 */;
	struct counter_count_unit *cocci_id/* drivers/counter/counter.c 912 */;
	const struct counter_device *const cocci_id/* drivers/counter/counter.c 909 */;
	struct counter_device_attr_group *const cocci_id/* drivers/counter/counter.c 908 */;
	enum counter_count_function cocci_id/* drivers/counter/counter.c 895 */;
	const enum counter_count_function *const cocci_id/* drivers/counter/counter.c 892 */;
	const struct counter_func_avail_unit *const cocci_id/* drivers/counter/counter.c 891 */;
	struct counter_func_avail_unit {
		const enum counter_count_function *functions_list;
		size_t num_functions;
	} cocci_id/* drivers/counter/counter.c 882 */;
	const struct counter_signal_enum_ext *const cocci_id/* drivers/counter/counter.c 86 */;
	struct counter_count_ext_unit *cocci_id/* drivers/counter/counter.c 844 */;
	const struct counter_count_ext *cocci_id/* drivers/counter/counter.c 843 */;
	struct counter_signal *cocci_id/* drivers/counter/counter.c 83 */;
	const struct counter_count_ext *const cocci_id/* drivers/counter/counter.c 821 */;
	const struct counter_count_ext_unit *const cocci_id/* drivers/counter/counter.c 820 */;
	struct counter_count_ext_unit {
		struct counter_count *count;
		const struct counter_count_ext *ext;
	} cocci_id/* drivers/counter/counter.c 811 */;
	const char *const cocci_id/* drivers/counter/counter.c 747 */[];
	unsigned long cocci_id/* drivers/counter/counter.c 716 */;
	const struct counter_count_unit *const cocci_id/* drivers/counter/counter.c 713 */;
	struct counter_count_unit {
		struct counter_count *count;
	} cocci_id/* drivers/counter/counter.c 703 */;
	struct counter_action_avail_unit *cocci_id/* drivers/counter/counter.c 633 */;
	struct counter_action_unit *cocci_id/* drivers/counter/counter.c 630 */;
	struct counter_synapse *cocci_id/* drivers/counter/counter.c 628 */;
	const struct counter_action_avail_unit *const cocci_id/* drivers/counter/counter.c 608 */;
	struct counter_action_avail_unit {
		const enum counter_synapse_action *actions_list;
		size_t num_actions;
	} cocci_id/* drivers/counter/counter.c 599 */;
	const size_t cocci_id/* drivers/counter/counter.c 574 */;
	const char *cocci_id/* drivers/counter/counter.c 568 */;
	enum counter_synapse_action cocci_id/* drivers/counter/counter.c 554 */;
	size_t cocci_id/* drivers/counter/counter.c 553 */;
	struct counter_synapse *const cocci_id/* drivers/counter/counter.c 552 */;
	struct counter_count *const cocci_id/* drivers/counter/counter.c 551 */;
	const struct counter_action_unit *const cocci_id/* drivers/counter/counter.c 550 */;
	struct counter_device *const cocci_id/* drivers/counter/counter.c 549 */;
	int cocci_id/* drivers/counter/counter.c 548 */;
	const struct counter_device_attr *const cocci_id/* drivers/counter/counter.c 547 */;
	struct device_attribute *cocci_id/* drivers/counter/counter.c 545 */;
	char *cocci_id/* drivers/counter/counter.c 545 */;
	struct device *cocci_id/* drivers/counter/counter.c 544 */;
	ssize_t cocci_id/* drivers/counter/counter.c 544 */;
	struct counter_action_unit {
		struct counter_synapse *synapse;
		struct counter_count *count;
	} cocci_id/* drivers/counter/counter.c 539 */;
	struct counter_signal_unit *cocci_id/* drivers/counter/counter.c 453 */;
	struct counter_signal *const cocci_id/* drivers/counter/counter.c 451 */;
	struct counter_signal_ext_unit *cocci_id/* drivers/counter/counter.c 410 */;
	const struct counter_signal_ext *cocci_id/* drivers/counter/counter.c 409 */;
	struct list_head *cocci_id/* drivers/counter/counter.c 390 */;
	void cocci_id/* drivers/counter/counter.c 390 */;
	const struct counter_signal_ext *const cocci_id/* drivers/counter/counter.c 373 */;
	const struct counter_signal_ext_unit *const cocci_id/* drivers/counter/counter.c 372 */;
	struct counter_signal_ext_unit {
		struct counter_signal *signal;
		const struct counter_signal_ext *ext;
	} cocci_id/* drivers/counter/counter.c 363 */;
	struct counter_name_unit *cocci_id/* drivers/counter/counter.c 331 */;
	const char *const cocci_id/* drivers/counter/counter.c 329 */;
	const struct counter_name_unit *const cocci_id/* drivers/counter/counter.c 322 */;
	struct counter_name_unit {
		const char *name;
	} cocci_id/* drivers/counter/counter.c 314 */;
	enum counter_signal_value cocci_id/* drivers/counter/counter.c 305 */;
	const struct counter_signal_unit *const cocci_id/* drivers/counter/counter.c 302 */;
	const char *const cocci_id/* drivers/counter/counter.c 29 */[4];
	struct counter_signal_unit {
		struct counter_signal *signal;
	} cocci_id/* drivers/counter/counter.c 288 */;
	struct counter_device_attr cocci_id/* drivers/counter/counter.c 286 */;
	struct list_head *const cocci_id/* drivers/counter/counter.c 245 */;
	struct counter_device_attr *cocci_id/* drivers/counter/counter.c 242 */;
	const struct counter_attr_parm *const cocci_id/* drivers/counter/counter.c 240 */;
	struct counter_device_attr {
		struct device_attribute dev_attr;
		struct list_head l;
		void *component;
	} cocci_id/* drivers/counter/counter.c 234 */;
	const char *const cocci_id/* drivers/counter/counter.c 23 */[2];
	struct counter_attr_parm {
		struct counter_device_attr_group *group;
		const char *prefix;
		const char *name;
		ssize_t (*show)(struct device *dev,
				struct device_attribute *attr, char *buf);
		ssize_t (*store)(struct device *dev,
				 struct device_attribute *attr,
				 const char *buf, size_t len);
		void *component;
	} cocci_id/* drivers/counter/counter.c 223 */;
	const struct counter_device_enum_ext *const cocci_id/* drivers/counter/counter.c 209 */;
	const struct counter_count_enum_ext *const cocci_id/* drivers/counter/counter.c 149 */;
	void __exit cocci_id/* drivers/counter/counter.c 1486 */;
	int __init cocci_id/* drivers/counter/counter.c 1481 */;
	void *cocci_id/* drivers/counter/counter.c 147 */;
	struct counter_count *cocci_id/* drivers/counter/counter.c 146 */;
	struct counter_device **cocci_id/* drivers/counter/counter.c 1453 */;
	struct counter_device *cocci_id/* drivers/counter/counter.c 145 */;
	struct counter_device_state *cocci_id/* drivers/counter/counter.c 1339 */;
	struct bus_type cocci_id/* drivers/counter/counter.c 1325 */;
	struct device_type cocci_id/* drivers/counter/counter.c 1320 */;
	struct counter_device_state *const cocci_id/* drivers/counter/counter.c 1256 */;
	struct counter_device_attr_group *cocci_id/* drivers/counter/counter.c 1190 */;
	struct counter_ext_unit *cocci_id/* drivers/counter/counter.c 1115 */;
	const struct counter_device_ext *const cocci_id/* drivers/counter/counter.c 1094 */;
	const struct counter_ext_unit *const cocci_id/* drivers/counter/counter.c 1093 */;
	struct counter_ext_unit {
		const struct counter_device_ext *ext;
	} cocci_id/* drivers/counter/counter.c 1085 */;
	struct counter_size_unit *cocci_id/* drivers/counter/counter.c 1058 */;
	const struct counter_size_unit *const cocci_id/* drivers/counter/counter.c 1049 */;
	struct counter_size_unit {
		size_t size;
	} cocci_id/* drivers/counter/counter.c 1041 */;
}
