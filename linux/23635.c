cocci_test_suite() {
	unsigned cocci_id/* sound/soc/soc-ac97.c 71 */;
	int cocci_id/* sound/soc/soc-ac97.c 70 */;
	struct snd_ac97_gpio_priv *cocci_id/* sound/soc/soc-ac97.c 57 */;
	struct snd_soc_component *cocci_id/* sound/soc/soc-ac97.c 55 */;
	struct gpio_chip *cocci_id/* sound/soc/soc-ac97.c 55 */;
	struct snd_ac97_bus cocci_id/* sound/soc/soc-ac97.c 45 */;
	struct platform_device *cocci_id/* sound/soc/soc-ac97.c 402 */;
	struct snd_ac97_bus_ops *cocci_id/* sound/soc/soc-ac97.c 380 */;
	struct snd_ac97_gpio_priv {
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gpio_chip;
#endif
		unsigned int gpios_set;
		struct snd_soc_component *component;
	} cocci_id/* sound/soc/soc-ac97.c 37 */;
	struct pinctrl_state *cocci_id/* sound/soc/soc-ac97.c 306 */;
	struct pinctrl *cocci_id/* sound/soc/soc-ac97.c 305 */;
	struct snd_ac97_reset_cfg *cocci_id/* sound/soc/soc-ac97.c 303 */;
	struct device *cocci_id/* sound/soc/soc-ac97.c 302 */;
	struct snd_ac97_reset_cfg {
		struct pinctrl *pctl;
		struct pinctrl_state *pstate_reset;
		struct pinctrl_state *pstate_warm_reset;
		struct pinctrl_state *pstate_run;
		int gpio_sdata;
		int gpio_sync;
		int gpio_reset;
	} cocci_id/* sound/soc/soc-ac97.c 27 */;
	struct snd_ac97_reset_cfg cocci_id/* sound/soc/soc-ac97.c 266 */;
	unsigned int cocci_id/* sound/soc/soc-ac97.c 217 */;
	struct snd_ac97 cocci_id/* sound/soc/soc-ac97.c 181 */;
	struct snd_ac97 *cocci_id/* sound/soc/soc-ac97.c 151 */;
	void cocci_id/* sound/soc/soc-ac97.c 151 */;
	const struct gpio_chip cocci_id/* sound/soc/soc-ac97.c 118 */;
}
