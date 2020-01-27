cocci_test_suite() {
	u32 cocci_id/* sound/soc/codecs/sti-sas.c 89 */;
	unsigned int *cocci_id/* sound/soc/codecs/sti-sas.c 85 */;
	void *cocci_id/* sound/soc/codecs/sti-sas.c 84 */;
	struct sti_sas_data {
		struct device *dev;
		const struct sti_sas_dev_data *dev_data;
		struct sti_dac_audio dac;
		struct sti_spdif_audio spdif;
	} cocci_id/* sound/soc/codecs/sti-sas.c 76 */;
	struct sti_sas_dev_data {
		const struct regmap_config *regmap;
		const struct snd_soc_dai_ops *dac_ops;
		const struct snd_soc_dapm_widget *dapm_widgets;
		const int num_dapm_widgets;
		const struct snd_soc_dapm_route *dapm_routes;
		const int num_dapm_routes;
	} cocci_id/* sound/soc/codecs/sti-sas.c 66 */;
	struct sti_spdif_audio {
		struct regmap *regmap;
		struct regmap_field **field;
		int mclk;
	} cocci_id/* sound/soc/codecs/sti-sas.c 59 */;
	struct sti_dac_audio {
		struct regmap *regmap;
		struct regmap *virt_regmap;
		struct regmap_field **field;
		struct reset_control *rst;
		int mclk;
	} cocci_id/* sound/soc/codecs/sti-sas.c 51 */;
	struct platform_driver cocci_id/* sound/soc/codecs/sti-sas.c 473 */;
	const struct reg_default cocci_id/* sound/soc/codecs/sti-sas.c 46 */[];
	struct sti_sas_dev_data *cocci_id/* sound/soc/codecs/sti-sas.c 434 */;
	struct sti_sas_data cocci_id/* sound/soc/codecs/sti-sas.c 422 */;
	const struct of_device_id *cocci_id/* sound/soc/codecs/sti-sas.c 419 */;
	struct device_node *cocci_id/* sound/soc/codecs/sti-sas.c 417 */;
	struct platform_device *cocci_id/* sound/soc/codecs/sti-sas.c 415 */;
	enum{STI_SAS_DAI_SPDIF_OUT, STI_SAS_DAI_ANALOG_OUT,} cocci_id/* sound/soc/codecs/sti-sas.c 41 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/sti-sas.c 407 */[];
	struct snd_soc_component_driver cocci_id/* sound/soc/codecs/sti-sas.c 398 */;
	struct sti_sas_data *cocci_id/* sound/soc/codecs/sti-sas.c 390 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/sti-sas.c 388 */;
	int cocci_id/* sound/soc/codecs/sti-sas.c 388 */;
	struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/sti-sas.c 354 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/sti-sas.c 339 */[];
	const struct sti_sas_dev_data cocci_id/* sound/soc/codecs/sti-sas.c 330 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/sti-sas.c 317 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/sti-sas.c 310 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/codecs/sti-sas.c 290 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/sti-sas.c 285 */;
	bool cocci_id/* sound/soc/codecs/sti-sas.c 244 */;
	struct device *cocci_id/* sound/soc/codecs/sti-sas.c 244 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/sti-sas.c 178 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/sti-sas.c 170 */[];
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/sti-sas.c 157 */;
	unsigned int cocci_id/* sound/soc/codecs/sti-sas.c 157 */;
}
