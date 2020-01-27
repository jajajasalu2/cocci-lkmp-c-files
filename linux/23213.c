cocci_test_suite() {
	bool cocci_id/* sound/soc/codecs/rt298.c 979 */;
	irqreturn_t cocci_id/* sound/soc/codecs/rt298.c 976 */;
	void *cocci_id/* sound/soc/codecs/rt298.c 976 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/rt298.c 948 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/rt298.c 744 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/rt298.c 743 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/rt298.c 742 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/rt298.c 664 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/rt298.c 568 */[];
	unsigned int cocci_id/* sound/soc/codecs/rt298.c 501 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/rt298.c 498 */;
	const struct reg_default cocci_id/* sound/soc/codecs/rt298.c 49 */[];
	const int cocci_id/* sound/soc/codecs/rt298.c 421 */[];
	const char *const cocci_id/* sound/soc/codecs/rt298.c 417 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt298.c 408 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/rt298.c 385 */[];
	struct rt298_priv *cocci_id/* sound/soc/codecs/rt298.c 362 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/rt298.c 361 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/rt298.c 358 */;
	int cocci_id/* sound/soc/codecs/rt298.c 358 */;
	struct rt298_priv {
		struct reg_default *index_cache;
		int index_cache_size;
		struct regmap *regmap;
		struct snd_soc_component *component;
		struct rt298_platform_data pdata;
		struct i2c_client *i2c;
		struct snd_soc_jack *jack;
		struct delayed_work jack_detect_work;
		int sys_clk;
		int clk_id;
		int is_hp_in;
	} cocci_id/* sound/soc/codecs/rt298.c 35 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/rt298.c 324 */;
	struct rt298_priv cocci_id/* sound/soc/codecs/rt298.c 306 */;
	struct work_struct *cocci_id/* sound/soc/codecs/rt298.c 303 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/rt298.c 221 */;
	bool *cocci_id/* sound/soc/codecs/rt298.c 219 */;
	int cocci_id/* sound/soc/codecs/rt298.c 206 */[];
	void cocci_id/* sound/soc/codecs/rt298.c 194 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/rt298.c 1305 */;
	const struct acpi_device_id *cocci_id/* sound/soc/codecs/rt298.c 1178 */;
	struct device *cocci_id/* sound/soc/codecs/rt298.c 1177 */;
	struct rt298_platform_data *cocci_id/* sound/soc/codecs/rt298.c 1175 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/rt298.c 1173 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/rt298.c 1172 */;
	const struct dmi_system_id cocci_id/* sound/soc/codecs/rt298.c 1154 */[];
	const struct acpi_device_id cocci_id/* sound/soc/codecs/rt298.c 1148 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/rt298.c 1142 */[];
	const struct regmap_config cocci_id/* sound/soc/codecs/rt298.c 1129 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/rt298.c 1112 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/rt298.c 1068 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/rt298.c 1061 */;
}