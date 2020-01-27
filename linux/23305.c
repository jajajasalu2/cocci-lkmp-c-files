cocci_test_suite() {
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max98090.c 839 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/max98090.c 811 */;
	const char *cocci_id/* sound/soc/codecs/max98090.c 807 */[];
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/max98090.c 727 */;
	unsigned int *cocci_id/* sound/soc/codecs/max98090.c 357 */;
	struct soc_mixer_control *cocci_id/* sound/soc/codecs/max98090.c 353 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/max98090.c 349 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/max98090.c 348 */;
	const  cocci_id/* sound/soc/codecs/max98090.c 340 */(max98090_rcv_lout_tlv,
							     0,6,
							     TLV_DB_SCALE_ITEM(-6200,400,0),
							     7,14,
							     TLV_DB_SCALE_ITEM(-3500,300,0),
							     15,21,
							     TLV_DB_SCALE_ITEM(-1200,200,0),
							     22,27,
							     TLV_DB_SCALE_ITEM(100,100,0),
							     28,31,
							     TLV_DB_SCALE_ITEM(650,50,0));
	const  cocci_id/* sound/soc/codecs/max98090.c 332 */(max98090_spk_tlv,
							     0,4,
							     TLV_DB_SCALE_ITEM(-4800,400,0),
							     5,10,
							     TLV_DB_SCALE_ITEM(-2900,300,0),
							     11,14,
							     TLV_DB_SCALE_ITEM(-1200,200,0),
							     15,29,
							     TLV_DB_SCALE_ITEM(-500,100,0),
							     30,39,
							     TLV_DB_SCALE_ITEM(950,50,0));
	const  cocci_id/* sound/soc/codecs/max98090.c 324 */(max98090_hp_tlv,
							     0,6,
							     TLV_DB_SCALE_ITEM(-6700,400,0),
							     7,14,
							     TLV_DB_SCALE_ITEM(-4000,300,0),
							     15,21,
							     TLV_DB_SCALE_ITEM(-1700,200,0),
							     22,27,
							     TLV_DB_SCALE_ITEM(-400,100,0),
							     28,31,
							     TLV_DB_SCALE_ITEM(150,50,0));
	const  cocci_id/* sound/soc/codecs/max98090.c 319 */(max98090_mixout_tlv,
							     0,1,
							     TLV_DB_SCALE_ITEM(-1200,250,0),
							     2,3,
							     TLV_DB_SCALE_ITEM(-600,600,0));
	const  cocci_id/* sound/soc/codecs/max98090.c 303 */(max98090_line_tlv,
							     0,3,
							     TLV_DB_SCALE_ITEM(-600,300,0),
							     4,5,
							     TLV_DB_SCALE_ITEM(1400,600,0));
	const  cocci_id/* sound/soc/codecs/max98090.c 300 */(max98090_line_single_ended_tlv,
							     -600,600,0);
	const  cocci_id/* sound/soc/codecs/max98090.c 293 */(max98090_micboost_tlv,
							     0,1,
							     TLV_DB_SCALE_ITEM(0,2000,0),
							     2,2,
							     TLV_DB_SCALE_ITEM(3000,0,0));
	const struct reg_default cocci_id/* sound/soc/codecs/max98090.c 27 */[];
	struct i2c_driver cocci_id/* sound/soc/codecs/max98090.c 2689 */;
	const struct acpi_device_id cocci_id/* sound/soc/codecs/max98090.c 2682 */[];
	const struct of_device_id cocci_id/* sound/soc/codecs/max98090.c 2674 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/max98090.c 2667 */[];
	bool cocci_id/* sound/soc/codecs/max98090.c 264 */;
	struct device *cocci_id/* sound/soc/codecs/max98090.c 264 */;
	struct max98090_priv cocci_id/* sound/soc/codecs/max98090.c 2542 */;
	kernel_ulong_t cocci_id/* sound/soc/codecs/max98090.c 2537 */;
	const struct acpi_device_id *cocci_id/* sound/soc/codecs/max98090.c 2536 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/max98090.c 2533 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/max98090.c 2532 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/max98090.c 2520 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/max98090.c 2509 */;
	enum snd_soc_dapm_type cocci_id/* sound/soc/codecs/max98090.c 2495 */;
	unsigned cocci_id/* sound/soc/codecs/max98090.c 2397 */;
	enum max98090_type cocci_id/* sound/soc/codecs/max98090.c 2379 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/max98090.c 2354 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/max98090.c 2344 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/max98090.c 2312 */;
	irqreturn_t cocci_id/* sound/soc/codecs/max98090.c 2228 */;
	void *cocci_id/* sound/soc/codecs/max98090.c 2228 */;
	struct work_struct *cocci_id/* sound/soc/codecs/max98090.c 2142 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/max98090.c 2020 */;
	struct max98090_cdata *cocci_id/* sound/soc/codecs/max98090.c 1930 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/max98090.c 1925 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/max98090.c 1924 */;
	const struct dmic_table cocci_id/* sound/soc/codecs/max98090.c 1774 */[];
	struct dmic_table {
		int pclk;
		struct {
			int freq;
			int comp[6];
		} settings[6];
	} cocci_id/* sound/soc/codecs/max98090.c 1766 */;
	const int cocci_id/* sound/soc/codecs/max98090.c 1762 */[];
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/max98090.c 1710 */;
	u8 cocci_id/* sound/soc/codecs/max98090.c 1578 */;
	unsigned int cocci_id/* sound/soc/codecs/max98090.c 1573 */;
	unsigned long long int cocci_id/* sound/soc/codecs/max98090.c 1563 */;
	unsigned long long cocci_id/* sound/soc/codecs/max98090.c 1485 */;
	void cocci_id/* sound/soc/codecs/max98090.c 1482 */;
	const unsigned long long cocci_id/* sound/soc/codecs/max98090.c 1478 */[];
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/max98090.c 1429 */;
	struct max98090_priv *cocci_id/* sound/soc/codecs/max98090.c 1428 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/max98090.c 1426 */;
	int cocci_id/* sound/soc/codecs/max98090.c 1426 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/max98090.c 1236 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/max98090.c 1059 */[];
}
