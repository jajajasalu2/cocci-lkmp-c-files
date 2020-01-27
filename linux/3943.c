cocci_test_suite() {
	struct reset_control_array *cocci_id/* drivers/reset/core.c 870 */;
	const struct of_phandle_args *cocci_id/* drivers/reset/core.c 86 */;
	struct reset_control *cocci_id/* drivers/reset/core.c 813 */;
	bool cocci_id/* drivers/reset/core.c 811 */;
	struct device *cocci_id/* drivers/reset/core.c 811 */;
	int cocci_id/* drivers/reset/core.c 811 */;
	struct reset_control **cocci_id/* drivers/reset/core.c 782 */;
	const char *cocci_id/* drivers/reset/core.c 779 */;
	void *cocci_id/* drivers/reset/core.c 773 */;
	const struct reset_control_lookup *cocci_id/* drivers/reset/core.c 687 */;
	struct of_phandle_args cocci_id/* drivers/reset/core.c 606 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/core.c 605 */;
	struct device_node *cocci_id/* drivers/reset/core.c 600 */;
	void cocci_id/* drivers/reset/core.c 593 */;
	struct reset_control cocci_id/* drivers/reset/core.c 582 */;
	struct kref *cocci_id/* drivers/reset/core.c 580 */;
	struct reset_control_array {
		struct reset_control base;
		unsigned int num_rstcs;
		struct reset_control *rstc[];
	} cocci_id/* drivers/reset/core.c 58 */;
	unsigned int cocci_id/* drivers/reset/core.c 540 */;
	struct reset_control {
		struct reset_controller_dev *rcdev;
		struct list_head list;
		unsigned int id;
		struct kref refcnt;
		bool acquired;
		bool shared;
		bool array;
		atomic_t deassert_count;
		atomic_t triggered_count;
	} cocci_id/* drivers/reset/core.c 40 */;
	struct reset_control_array cocci_id/* drivers/reset/core.c 193 */;
	struct reset_control_lookup *cocci_id/* drivers/reset/core.c 169 */;
	struct reset_controller_dev **cocci_id/* drivers/reset/core.c 144 */;
}
