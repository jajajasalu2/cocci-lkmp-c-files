cocci_test_suite() {
	enum dock_callback_type cocci_id/* drivers/acpi/dock.c 90 */;
	struct dock_dependent_device *cocci_id/* drivers/acpi/dock.c 76 */;
	int cocci_id/* drivers/acpi/dock.c 592 */;
	struct platform_device *cocci_id/* drivers/acpi/dock.c 591 */;
	acpi_handle cocci_id/* drivers/acpi/dock.c 590 */;
	struct platform_device_info cocci_id/* drivers/acpi/dock.c 589 */;
	struct dock_station *cocci_id/* drivers/acpi/dock.c 588 */;
	struct acpi_device *cocci_id/* drivers/acpi/dock.c 586 */;
	void cocci_id/* drivers/acpi/dock.c 586 */;
	const struct attribute_group cocci_id/* drivers/acpi/dock.c 576 */;
	enum dock_callback_type{DOCK_CALL_HANDLER, DOCK_CALL_FIXUP, DOCK_CALL_UEVENT,} cocci_id/* drivers/acpi/dock.c 57 */;
	struct attribute *cocci_id/* drivers/acpi/dock.c 567 */[];
	struct device_attribute *cocci_id/* drivers/acpi/dock.c 549 */;
	char *cocci_id/* drivers/acpi/dock.c 549 */;
	ssize_t cocci_id/* drivers/acpi/dock.c 548 */;
	const char *cocci_id/* drivers/acpi/dock.c 515 */;
	size_t cocci_id/* drivers/acpi/dock.c 515 */;
	struct dock_dependent_device {
		struct list_head list;
		struct acpi_device *adev;
	} cocci_id/* drivers/acpi/dock.c 44 */;
	struct dock_station {
		acpi_handle handle;
		unsigned long last_dock_time;
		u32 flags;
		struct list_head dependent_devices;
		struct list_head sibling;
		struct platform_device *dock_device;
	} cocci_id/* drivers/acpi/dock.c 32 */;
	union acpi_object cocci_id/* drivers/acpi/dock.c 318 */;
	struct acpi_object_list cocci_id/* drivers/acpi/dock.c 317 */;
	char *cocci_id/* drivers/acpi/dock.c 285 */[];
	char cocci_id/* drivers/acpi/dock.c 284 */[13];
	struct device *cocci_id/* drivers/acpi/dock.c 283 */;
	u32 cocci_id/* drivers/acpi/dock.c 281 */;
	bool cocci_id/* drivers/acpi/dock.c 25 */;
	acpi_status cocci_id/* drivers/acpi/dock.c 212 */;
	unsigned long long cocci_id/* drivers/acpi/dock.c 211 */;
	int (*cocci_id/* drivers/acpi/dock.c 118 */)(struct acpi_device *,
						     u32);
	void (*cocci_id/* drivers/acpi/dock.c 109 */)(struct acpi_device *,
						      u32);
	void (*cocci_id/* drivers/acpi/dock.c 100 */)(struct acpi_device *);
}
