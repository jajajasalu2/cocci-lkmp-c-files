cocci_test_suite() {
	struct clk {
		struct clk_core *core;
		struct device *dev;
		const char *dev_id;
		const char *con_id;
		unsigned long min_rate;
		unsigned long max_rate;
		unsigned int exclusive_count;
		struct hlist_node clks_node;
	} cocci_id/* drivers/clk/clk.c 97 */;
	struct clk_core {
		const char *name;
		const struct clk_ops *ops;
		struct clk_hw *hw;
		struct module *owner;
		struct device *dev;
		struct device_node *of_node;
		struct clk_core *parent;
		struct clk_parent_map *parents;
		u8 num_parents;
		u8 new_parent_index;
		unsigned long rate;
		unsigned long req_rate;
		unsigned long new_rate;
		struct clk_core *new_parent;
		struct clk_core *new_child;
		unsigned long flags;
		bool orphan;
		bool rpm_enabled;
		unsigned int enable_count;
		unsigned int prepare_count;
		unsigned int protect_count;
		unsigned long min_rate;
		unsigned long max_rate;
		unsigned long accuracy;
		int phase;
		struct clk_duty duty;
		struct hlist_head children;
		struct hlist_node child_node;
		struct hlist_head clks;
		unsigned int notifier_count;
#ifdef CONFIG_DEBUG_FS
		struct dentry *dentry;
		struct hlist_node debug_node;
#endif
		struct kref ref;
	} cocci_id/* drivers/clk/clk.c 56 */;
	bool cocci_id/* drivers/clk/clk.c 529 */;
	const struct clk_hw *cocci_id/* drivers/clk/clk.c 505 */;
	struct clock_provider *cocci_id/* drivers/clk/clk.c 4813 */;
	const struct of_device_id *cocci_id/* drivers/clk/clk.c 4809 */;
	struct clk_parent_map {
		const struct clk_hw *hw;
		struct clk_core *core;
		const char *fw_name;
		const char *name;
		int index;
	} cocci_id/* drivers/clk/clk.c 48 */;
	uint32_t cocci_id/* drivers/clk/clk.c 4789 */;
	const __be32 *cocci_id/* drivers/clk/clk.c 4788 */;
	struct property *cocci_id/* drivers/clk/clk.c 4787 */;
	unsigned long *cocci_id/* drivers/clk/clk.c 4785 */;
	struct clock_provider {
		void (*clk_init_cb)(struct device_node *);
		struct device_node *np;
		struct list_head node;
	} cocci_id/* drivers/clk/clk.c 4725 */;
	u32 cocci_id/* drivers/clk/clk.c 4650 */;
	struct clk *cocci_id/* drivers/clk/clk.c 464 */;
	unsigned int cocci_id/* drivers/clk/clk.c 464 */;
	struct of_phandle_args *cocci_id/* drivers/clk/clk.c 4525 */;
	struct of_clk_provider *cocci_id/* drivers/clk/clk.c 4524 */;
	struct device_node **cocci_id/* drivers/clk/clk.c 4425 */;
	struct clk_hw *(*cocci_id/* drivers/clk/clk.c 4377 */)(struct of_phandle_args *clkspec,
							       void *data);
	struct clk *(*cocci_id/* drivers/clk/clk.c 4271 */)(struct of_phandle_args *clkspec,
							    void *data);
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/clk.c 4250 */;
	struct clk_onecell_data *cocci_id/* drivers/clk/clk.c 4235 */;
	const struct of_device_id __clk_of_table_sentinel
	__used cocci_id/* drivers/clk/clk.c 4214 */(__clk_of_table_end);
	struct of_device_id cocci_id/* drivers/clk/clk.c 4213 */;
	struct of_clk_provider {
		struct list_head link;
		struct device_node *node;
		struct clk *(*get)(struct of_phandle_args *clkspec,
				   void *data);
		struct clk_hw *(*get_hw)(struct of_phandle_args *clkspec,
					 void *data);
		void *data;
	} cocci_id/* drivers/clk/clk.c 4204 */;
	struct clk_parent_map *cocci_id/* drivers/clk/clk.c 418 */;
	struct notifier_block *cocci_id/* drivers/clk/clk.c 4103 */;
	struct module *cocci_id/* drivers/clk/clk.c 4047 */;
	void cocci_id/* drivers/clk/clk.c 4045 */;
	struct hlist_head *cocci_id/* drivers/clk/clk.c 40 */[];
	struct clk_hw **cocci_id/* drivers/clk/clk.c 3975 */;
	struct of_phandle_args cocci_id/* drivers/clk/clk.c 396 */;
	struct clk **cocci_id/* drivers/clk/clk.c 3946 */;
	struct hlist_head **cocci_id/* drivers/clk/clk.c 3845 */;
	const struct clk_ops cocci_id/* drivers/clk/clk.c 3819 */;
	struct clk_core cocci_id/* drivers/clk/clk.c 3784 */;
	struct kref *cocci_id/* drivers/clk/clk.c 3782 */;
	const struct clk_init_data *cocci_id/* drivers/clk/clk.c 3649 */;
	struct device_node *cocci_id/* drivers/clk/clk.c 3645 */;
	struct device *cocci_id/* drivers/clk/clk.c 3645 */;
	const struct clk_parent_data *cocci_id/* drivers/clk/clk.c 3573 */;
	const struct clk_hw **cocci_id/* drivers/clk/clk.c 3572 */;
	const char *const *cocci_id/* drivers/clk/clk.c 3571 */;
	const char **cocci_id/* drivers/clk/clk.c 3550 */;
	const struct device_node *cocci_id/* drivers/clk/clk.c 339 */;
	struct clk_hw *cocci_id/* drivers/clk/clk.c 336 */(struct of_phandle_args *clkspec);
	int cocci_id/* drivers/clk/clk.c 334 */(const struct device_node *np,
						int index, const char *name,
						struct of_phandle_args *out_args);
	unsigned long cocci_id/* drivers/clk/clk.c 3290 */;
	struct clk_core *cocci_id/* drivers/clk/clk.c 3287 */;
	int cocci_id/* drivers/clk/clk.c 3287 */;
	int __init cocci_id/* drivers/clk/clk.c 3216 */;
	struct dentry *cocci_id/* drivers/clk/clk.c 3138 */;
	struct task_struct *cocci_id/* drivers/clk/clk.c 31 */;
	char cocci_id/* drivers/clk/clk.c 3041 */;
	const struct {
		unsigned long flag;
		const char *name;
	} cocci_id/* drivers/clk/clk.c 2999 */[];
	void *cocci_id/* drivers/clk/clk.c 2974 */;
	struct seq_file *cocci_id/* drivers/clk/clk.c 2940 */;
	struct clk_duty *cocci_id/* drivers/clk/clk.c 2824 */;
	struct clk_duty cocci_id/* drivers/clk/clk.c 2793 */;
	int cocci_id/* drivers/clk/clk.c 2738 */(struct clk_core *core,
						 struct clk_duty *duty);
	int cocci_id/* drivers/clk/clk.c 2696 */(struct clk_core *core);
	const struct clk *cocci_id/* drivers/clk/clk.c 260 */;
	const char *cocci_id/* drivers/clk/clk.c 260 */;
	u8 cocci_id/* drivers/clk/clk.c 2416 */;
	struct hlist_node *cocci_id/* drivers/clk/clk.c 2027 */;
	struct clk_rate_request cocci_id/* drivers/clk/clk.c 1924 */;
	long cocci_id/* drivers/clk/clk.c 1909 */;
	struct clk_notifier_data cocci_id/* drivers/clk/clk.c 1472 */;
	struct clk_notifier *cocci_id/* drivers/clk/clk.c 1471 */;
	struct clk_rate_request *cocci_id/* drivers/clk/clk.c 1388 */;
	struct clk_hw *cocci_id/* drivers/clk/clk.c 1388 */;
	struct clk_core *const cocci_id/* drivers/clk/clk.c 1355 */;
	char *__unused cocci_id/* drivers/clk/clk.c 1267 */;
	void __init cocci_id/* drivers/clk/clk.c 1220 */;
}
