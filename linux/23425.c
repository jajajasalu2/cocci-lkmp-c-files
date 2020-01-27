cocci_test_suite() {
	const struct reg_default cocci_id/* sound/soc/codecs/tlv320aic3x.c 97 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/tlv320aic3x.c 819 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/tlv320aic3x.c 810 */[];
	struct aic3x_priv {
		struct snd_soc_component *component;
		struct regmap *regmap;
		struct regulator_bulk_data supplies[AIC3X_NUM_SUPPLIES];
		struct aic3x_disable_nb disable_nb[AIC3X_NUM_SUPPLIES];
		struct aic3x_setup_data *setup;
		unsigned int sysclk;
		unsigned int dai_fmt;
		unsigned int tdm_delay;
		unsigned int slot_width;
		struct list_head list;
		int master;
		int gpio_reset;
		int power;
#define AIC3X_MODEL_3X 0
#define AIC3X_MODEL_33 1
#define AIC3X_MODEL_3007 2
#define AIC3X_MODEL_3104 3
		u16 model;
		enum aic3x_micbias_voltage micbias_vg;
		u8 ocmv;
	} cocci_id/* sound/soc/codecs/tlv320aic3x.c 71 */;
	struct aic3x_disable_nb {
		struct notifier_block nb;
		struct aic3x_priv *aic3x;
	} cocci_id/* sound/soc/codecs/tlv320aic3x.c 65 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tlv320aic3x.c 605 */[];
	const char *cocci_id/* sound/soc/codecs/tlv320aic3x.c 54 */[AIC3X_NUM_SUPPLIES];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/tlv320aic3x.c 491 */;
	const char *const cocci_id/* sound/soc/codecs/tlv320aic3x.c 270 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/tlv320aic3x.c 213 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/tlv320aic3x.c 212 */;
	struct i2c_driver cocci_id/* sound/soc/codecs/tlv320aic3x.c 1924 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/tlv320aic3x.c 1912 */[];
	struct aic3x_priv cocci_id/* sound/soc/codecs/tlv320aic3x.c 1783 */;
	struct aic3x_setup_data *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1778 */;
	struct aic3x_pdata *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1776 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1774 */;
	const struct reg_sequence cocci_id/* sound/soc/codecs/tlv320aic3x.c 1759 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/tlv320aic3x.c 1749 */[];
	struct snd_soc_dapm_update cocci_id/* sound/soc/codecs/tlv320aic3x.c 172 */;
	u32 cocci_id/* sound/soc/codecs/tlv320aic3x.c 1711 */;
	unsigned short cocci_id/* sound/soc/codecs/tlv320aic3x.c 171 */;
	struct device_node *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1709 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1707 */;
	void cocci_id/* sound/soc/codecs/tlv320aic3x.c 1707 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/tlv320aic3x.c 1693 */;
	struct soc_mixer_control *cocci_id/* sound/soc/codecs/tlv320aic3x.c 164 */;
	bool cocci_id/* sound/soc/codecs/tlv320aic3x.c 1603 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/tlv320aic3x.c 160 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/tlv320aic3x.c 1490 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/tlv320aic3x.c 1481 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/tlv320aic3x.c 1442 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/tlv320aic3x.c 138 */;
	struct aic3x_disable_nb cocci_id/* sound/soc/codecs/tlv320aic3x.c 1368 */;
	struct aic3x_disable_nb *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1367 */;
	void *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1365 */;
	unsigned long cocci_id/* sound/soc/codecs/tlv320aic3x.c 1365 */;
	struct notifier_block *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1364 */;
	struct device *cocci_id/* sound/soc/codecs/tlv320aic3x.c 128 */;
	unsigned int cocci_id/* sound/soc/codecs/tlv320aic3x.c 1253 */;
	u16 cocci_id/* sound/soc/codecs/tlv320aic3x.c 1051 */;
	u8 cocci_id/* sound/soc/codecs/tlv320aic3x.c 1050 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1045 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1044 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1043 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1008 */;
	struct aic3x_priv *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1007 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/tlv320aic3x.c 1005 */;
	int cocci_id/* sound/soc/codecs/tlv320aic3x.c 1005 */;
}
