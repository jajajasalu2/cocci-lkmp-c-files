cocci_test_suite() {
	const struct lochnagar_aif *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 990 */;
	const struct lochnagar_group *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 989 */;
	bool cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 986 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 973 */;
	struct lochnagar *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 937 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 933 */;
	const struct lochnagar_func *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 911 */;
	const struct lochnagar_pin *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 868 */;
	struct regmap *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 795 */;
	unsigned int cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 793 */;
	struct lochnagar_pin_priv *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 792 */;
	int cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 792 */;
	unsigned int *const cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 779 */;
	const char *const **cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 778 */;
	const char *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 768 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 753 */;
	unsigned int *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 743 */;
	const unsigned int **cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 742 */;
	struct lochnagar_pin_priv {
		struct lochnagar *lochnagar;
		struct device *dev;
		const struct lochnagar_func *funcs;
		unsigned int nfuncs;
		const struct pinctrl_pin_desc *pins;
		unsigned int npins;
		const struct lochnagar_group *groups;
		unsigned int ngroups;
		struct lochnagar_func_groups func_groups[LN_FTYPE_COUNT];
		struct gpio_chip gpio_chip;
	} cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 707 */;
	struct lochnagar_func_groups {
		const char **groups;
		unsigned int ngroups;
	} cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 702 */;
	const struct lochnagar_group cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 643 */[];
	struct lochnagar_group {
		const char *const name;
		enum lochnagar_func_type type;
		const unsigned int *pins;
		unsigned int npins;
		const void *priv;
	} cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 632 */;
	const struct lochnagar_func cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 473 */[];
	struct lochnagar_func {
		const char *const name;
		enum lochnagar_func_type type;
		u8 op;
	} cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 465 */;
	enum lochnagar_func_type{LN_FTYPE_PIN, LN_FTYPE_AIF, LN_FTYPE_COUNT,} cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 459 */;
	struct lochnagar_aif {
		const char name[16];
		unsigned int pins[4];
		u16 src_reg;
		u16 src_mask;
		u16 ctrl_reg;
		u16 ena_mask;
		u16 master_mask;
	} cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 391 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 305 */[];
	struct lochnagar_pin {
		const char name[20];
		enum lochnagar_pin_type type;
		unsigned int reg;
		int shift;
		bool invert;
	} cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 190 */;
	enum lochnagar_pin_type{LN_PTYPE_GPIO, LN_PTYPE_MUX, LN_PTYPE_AIF, LN_PTYPE_COUNT,} cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 183 */;
	struct platform_driver cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1223 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1217 */[];
	struct device *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1140 */;
	struct pinctrl_desc *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1138 */;
	struct platform_device *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1134 */;
	struct lochnagar_func_groups *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1104 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1094 */;
	enum{LOCHNAGAR1_PIN_GF_GPIO2=LOCHNAGAR1_PIN_NUM_GPIOS, LOCHNAGAR1_PIN_GF_GPIO3, LOCHNAGAR1_PIN_GF_GPIO7, LOCHNAGAR1_PIN_LED1, LOCHNAGAR1_PIN_LED2, LOCHNAGAR1_PIN_CDC_AIF1_BCLK, LOCHNAGAR1_PIN_CDC_AIF1_LRCLK, LOCHNAGAR1_PIN_CDC_AIF1_RXDAT, LOCHNAGAR1_PIN_CDC_AIF1_TXDAT, LOCHNAGAR1_PIN_CDC_AIF2_BCLK, LOCHNAGAR1_PIN_CDC_AIF2_LRCLK, LOCHNAGAR1_PIN_CDC_AIF2_RXDAT, LOCHNAGAR1_PIN_CDC_AIF2_TXDAT, LOCHNAGAR1_PIN_CDC_AIF3_BCLK, LOCHNAGAR1_PIN_CDC_AIF3_LRCLK, LOCHNAGAR1_PIN_CDC_AIF3_RXDAT, LOCHNAGAR1_PIN_CDC_AIF3_TXDAT, LOCHNAGAR1_PIN_DSP_AIF1_BCLK, LOCHNAGAR1_PIN_DSP_AIF1_LRCLK, LOCHNAGAR1_PIN_DSP_AIF1_RXDAT, LOCHNAGAR1_PIN_DSP_AIF1_TXDAT, LOCHNAGAR1_PIN_DSP_AIF2_BCLK, LOCHNAGAR1_PIN_DSP_AIF2_LRCLK, LOCHNAGAR1_PIN_DSP_AIF2_RXDAT, LOCHNAGAR1_PIN_DSP_AIF2_TXDAT, LOCHNAGAR1_PIN_PSIA1_BCLK, LOCHNAGAR1_PIN_PSIA1_LRCLK, LOCHNAGAR1_PIN_PSIA1_RXDAT, LOCHNAGAR1_PIN_PSIA1_TXDAT, LOCHNAGAR1_PIN_PSIA2_BCLK, LOCHNAGAR1_PIN_PSIA2_LRCLK, LOCHNAGAR1_PIN_PSIA2_RXDAT, LOCHNAGAR1_PIN_PSIA2_TXDAT, LOCHNAGAR1_PIN_SPDIF_AIF_BCLK, LOCHNAGAR1_PIN_SPDIF_AIF_LRCLK, LOCHNAGAR1_PIN_SPDIF_AIF_RXDAT, LOCHNAGAR1_PIN_SPDIF_AIF_TXDAT, LOCHNAGAR1_PIN_GF_AIF3_BCLK, LOCHNAGAR1_PIN_GF_AIF3_RXDAT, LOCHNAGAR1_PIN_GF_AIF3_LRCLK, LOCHNAGAR1_PIN_GF_AIF3_TXDAT, LOCHNAGAR1_PIN_GF_AIF4_BCLK, LOCHNAGAR1_PIN_GF_AIF4_RXDAT, LOCHNAGAR1_PIN_GF_AIF4_LRCLK, LOCHNAGAR1_PIN_GF_AIF4_TXDAT, LOCHNAGAR1_PIN_GF_AIF1_BCLK, LOCHNAGAR1_PIN_GF_AIF1_RXDAT, LOCHNAGAR1_PIN_GF_AIF1_LRCLK, LOCHNAGAR1_PIN_GF_AIF1_TXDAT, LOCHNAGAR1_PIN_GF_AIF2_BCLK, LOCHNAGAR1_PIN_GF_AIF2_RXDAT, LOCHNAGAR1_PIN_GF_AIF2_LRCLK, LOCHNAGAR1_PIN_GF_AIF2_TXDAT, LOCHNAGAR2_PIN_SPDIF_AIF_BCLK=LOCHNAGAR2_PIN_NUM_GPIOS, LOCHNAGAR2_PIN_SPDIF_AIF_LRCLK, LOCHNAGAR2_PIN_SPDIF_AIF_RXDAT, LOCHNAGAR2_PIN_SPDIF_AIF_TXDAT, LOCHNAGAR2_PIN_USB_AIF1_BCLK, LOCHNAGAR2_PIN_USB_AIF1_LRCLK, LOCHNAGAR2_PIN_USB_AIF1_RXDAT, LOCHNAGAR2_PIN_USB_AIF1_TXDAT, LOCHNAGAR2_PIN_USB_AIF2_BCLK, LOCHNAGAR2_PIN_USB_AIF2_LRCLK, LOCHNAGAR2_PIN_USB_AIF2_RXDAT, LOCHNAGAR2_PIN_USB_AIF2_TXDAT, LOCHNAGAR2_PIN_ADAT_AIF_BCLK, LOCHNAGAR2_PIN_ADAT_AIF_LRCLK, LOCHNAGAR2_PIN_ADAT_AIF_RXDAT, LOCHNAGAR2_PIN_ADAT_AIF_TXDAT, LOCHNAGAR2_PIN_SOUNDCARD_AIF_BCLK, LOCHNAGAR2_PIN_SOUNDCARD_AIF_LRCLK, LOCHNAGAR2_PIN_SOUNDCARD_AIF_RXDAT, LOCHNAGAR2_PIN_SOUNDCARD_AIF_TXDAT,} cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 106 */;
	void cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1058 */;
	const struct pinctrl_desc cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1049 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1045 */;
	unsigned long *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1015 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/cirrus/pinctrl-lochnagar.c 1013 */;
}
