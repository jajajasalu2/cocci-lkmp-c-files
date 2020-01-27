cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/acpi/fan.c 70 */;
	struct acpi_fan {
		bool acpi4;
		struct acpi_fan_fif fif;
		struct acpi_fan_fps *fps;
		int fps_count;
		struct thermal_cooling_device *cdev;
	} cocci_id/* drivers/acpi/fan.c 62 */;
	struct acpi_fan_fif {
		u64 revision;
		u64 fine_grain_ctrl;
		u64 step_size;
		u64 low_speed_notification;
	} cocci_id/* drivers/acpi/fan.c 55 */;
	struct acpi_fan_fps {
		u64 control;
		u64 trip_point;
		u64 speed;
		u64 noise_level;
		u64 power;
	} cocci_id/* drivers/acpi/fan.c 47 */;
	struct device *cocci_id/* drivers/acpi/fan.c 398 */;
	const struct dev_pm_ops cocci_id/* drivers/acpi/fan.c 36 */;
	int cocci_id/* drivers/acpi/fan.c 35 */(struct device *dev);
	char *cocci_id/* drivers/acpi/fan.c 322 */;
	struct thermal_cooling_device *cocci_id/* drivers/acpi/fan.c 319 */;
	struct platform_device *cocci_id/* drivers/acpi/fan.c 316 */;
	struct acpi_fan_fps cocci_id/* drivers/acpi/fan.c 289 */;
	const struct acpi_fan_fps *cocci_id/* drivers/acpi/fan.c 263 */;
	const void *cocci_id/* drivers/acpi/fan.c 261 */;
	const struct acpi_device_id cocci_id/* drivers/acpi/fan.c 26 */[];
	acpi_status cocci_id/* drivers/acpi/fan.c 237 */;
	union acpi_object *cocci_id/* drivers/acpi/fan.c 236 */;
	struct acpi_fan *cocci_id/* drivers/acpi/fan.c 233 */;
	struct acpi_buffer cocci_id/* drivers/acpi/fan.c 232 */;
	struct acpi_device *cocci_id/* drivers/acpi/fan.c 230 */;
	int cocci_id/* drivers/acpi/fan.c 230 */;
	int cocci_id/* drivers/acpi/fan.c 23 */(struct platform_device *pdev);
	bool cocci_id/* drivers/acpi/fan.c 222 */;
	const struct thermal_cooling_device_ops cocci_id/* drivers/acpi/fan.c 211 */;
	unsigned long cocci_id/* drivers/acpi/fan.c 200 */;
	unsigned long *cocci_id/* drivers/acpi/fan.c 160 */;
}
