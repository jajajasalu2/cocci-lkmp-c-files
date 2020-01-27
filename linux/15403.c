cocci_test_suite() {
	u16 cocci_id/* drivers/watchdog/wdat_wdt.c 92 */;
	u8 cocci_id/* drivers/watchdog/wdat_wdt.c 89 */;
	const struct wdat_instruction *cocci_id/* drivers/watchdog/wdat_wdt.c 58 */;
	u32 *cocci_id/* drivers/watchdog/wdat_wdt.c 58 */;
	bool cocci_id/* drivers/watchdog/wdat_wdt.c 52 */;
	struct platform_driver cocci_id/* drivers/watchdog/wdat_wdt.c 513 */;
	const struct dev_pm_ops cocci_id/* drivers/watchdog/wdat_wdt.c 508 */;
	struct wdat_wdt cocci_id/* drivers/watchdog/wdat_wdt.c 50 */;
	struct wdat_wdt {
		struct platform_device *pdev;
		struct watchdog_device wdd;
		unsigned int period;
		bool stopped_in_sleep;
		bool stopped;
		struct list_head *instructions[MAX_WDAT_ACTIONS];
	} cocci_id/* drivers/watchdog/wdat_wdt.c 41 */;
	struct resource cocci_id/* drivers/watchdog/wdat_wdt.c 372 */;
	struct list_head *cocci_id/* drivers/watchdog/wdat_wdt.c 370 */;
	struct wdat_instruction *cocci_id/* drivers/watchdog/wdat_wdt.c 369 */;
	const struct acpi_generic_address *cocci_id/* drivers/watchdog/wdat_wdt.c 368 */;
	struct acpi_wdat_entry *cocci_id/* drivers/watchdog/wdat_wdt.c 366 */;
	void __iomem *cocci_id/* drivers/watchdog/wdat_wdt.c 347 */;
	struct acpi_table_header **cocci_id/* drivers/watchdog/wdat_wdt.c 318 */;
	acpi_status cocci_id/* drivers/watchdog/wdat_wdt.c 314 */;
	void __iomem **cocci_id/* drivers/watchdog/wdat_wdt.c 313 */;
	struct resource *cocci_id/* drivers/watchdog/wdat_wdt.c 312 */;
	const struct acpi_table_wdat *cocci_id/* drivers/watchdog/wdat_wdt.c 310 */;
	const struct acpi_wdat_entry *cocci_id/* drivers/watchdog/wdat_wdt.c 309 */;
	struct device *cocci_id/* drivers/watchdog/wdat_wdt.c 308 */;
	struct platform_device *cocci_id/* drivers/watchdog/wdat_wdt.c 306 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/wdat_wdt.c 297 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/wdat_wdt.c 291 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/wdat_wdt.c 282 */;
	unsigned int cocci_id/* drivers/watchdog/wdat_wdt.c 282 */;
	struct wdat_instruction {
		struct acpi_wdat_entry entry;
		void __iomem *reg;
		struct list_head node;
	} cocci_id/* drivers/watchdog/wdat_wdt.c 24 */;
	int cocci_id/* drivers/watchdog/wdat_wdt.c 220 */;
	u32 cocci_id/* drivers/watchdog/wdat_wdt.c 219 */;
	struct wdat_wdt *cocci_id/* drivers/watchdog/wdat_wdt.c 217 */;
	void cocci_id/* drivers/watchdog/wdat_wdt.c 217 */;
}
