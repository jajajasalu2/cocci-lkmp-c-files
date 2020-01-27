cocci_test_suite() {
	int cocci_id/* drivers/of/overlay.c 94 */(struct overlay_changeset *ovcs,
						  struct target *target,
						  const struct device_node *overlay_node);
	int *cocci_id/* drivers/of/overlay.c 914 */;
	void cocci_id/* drivers/of/overlay.c 88 */;
	const void *cocci_id/* drivers/of/overlay.c 731 */;
	u32 cocci_id/* drivers/of/overlay.c 691 */;
	struct overlay_changeset {
		int id;
		struct list_head ovcs_list;
		const void *fdt;
		struct device_node *overlay_tree;
		int count;
		struct fragment *fragments;
		bool symbols_fragment;
		struct of_changeset cset;
	} cocci_id/* drivers/of/overlay.c 67 */;
	struct fragment *cocci_id/* drivers/of/overlay.c 636 */;
	struct of_changeset_entry *cocci_id/* drivers/of/overlay.c 611 */;
	char *cocci_id/* drivers/of/overlay.c 534 */;
	struct fragment {
		struct device_node *overlay;
		struct device_node *target;
	} cocci_id/* drivers/of/overlay.c 51 */;
	const struct device_node *cocci_id/* drivers/of/overlay.c 480 */;
	struct target cocci_id/* drivers/of/overlay.c 413 */;
	const __be32 *cocci_id/* drivers/of/overlay.c 411 */;
	const char *cocci_id/* drivers/of/overlay.c 410 */;
	struct target {
		struct device_node *np;
		bool in_livetree;
	} cocci_id/* drivers/of/overlay.c 41 */;
	struct target *cocci_id/* drivers/of/overlay.c 408 */;
	struct device_node *cocci_id/* drivers/of/overlay.c 408 */;
	struct overlay_changeset *cocci_id/* drivers/of/overlay.c 407 */;
	int cocci_id/* drivers/of/overlay.c 407 */;
	bool cocci_id/* drivers/of/overlay.c 304 */;
	struct property *cocci_id/* drivers/of/overlay.c 303 */;
	const struct property *cocci_id/* drivers/of/overlay.c 200 */;
	struct of_overlay_notify_data cocci_id/* drivers/of/overlay.c 162 */;
	enum of_overlay_notify_action cocci_id/* drivers/of/overlay.c 160 */;
	char *cocci_id/* drivers/of/overlay.c 152 */[];
	struct notifier_block *cocci_id/* drivers/of/overlay.c 136 */;
	struct fdt_header cocci_id/* drivers/of/overlay.c 1025 */;
}
