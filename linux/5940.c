cocci_test_suite() {
	void __exit cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 962 */;
	int __init cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 956 */;
	struct platform_driver cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 948 */;
	const struct acpi_device_id cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 942 */[];
	size_t cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 889 */;
	struct mrfld_family *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 886 */;
	struct platform_device *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 884 */;
	const struct pinctrl_desc cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 877 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 87 */[];
	const struct pinconf_ops cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 869 */;
	const unsigned int *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 833 */;
	unsigned long cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 728 */;
	u16 cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 650 */;
	u32 cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 649 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 648 */;
	unsigned long *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 645 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 644 */;
	int cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 644 */;
	struct mrfld_family {
		unsigned int barno;
		unsigned int pin_base;
		size_t npins;
		bool protected;
		void __iomem *regs;
	} cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 64 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 636 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 618 */;
	const struct intel_pingroup *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 593 */;
	unsigned int *constcocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 579 */;
	const char *const**cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 578 */;
	const char *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 568 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 554 */;
	struct seq_file *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 532 */;
	void cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 532 */;
	const unsigned int **cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 523 */;
	unsigned int *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 523 */;
	u32 *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 479 */;
	void __iomem *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 466 */;
	const struct mrfld_family *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 457 */;
	bool cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 455 */;
	struct mrfld_pinctrl *cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 455 */;
	unsigned int cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 455 */;
	struct mrfld_pinctrl {
		struct device *dev;
		raw_spinlock_t lock;
		struct pinctrl_desc pctldesc;
		struct pinctrl_dev *pctldev;
		const struct mrfld_family *families;
		size_t nfamilies;
		const struct intel_function *functions;
		size_t nfunctions;
		const struct intel_pingroup *groups;
		size_t ngroups;
		const struct pinctrl_pin_desc *pins;
		size_t npins;
	} cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 419 */;
	const struct mrfld_family cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 386 */[];
	const struct intel_function cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 374 */[];
	const char *constcocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 369 */[];
	const struct intel_pingroup cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 352 */[];
	const unsigned int cocci_id/* drivers/pinctrl/intel/pinctrl-merrifield.c 347 */[];
}
