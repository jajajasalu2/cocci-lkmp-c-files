cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 823 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 817 */[];
	struct device *cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 750 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 747 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 738 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 729 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 676 */;
	void cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 675 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 620 */;
	const struct tb10x_pinfuncgrp *cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 619 */;
	struct tb10x_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 593 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-tb10x.c 591 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 590 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 568 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 544 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 543 */;
	struct pinctrl_map **cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 541 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 541 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 540 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 539 */;
	int cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 539 */;
	const unsigned **cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 528 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 495 */;
	struct tb10x_pinctrl {
		struct pinctrl_dev *pctl;
		void *base;
		const struct tb10x_pinfuncgrp *pingroups;
		unsigned int pinfuncgrpcnt;
		unsigned int pinfuncnt;
		struct mutex mutex;
		struct tb10x_port ports[TB10X_PORTS];
	DECLARE_BITMAP(gpios,MAX_PIN+1)
		;
		struct tb10x_of_pinfunc pinfuncs[];
	} cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 480 */;
	struct tb10x_port {
		unsigned int mode;
		unsigned int count;
	} cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 463 */;
	struct tb10x_of_pinfunc {
		const char *name;
		const char *group;
	} cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 450 */;
	const struct tb10x_pinfuncgrp cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 406 */[];
	struct tb10x_pinfuncgrp {
		const char *name;
		const unsigned int *pins;
		const unsigned int pincnt;
		const int port;
		const unsigned int mode;
		const int isgpio;
	} cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 392 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 39 */[];
	const unsigned cocci_id/* drivers/pinctrl/pinctrl-tb10x.c 331 */[];
}
