cocci_test_suite() {
	struct ns2_pin_function {
		const char *name;
		const char *const*groups;
		const unsigned int num_groups;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 99 */;
	struct ns2_mux_log cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 988 */;
	struct ns2_mux_log *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 984 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 975 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 969 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 962 */;
	u32 cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 907 */;
	struct ns2_pin_group {
		const char *name;
		const unsigned int *pins;
		const unsigned int num_pins;
		const struct ns2_mux mux;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 85 */;
	u16 cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 847 */;
	bool cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 846 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 845 */;
	struct ns2_pin *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 844 */;
	unsigned long *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 842 */;
	bool *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 773 */;
	u16 *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 730 */;
	struct ns2_mux_log {
		struct ns2_mux mux;
		bool is_configured;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 72 */;
	unsigned long cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 687 */;
	void __iomem *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 666 */;
	const struct ns2_pin_group *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 641 */;
	const struct ns2_pin_function *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 640 */;
	const struct ns2_mux *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 576 */;
	struct ns2_pinctrl *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 563 */;
	unsigned int *constcocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 561 */;
	const char *const**cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 560 */;
	struct ns2_mux {
		unsigned int base;
		unsigned int offset;
		unsigned int shift;
		unsigned int mask;
		unsigned int alt;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 56 */;
	unsigned int cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 559 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 558 */;
	int cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 558 */;
	const char *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 550 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 534 */;
	struct seq_file *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 529 */;
	void cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 528 */;
	unsigned int *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 518 */;
	const unsigned int **cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 517 */;
	const struct ns2_pin_function cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 490 */[];
	const char *constcocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 458 */[];
	const struct ns2_pin_group cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 389 */[];
	const unsigned int cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 318 */[];
	struct ns2_pin cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 187 */[];
	struct ns2_pin {
		unsigned int pin;
		char *name;
		struct ns2_pinconf pin_conf;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 164 */;
	struct ns2_pinconf {
		unsigned int base;
		unsigned int offset;
		unsigned int src_shift;
		unsigned int input_en;
		unsigned int pull_shift;
		unsigned int drive_shift;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 148 */;
	struct ns2_pinctrl {
		struct pinctrl_dev *pctl;
		struct device *dev;
		void __iomem *base0;
		void __iomem *base1;
		void __iomem *pinconf_base;
		const struct ns2_pin_group *groups;
		unsigned int num_groups;
		const struct ns2_pin_function *functions;
		unsigned int num_functions;
		struct ns2_mux_log *mux_log;
		spinlock_t lock;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 120 */;
	int __init cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 1109 */;
	struct platform_driver cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 1101 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 1096 */[];
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 1034 */;
	struct resource *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 1032 */;
	struct platform_device *cocci_id/* drivers/pinctrl/bcm/pinctrl-ns2-mux.c 1029 */;
}
