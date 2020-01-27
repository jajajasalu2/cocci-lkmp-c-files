cocci_test_suite() {
	struct nsp_pin_function {
		const char *name;
		const char *const*groups;
		const unsigned int num_groups;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 93 */;
	struct nsp_pin_group {
		const char *name;
		const unsigned int *pins;
		const unsigned int num_pins;
		const struct nsp_mux mux;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 79 */;
	struct nsp_mux_log {
		struct nsp_mux mux;
		bool is_configured;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 66 */;
	int __init cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 638 */;
	struct platform_driver cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 630 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 625 */[];
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 564 */;
	struct resource *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 562 */;
	struct platform_device *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 559 */;
	struct nsp_mux_log cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 543 */;
	struct nsp_mux_log *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 538 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 530 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 521 */;
	struct nsp_mux {
		unsigned int base;
		unsigned int shift;
		unsigned int mask;
		unsigned int alt;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 52 */;
	unsigned long cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 508 */;
	u32 cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 507 */;
	u32 *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 506 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 502 */;
	void cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 501 */;
	const struct nsp_pin_group *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 461 */;
	const struct nsp_pin_function *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 460 */;
	void __iomem *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 397 */;
	const struct nsp_mux *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 393 */;
	struct nsp_pinctrl *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 380 */;
	unsigned *constcocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 378 */;
	const char *const**cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 377 */;
	unsigned int cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 376 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 375 */;
	int cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 375 */;
	const char *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 367 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 351 */;
	struct seq_file *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 346 */;
	unsigned int *cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 335 */;
	const unsigned int **cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 334 */;
	const struct nsp_pin_function cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 301 */[];
	const char *constcocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 289 */[];
	const struct nsp_pin_group cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 243 */[];
	const unsigned int cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 224 */[];
	struct nsp_pin cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 151 */[];
	struct nsp_pin {
		unsigned int pin;
		char *name;
		unsigned int gpio_select;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 135 */;
	struct nsp_pinctrl {
		struct pinctrl_dev *pctl;
		struct device *dev;
		void __iomem *base0;
		void __iomem *base1;
		void __iomem *base2;
		const struct nsp_pin_group *groups;
		unsigned int num_groups;
		const struct nsp_pin_function *functions;
		unsigned int num_functions;
		struct nsp_mux_log *mux_log;
		spinlock_t lock;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-nsp-mux.c 114 */;
}
