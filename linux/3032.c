cocci_test_suite() {
	struct acpi_memory_info cocci_id/* drivers/acpi/acpi_memhotplug.c 95 */;
	struct acpi_resource_address64 cocci_id/* drivers/acpi/acpi_memhotplug.c 76 */;
	struct acpi_resource *cocci_id/* drivers/acpi/acpi_memhotplug.c 73 */;
	struct acpi_memory_device {
		struct acpi_device *device;
		unsigned int state;
		struct list_head res_list;
	} cocci_id/* drivers/acpi/acpi_memhotplug.c 66 */;
	struct acpi_memory_info {
		struct list_head list;
		u64 start_addr;
		u64 length;
		unsigned short caching;
		unsigned short write_protect;
		unsigned int enabled:1;
	} cocci_id/* drivers/acpi/acpi_memhotplug.c 57 */;
	struct acpi_scan_handler cocci_id/* drivers/acpi/acpi_memhotplug.c 48 */;
	void cocci_id/* drivers/acpi/acpi_memhotplug.c 46 */(struct acpi_device *device);
	int cocci_id/* drivers/acpi/acpi_memhotplug.c 44 */(struct acpi_device *device,
							    const struct acpi_device_id *not_used);
	char *cocci_id/* drivers/acpi/acpi_memhotplug.c 351 */;
	int __init cocci_id/* drivers/acpi/acpi_memhotplug.c 351 */;
	void __init cocci_id/* drivers/acpi/acpi_memhotplug.c 341 */;
	bool __initdata cocci_id/* drivers/acpi/acpi_memhotplug.c 339 */;
	const struct acpi_device_id cocci_id/* drivers/acpi/acpi_memhotplug.c 32 */[];
	struct acpi_memory_device cocci_id/* drivers/acpi/acpi_memhotplug.c 289 */;
	const struct acpi_device_id *cocci_id/* drivers/acpi/acpi_memhotplug.c 281 */;
	void cocci_id/* drivers/acpi/acpi_memhotplug.c 270 */;
	acpi_handle cocci_id/* drivers/acpi/acpi_memhotplug.c 184 */;
	struct acpi_device *cocci_id/* drivers/acpi/acpi_memhotplug.c 164 */;
	struct acpi_memory_info *cocci_id/* drivers/acpi/acpi_memhotplug.c 163 */;
	struct memory_block *cocci_id/* drivers/acpi/acpi_memhotplug.c 158 */;
	void *cocci_id/* drivers/acpi/acpi_memhotplug.c 158 */;
	int cocci_id/* drivers/acpi/acpi_memhotplug.c 158 */;
	unsigned long long cocci_id/* drivers/acpi/acpi_memhotplug.c 139 */;
	struct acpi_memory_device *cocci_id/* drivers/acpi/acpi_memhotplug.c 137 */;
	acpi_status cocci_id/* drivers/acpi/acpi_memhotplug.c 122 */;
}
