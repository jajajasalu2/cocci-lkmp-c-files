cocci_test_suite() {
	struct pm_clock_entry *cocci_id/* drivers/base/power/clock_ops.c 84 */;
	struct pm_subsys_data *cocci_id/* drivers/base/power/clock_ops.c 83 */;
	struct clk *cocci_id/* drivers/base/power/clock_ops.c 81 */;
	const char *cocci_id/* drivers/base/power/clock_ops.c 80 */;
	struct device *cocci_id/* drivers/base/power/clock_ops.c 80 */;
	int cocci_id/* drivers/base/power/clock_ops.c 80 */;
	struct pm_clk_notifier_block *cocci_id/* drivers/base/power/clock_ops.c 639 */;
	struct bus_type *cocci_id/* drivers/base/power/clock_ops.c 638 */;
	struct pm_clk_notifier_block cocci_id/* drivers/base/power/clock_ops.c 474 */;
	char **cocci_id/* drivers/base/power/clock_ops.c 469 */;
	void *cocci_id/* drivers/base/power/clock_ops.c 465 */;
	unsigned long cocci_id/* drivers/base/power/clock_ops.c 465 */;
	struct notifier_block *cocci_id/* drivers/base/power/clock_ops.c 464 */;
	void cocci_id/* drivers/base/power/clock_ops.c 42 */;
	struct list_head cocci_id/* drivers/base/power/clock_ops.c 368 */;
	struct pm_clock_entry {
		struct list_head node;
		char *con_id;
		struct clk *clk;
		enum pce_status status;
	} cocci_id/* drivers/base/power/clock_ops.c 30 */;
	enum pce_status{PCE_STATUS_NONE=0, PCE_STATUS_ACQUIRED, PCE_STATUS_ENABLED, PCE_STATUS_ERROR,} cocci_id/* drivers/base/power/clock_ops.c 23 */;
	struct clk **cocci_id/* drivers/base/power/clock_ops.c 190 */;
}
