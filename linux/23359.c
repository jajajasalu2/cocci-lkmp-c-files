cocci_test_suite() {
	const struct reg_default cocci_id/* sound/soc/codecs/cx2072x.c 95 */[];
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/cx2072x.c 914 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/cx2072x.c 913 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cx2072x.c 889 */[];
	struct cx2072x_priv *cocci_id/* sound/soc/codecs/cx2072x.c 872 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/cx2072x.c 871 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/cx2072x.c 869 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/cx2072x.c 868 */;
	int cocci_id/* sound/soc/codecs/cx2072x.c 868 */;
	u32 cocci_id/* sound/soc/codecs/cx2072x.c 849 */;
	const struct {
		unsigned int mclk;
		unsigned int div;
	} cocci_id/* sound/soc/codecs/cx2072x.c 77 */[];
	const  cocci_id/* sound/soc/codecs/cx2072x.c 71 */(hpf_tlv,
							   0,0,
							   TLV_DB_SCALE_ITEM(120,0,0),
							   1,63,
							   TLV_DB_SCALE_ITEM(30,30,0));
	const unsigned int cocci_id/* sound/soc/codecs/cx2072x.c 697 */;
	union cx2072x_reg_digital_bios_test2 cocci_id/* sound/soc/codecs/cx2072x.c 696 */;
	union cx2072x_reg_i2spcm_ctrl_reg6 cocci_id/* sound/soc/codecs/cx2072x.c 695 */;
	union cx2072x_reg_i2spcm_ctrl_reg5 cocci_id/* sound/soc/codecs/cx2072x.c 694 */;
	union cx2072x_reg_i2spcm_ctrl_reg4 cocci_id/* sound/soc/codecs/cx2072x.c 693 */;
	union cx2072x_reg_i2spcm_ctrl_reg3 cocci_id/* sound/soc/codecs/cx2072x.c 692 */;
	union cx2072x_reg_i2spcm_ctrl_reg2 cocci_id/* sound/soc/codecs/cx2072x.c 691 */;
	union cx2072x_reg_i2spcm_ctrl_reg1 cocci_id/* sound/soc/codecs/cx2072x.c 690 */;
	u64 cocci_id/* sound/soc/codecs/cx2072x.c 688 */;
	unsigned int cocci_id/* sound/soc/codecs/cx2072x.c 676 */;
	struct device *cocci_id/* sound/soc/codecs/cx2072x.c 675 */;
	struct cx2072x_eq_ctrl {
		u8 ch;
		u8 band;
	} cocci_id/* sound/soc/codecs/cx2072x.c 66 */;
	u8 cocci_id/* sound/soc/codecs/cx2072x.c 646 */;
	u8 *cocci_id/* sound/soc/codecs/cx2072x.c 555 */;
	u8 cocci_id/* sound/soc/codecs/cx2072x.c 540 */[2];
	struct i2c_msg cocci_id/* sound/soc/codecs/cx2072x.c 538 */[2];
	__le32 cocci_id/* sound/soc/codecs/cx2072x.c 537 */;
	unsigned int *cocci_id/* sound/soc/codecs/cx2072x.c 533 */;
	u8 cocci_id/* sound/soc/codecs/cx2072x.c 494 */[2 + CX2072X_MAX_EQ_COEFF];
	const void *cocci_id/* sound/soc/codecs/cx2072x.c 491 */;
	size_t cocci_id/* sound/soc/codecs/cx2072x.c 491 */;
	struct cx2072x_priv {
		struct regmap *regmap;
		struct clk *mclk;
		unsigned int mclk_rate;
		struct device *dev;
		struct snd_soc_component *codec;
		struct snd_soc_jack_gpio jack_gpio;
		struct mutex lock;
		unsigned int bclk_ratio;
		bool pll_changed;
		bool i2spcm_changed;
		int sample_size;
		int frame_size;
		int sample_rate;
		unsigned int dai_fmt;
		bool en_aec_ref;
	} cocci_id/* sound/soc/codecs/cx2072x.c 37 */;
	bool cocci_id/* sound/soc/codecs/cx2072x.c 317 */;
	const struct reg_sequence cocci_id/* sound/soc/codecs/cx2072x.c 233 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/cx2072x.c 1710 */;
	struct acpi_device_id cocci_id/* sound/soc/codecs/cx2072x.c 1696 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/cx2072x.c 1688 */[];
	struct cx2072x_priv cocci_id/* sound/soc/codecs/cx2072x.c 1639 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/cx2072x.c 1633 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/cx2072x.c 1632 */;
	int __maybe_unused cocci_id/* sound/soc/codecs/cx2072x.c 1625 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/cx2072x.c 1603 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/cx2072x.c 1556 */[];
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/cx2072x.c 1545 */;
	struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/cx2072x.c 1538 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/cx2072x.c 1523 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/cx2072x.c 1464 */;
	const struct snd_soc_jack_gpio cocci_id/* sound/soc/codecs/cx2072x.c 1455 */;
	void *cocci_id/* sound/soc/codecs/cx2072x.c 1414 */;
	void cocci_id/* sound/soc/codecs/cx2072x.c 1406 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/cx2072x.c 1377 */;
	const enum snd_soc_bias_level cocci_id/* sound/soc/codecs/cx2072x.c 1355 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/cx2072x.c 1352 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/cx2072x.c 1279 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/cx2072x.c 1186 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/cx2072x.c 1138 */;
	const struct soc_enum cocci_id/* sound/soc/codecs/cx2072x.c 1135 */;
	const char *constcocci_id/* sound/soc/codecs/cx2072x.c 1130 */[];
}
