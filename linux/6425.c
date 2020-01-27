cocci_test_suite() {
	int cocci_id/* drivers/regulator/core.c 99 */(struct regulator_dev *rdev,
						      unsigned long event,
						      void *data);
	unsigned int cocci_id/* drivers/regulator/core.c 98 */(struct regulator_dev *rdev);
	int cocci_id/* drivers/regulator/core.c 96 */(struct regulator *regulator);
	struct regulator_supply_alias {
		struct list_head list;
		struct device *src_dev;
		const char *src_supply;
		struct device *alias_dev;
		const char *alias_supply;
	} cocci_id/* drivers/regulator/core.c 87 */;
	struct regulator_enable_gpio {
		struct list_head list;
		struct gpio_desc *gpiod;
		u32 enable_count;
		u32 request_count;
	} cocci_id/* drivers/regulator/core.c 75 */;
	struct regulator_map {
		struct list_head list;
		const char *dev_name;
		const char *supply;
		struct regulator_dev *regulator;
	} cocci_id/* drivers/regulator/core.c 63 */;
	struct device_attribute *cocci_id/* drivers/regulator/core.c 592 */;
	int __init cocci_id/* drivers/regulator/core.c 5656 */;
	struct seq_file *cocci_id/* drivers/regulator/core.c 5637 */;
	struct dentry *cocci_id/* drivers/regulator/core.c 56 */;
	struct summary_lock_data cocci_id/* drivers/regulator/core.c 5572 */;
	struct summary_lock_data *cocci_id/* drivers/regulator/core.c 5536 */;
	struct summary_lock_data {
		struct ww_acquire_ctx *ww_ctx;
		struct regulator_dev **new_contended_rdev;
		struct regulator_dev **old_contended_rdev;
	} cocci_id/* drivers/regulator/core.c 5527 */;
	struct summary_data cocci_id/* drivers/regulator/core.c 5460 */;
	struct summary_data *cocci_id/* drivers/regulator/core.c 5445 */;
	void cocci_id/* drivers/regulator/core.c 5438 */(struct seq_file *s,
							 struct regulator_dev *rdev,
							 int level);
	struct summary_data {
		struct seq_file *s;
		struct regulator_dev *parent;
		int level;
	} cocci_id/* drivers/regulator/core.c 5432 */;
	struct regulator_init_data *cocci_id/* drivers/regulator/core.c 5411 */;
	struct regmap *cocci_id/* drivers/regulator/core.c 5405 */;
	bool cocci_id/* drivers/regulator/core.c 54 */;
	struct class cocci_id/* drivers/regulator/core.c 5327 */;
	const struct dev_pm_ops __maybe_unused cocci_id/* drivers/regulator/core.c 5321 */;
	atomic_t cocci_id/* drivers/regulator/core.c 5005 */;
	struct regulator_config *cocci_id/* drivers/regulator/core.c 5004 */;
	const struct regulator_init_data *cocci_id/* drivers/regulator/core.c 5003 */;
	struct regulator_coupler cocci_id/* drivers/regulator/core.c 4985 */;
	struct regulator_coupler *cocci_id/* drivers/regulator/core.c 4967 */;
	char cocci_id/* drivers/regulator/core.c 4758 */[NAME_MAX];
	const struct attribute_group *cocci_id/* drivers/regulator/core.c 4740 */[];
	const struct attribute_group cocci_id/* drivers/regulator/core.c 4735 */;
	struct attribute *cocci_id/* drivers/regulator/core.c 4670 */;
	umode_t cocci_id/* drivers/regulator/core.c 4669 */;
	struct kobject *cocci_id/* drivers/regulator/core.c 4669 */;
	struct regulator_voltage *cocci_id/* drivers/regulator/core.c 466 */;
	struct attribute *cocci_id/* drivers/regulator/core.c 4638 */[];
	int *cocci_id/* drivers/regulator/core.c 462 */;
	struct regulator_bulk_data *cocci_id/* drivers/regulator/core.c 4513 */;
	async_cookie_t cocci_id/* drivers/regulator/core.c 4444 */;
	void *cocci_id/* drivers/regulator/core.c 4388 */;
	unsigned long cocci_id/* drivers/regulator/core.c 4388 */;
	struct regulator_dev *cocci_id/* drivers/regulator/core.c 4387 */;
	int cocci_id/* drivers/regulator/core.c 4387 */;
	struct notifier_block *cocci_id/* drivers/regulator/core.c 4362 */;
	unsigned int *cocci_id/* drivers/regulator/core.c 4216 */;
	char cocci_id/* drivers/regulator/core.c 408 */[32];
	struct device_node *cocci_id/* drivers/regulator/core.c 372 */;
	struct coupling_desc *cocci_id/* drivers/regulator/core.c 3652 */;
	struct regulator_dev **cocci_id/* drivers/regulator/core.c 3650 */;
	struct regulator_state *cocci_id/* drivers/regulator/core.c 3322 */;
	suspend_state_t cocci_id/* drivers/regulator/core.c 3320 */;
	struct ww_acquire_ctx *cocci_id/* drivers/regulator/core.c 329 */;
	const struct regulator_ops *cocci_id/* drivers/regulator/core.c 3217 */;
	unsigned int cocci_id/* drivers/regulator/core.c 3215 */;
	unsigned cocci_id/* drivers/regulator/core.c 3100 */;
	struct pre_voltage_change_data cocci_id/* drivers/regulator/core.c 3078 */;
	unsigned *cocci_id/* drivers/regulator/core.c 3076 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/core.c 3055 */;
	struct regulator_dev cocci_id/* drivers/regulator/core.c 2740 */;
	struct work_struct *cocci_id/* drivers/regulator/core.c 2738 */;
	struct ww_acquire_ctx cocci_id/* drivers/regulator/core.c 2665 */;
	struct regulator *cocci_id/* drivers/regulator/core.c 2598 */;
	void cocci_id/* drivers/regulator/core.c 2325 */;
	struct regulator_enable_gpio *cocci_id/* drivers/regulator/core.c 2287 */;
	struct regulator_enable_gpio cocci_id/* drivers/regulator/core.c 2240 */;
	struct gpio_desc *cocci_id/* drivers/regulator/core.c 2229 */;
	const struct regulator_config *cocci_id/* drivers/regulator/core.c 2226 */;
	const char *const*cocci_id/* drivers/regulator/core.c 2173 */;
	struct regulator_supply_alias cocci_id/* drivers/regulator/core.c 2117 */;
	struct device_link *cocci_id/* drivers/regulator/core.c 1853 */;
	enum regulator_get_type cocci_id/* drivers/regulator/core.c 1848 */;
	const char *cocci_id/* drivers/regulator/core.c 1847 */;
	struct device *cocci_id/* drivers/regulator/core.c 1847 */;
	struct regulator_map *cocci_id/* drivers/regulator/core.c 1721 */;
	const void *cocci_id/* drivers/regulator/core.c 1688 */;
	const char **cocci_id/* drivers/regulator/core.c 1674 */;
	struct device **cocci_id/* drivers/regulator/core.c 1674 */;
	struct regulator_supply_alias *cocci_id/* drivers/regulator/core.c 1662 */;
	char cocci_id/* drivers/regulator/core.c 1582 */[REG_STR_SIZE];
	const struct file_operations cocci_id/* drivers/regulator/core.c 1567 */;
	char *cocci_id/* drivers/regulator/core.c 1533 */;
	const struct regulation_constraints *cocci_id/* drivers/regulator/core.c 1532 */;
	const struct regulator *cocci_id/* drivers/regulator/core.c 1531 */;
	loff_t *cocci_id/* drivers/regulator/core.c 1529 */;
	size_t cocci_id/* drivers/regulator/core.c 1529 */;
	char __user *cocci_id/* drivers/regulator/core.c 1528 */;
	struct file *cocci_id/* drivers/regulator/core.c 1527 */;
	ssize_t cocci_id/* drivers/regulator/core.c 1527 */;
	struct regulator_map cocci_id/* drivers/regulator/core.c 1494 */;
	int cocci_id/* drivers/regulator/core.c 1274 */(struct regulator_dev *rdev);
	struct regulation_constraints *cocci_id/* drivers/regulator/core.c 1245 */;
	void cocci_id/* drivers/regulator/core.c 108 */(struct regulator *regulator);
	struct regulator *cocci_id/* drivers/regulator/core.c 105 */(struct regulator_dev *rdev,
								     struct device *dev,
								     const char *supply_name);
	char cocci_id/* drivers/regulator/core.c 1042 */[160];
	int cocci_id/* drivers/regulator/core.c 103 */(struct regulator_dev *rdev,
						       suspend_state_t state);
	int cocci_id/* drivers/regulator/core.c 101 */(struct regulator_dev *rdev,
						       int min_uV, int max_uV);
}
