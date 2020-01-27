cocci_test_suite() {
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/bd28623.c 99 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/bd28623.c 71 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/bd28623.c 70 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/bd28623.c 40 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/bd28623.c 32 */[];
	struct platform_driver cocci_id/* sound/soc/codecs/bd28623.c 231 */;
	struct bd28623_priv {
		struct device *dev;
		struct regulator_bulk_data supplies[BD28623_NUM_SUPPLIES];
		struct gpio_desc *reset_gpio;
		struct gpio_desc *mute_gpio;
		int switch_spk;
	} cocci_id/* sound/soc/codecs/bd28623.c 23 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/bd28623.c 225 */[];
	struct bd28623_priv cocci_id/* sound/soc/codecs/bd28623.c 188 */;
	struct device *cocci_id/* sound/soc/codecs/bd28623.c 185 */;
	struct platform_device *cocci_id/* sound/soc/codecs/bd28623.c 182 */;
	const char *const cocci_id/* sound/soc/codecs/bd28623.c 17 */[BD28623_NUM_SUPPLIES];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/bd28623.c 167 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/bd28623.c 150 */;
	void cocci_id/* sound/soc/codecs/bd28623.c 120 */;
	struct bd28623_priv *cocci_id/* sound/soc/codecs/bd28623.c 106 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/bd28623.c 104 */;
	int cocci_id/* sound/soc/codecs/bd28623.c 104 */;
}
