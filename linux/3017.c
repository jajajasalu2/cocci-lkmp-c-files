cocci_test_suite() {
	enum{EC_FLAGS_QUERY_ENABLED, EC_FLAGS_QUERY_PENDING, EC_FLAGS_QUERY_GUARDING, EC_FLAGS_EVENT_HANDLER_INSTALLED, EC_FLAGS_EC_HANDLER_INSTALLED, EC_FLAGS_QUERY_METHODS_INSTALLED, EC_FLAGS_STARTED, EC_FLAGS_STOPPED, EC_FLAGS_EVENTS_MASKED,} cocci_id/* drivers/acpi/ec.c 94 */;
	const u8 *cocci_id/* drivers/acpi/ec.c 932 */;
	unsigned cocci_id/* drivers/acpi/ec.c 932 */;
	u8 cocci_id/* drivers/acpi/ec.c 892 */[2];
	struct transaction cocci_id/* drivers/acpi/ec.c 869 */;
	enum ec_command{ACPI_EC_COMMAND_READ=0x80, ACPI_EC_COMMAND_WRITE=0x81, ACPI_EC_BURST_ENABLE=0x82, ACPI_EC_BURST_DISABLE=0x83, ACPI_EC_COMMAND_QUERY=0x84,} cocci_id/* drivers/acpi/ec.c 79 */;
	struct acpi_ec *cocci_id/* drivers/acpi/ec.c 495 */;
	void cocci_id/* drivers/acpi/ec.c 495 */;
	acpi_event_status cocci_id/* drivers/acpi/ec.c 341 */;
	const char *cocci_id/* drivers/acpi/ec.c 315 */;
	filter
EC_DBG_SEP

fmt

EC_DBG_SEP
 cocci_id/* drivers/acpi/ec.c 216 */;
	const struct dmi_system_id cocci_id/* drivers/acpi/ec.c 2137 */[];
	struct acpi_driver cocci_id/* drivers/acpi/ec.c 2107 */;
	const struct kernel_param *cocci_id/* drivers/acpi/ec.c 2088 */;
	char *cocci_id/* drivers/acpi/ec.c 2087 */;
	u32 cocci_id/* drivers/acpi/ec.c 2049 */;
	struct device *cocci_id/* drivers/acpi/ec.c 2025 */;
	const struct dmi_system_id cocci_id/* drivers/acpi/ec.c 1894 */[]__initconst;
	int cocci_id/* drivers/acpi/ec.c 187 */;
	const struct dmi_system_id *cocci_id/* drivers/acpi/ec.c 1862 */;
	struct workqueue_struct *cocci_id/* drivers/acpi/ec.c 182 */;
	int __init cocci_id/* drivers/acpi/ec.c 1802 */;
	void __init cocci_id/* drivers/acpi/ec.c 1749 */;
	void cocci_id/* drivers/acpi/ec.c 174 */(struct work_struct *work);
	const struct acpi_device_id cocci_id/* drivers/acpi/ec.c 1738 */[];
	void cocci_id/* drivers/acpi/ec.c 173 */(struct acpi_ec *ec);
	int cocci_id/* drivers/acpi/ec.c 172 */(struct acpi_ec *ec, u8 *data);
	struct acpi_resource *cocci_id/* drivers/acpi/ec.c 1716 */;
	struct acpi_ec_query {
		struct transaction transaction;
		struct work_struct work;
		struct acpi_ec_query_handler *handler;
	} cocci_id/* drivers/acpi/ec.c 166 */;
	acpi_status cocci_id/* drivers/acpi/ec.c 1628 */;
	bool cocci_id/* drivers/acpi/ec.c 1627 */;
	struct acpi_device *cocci_id/* drivers/acpi/ec.c 1624 */;
	struct acpi_table_header **cocci_id/* drivers/acpi/ec.c 1612 */;
	struct acpi_table_ecdt *cocci_id/* drivers/acpi/ec.c 1607 */;
	acpi_handle *cocci_id/* drivers/acpi/ec.c 1605 */;
	struct transaction {
		const u8 *wdata;
		u8 *rdata;
		unsigned short irq_count;
		u8 command;
		u8 wi;
		u8 ri;
		u8 wlen;
		u8 rlen;
		u8 flags;
	} cocci_id/* drivers/acpi/ec.c 154 */;
	struct acpi_ec_query_handler {
		struct list_head node;
		acpi_ec_query_func func;
		acpi_handle handle;
		void *data;
		u8 query_bit;
		struct kref kref;
	} cocci_id/* drivers/acpi/ec.c 145 */;
	unsigned long long cocci_id/* drivers/acpi/ec.c 1398 */;
	struct acpi_buffer cocci_id/* drivers/acpi/ec.c 1382 */;
	char cocci_id/* drivers/acpi/ec.c 1381 */[5];
	void **cocci_id/* drivers/acpi/ec.c 1379 */;
	struct acpi_ec cocci_id/* drivers/acpi/ec.c 1360 */;
	acpi_status cocci_id/* drivers/acpi/ec.c 1346 */(struct acpi_resource *resource,
							 void *context);
	u64 *cocci_id/* drivers/acpi/ec.c 1306 */;
	acpi_physical_address cocci_id/* drivers/acpi/ec.c 1305 */;
	irqreturn_t cocci_id/* drivers/acpi/ec.c 1294 */;
	struct work_struct *cocci_id/* drivers/acpi/ec.c 1246 */;
	unsigned long cocci_id/* drivers/acpi/ec.c 1230 */;
	struct acpi_ec_query cocci_id/* drivers/acpi/ec.c 1144 */;
	struct transaction *cocci_id/* drivers/acpi/ec.c 1142 */;
	u8 *cocci_id/* drivers/acpi/ec.c 1139 */;
	struct acpi_ec_query *cocci_id/* drivers/acpi/ec.c 1139 */;
	unsigned int cocci_id/* drivers/acpi/ec.c 110 */;
	struct acpi_ec_query_handler cocci_id/* drivers/acpi/ec.c 1098 */;
	struct acpi_ec_query_handler *cocci_id/* drivers/acpi/ec.c 1097 */;
	void *cocci_id/* drivers/acpi/ec.c 1095 */;
	acpi_handle cocci_id/* drivers/acpi/ec.c 1094 */;
	acpi_ec_query_func cocci_id/* drivers/acpi/ec.c 1094 */;
	u8 cocci_id/* drivers/acpi/ec.c 1093 */;
	struct kref *cocci_id/* drivers/acpi/ec.c 1080 */;
}
