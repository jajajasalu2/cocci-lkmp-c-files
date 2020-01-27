cocci_test_suite() {
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8903.c 936 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8903.c 812 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8903.c 781 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8903.c 766 */;
	const char *cocci_id/* sound/soc/codecs/wm8903.c 624 */[];
	int cocci_id/* sound/soc/codecs/wm8903.c 414 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/wm8903.c 41 */[];
	u16 cocci_id/* sound/soc/codecs/wm8903.c 375 */;
	struct wm8903_priv *cocci_id/* sound/soc/codecs/wm8903.c 374 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8903.c 373 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm8903.c 371 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8903.c 370 */;
	int cocci_id/* sound/soc/codecs/wm8903.c 370 */;
	enum snd_soc_dapm_type cocci_id/* sound/soc/codecs/wm8903.c 290 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm8903.c 258 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8903.c 2213 */;
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8903.c 2207 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/wm8903.c 2201 */[];
	bool cocci_id/* sound/soc/codecs/wm8903.c 1991 */;
	struct wm8903_platform_data *cocci_id/* sound/soc/codecs/wm8903.c 1988 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8903.c 1986 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8903.c 1985 */;
	u32 cocci_id/* sound/soc/codecs/wm8903.c 1946 */;
	const struct device_node *cocci_id/* sound/soc/codecs/wm8903.c 1945 */;
	struct irq_data *cocci_id/* sound/soc/codecs/wm8903.c 1916 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8903.c 1900 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8903.c 1883 */;
	void cocci_id/* sound/soc/codecs/wm8903.c 1869 */;
	const struct gpio_chip cocci_id/* sound/soc/codecs/wm8903.c 1839 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8903.c 1786 */;
	struct gpio_chip *cocci_id/* sound/soc/codecs/wm8903.c 1783 */;
	unsigned cocci_id/* sound/soc/codecs/wm8903.c 1783 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8903.c 1745 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8903.c 1738 */;
	irqreturn_t cocci_id/* sound/soc/codecs/wm8903.c 1643 */;
	void *cocci_id/* sound/soc/codecs/wm8903.c 1643 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/wm8903.c 1603 */;
	struct device *cocci_id/* sound/soc/codecs/wm8903.c 154 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8903.c 1439 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8903.c 1438 */;
	struct {
		int rate;
		int value;
	} cocci_id/* sound/soc/codecs/wm8903.c 1420 */[];
	struct {
		int ratio;
		int div;
	} cocci_id/* sound/soc/codecs/wm8903.c 1396 */[];
	struct {
		int div;
		int rate;
		int mode;
		int mclk_div;
	} cocci_id/* sound/soc/codecs/wm8903.c 1330 */[];
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8903.c 1310 */;
	struct wm8903_priv {
		struct wm8903_platform_data *pdata;
		struct device *dev;
		struct regmap *regmap;
		struct regulator_bulk_data supplies[WM8903_NUM_SUPPLIES];
		int sysclk;
		int irq;
		struct mutex lock;
		int fs;
		int deemph;
		int dcs_pending;
		int dcs_cache[4];
		int class_w_users;
		struct snd_soc_jack *mic_jack;
		int mic_det;
		int mic_short;
		int mic_last_report;
		int mic_delay;
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gpio_chip;
#endif
	} cocci_id/* sound/soc/codecs/wm8903.c 124 */;
	const char *cocci_id/* sound/soc/codecs/wm8903.c 117 */[WM8903_NUM_SUPPLIES];
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8903.c 1101 */;
}
