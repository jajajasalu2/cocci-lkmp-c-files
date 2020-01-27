cocci_test_suite() {
	struct regmap *cocci_id/* sound/soc/codecs/cs4271.c 699 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cs4271.c 688 */;
	struct cs4271_private *cocci_id/* sound/soc/codecs/cs4271.c 652 */;
	struct cs4271_platform_data *cocci_id/* sound/soc/codecs/cs4271.c 651 */;
	struct cs4271_private **cocci_id/* sound/soc/codecs/cs4271.c 649 */;
	struct device *cocci_id/* sound/soc/codecs/cs4271.c 648 */;
	int cocci_id/* sound/soc/codecs/cs4271.c 648 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cs4271.c 631 */;
	void cocci_id/* sound/soc/codecs/cs4271.c 619 */;
	bool cocci_id/* sound/soc/codecs/cs4271.c 566 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cs4271.c 561 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/cs4271.c 553 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cs4271.c 467 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cs4271.c 460 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cs4271.c 439 */[];
	unsigned int cocci_id/* sound/soc/codecs/cs4271.c 346 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cs4271.c 341 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cs4271.c 340 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cs4271.c 339 */;
	struct cs4271_clk_cfg cocci_id/* sound/soc/codecs/cs4271.c 307 */[];
	struct cs4271_clk_cfg {
		bool master;
		u8 speed_mode;
		unsigned short ratio;
		u8 ratio_mask;
	} cocci_id/* sound/soc/codecs/cs4271.c 300 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/cs4271.c 281 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/cs4271.c 280 */;
	int cocci_id/* sound/soc/codecs/cs4271.c 255 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cs4271.c 182 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cs4271.c 172 */[];
	struct cs4271_private {
		unsigned int mclk;
		bool master;
		bool deemph;
		struct regmap *regmap;
		int rate;
		int gpio_nreset;
		int gpio_disable;
		bool enable_soft_reset;
		struct regulator_bulk_data supplies[ARRAY_SIZE(supply_names)];
	} cocci_id/* sound/soc/codecs/cs4271.c 156 */;
	const char *const cocci_id/* sound/soc/codecs/cs4271.c 152 */[];
	const struct reg_default cocci_id/* sound/soc/codecs/cs4271.c 137 */[];
}
