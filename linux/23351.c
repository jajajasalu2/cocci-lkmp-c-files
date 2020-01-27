cocci_test_suite() {
	enum anc_state{ANC_UNCONFIGURED=0, ANC_APPLY_FIR_IIR=1, ANC_FIR_IIR_CONFIGURED=2, ANC_APPLY_FIR=3, ANC_FIR_CONFIGURED=4, ANC_APPLY_IIR=5, ANC_IIR_CONFIGURED=6,} cocci_id/* sound/soc/codecs/ab8500-codec.c 99 */;
	enum sid_state{SID_UNCONFIGURED=0, SID_APPLY_FIR=1, SID_FIR_CONFIGURED=2,} cocci_id/* sound/soc/codecs/ab8500-codec.c 84 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/ab8500-codec.c 752 */[];
	struct filter_control {
		long min,max;
		unsigned int count;
		long value[128];
	} cocci_id/* sound/soc/codecs/ab8500-codec.c 72 */;
	struct filter_control cocci_id/* sound/soc/codecs/ab8500-codec.c 69 */;
	unsigned long cocci_id/* sound/soc/codecs/ab8500-codec.c 69 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/ab8500-codec.c 372 */[];
	struct platform_driver cocci_id/* sound/soc/codecs/ab8500-codec.c 2576 */;
	struct ab8500_codec_drvdata cocci_id/* sound/soc/codecs/ab8500-codec.c 2546 */;
	struct ab8500_codec_drvdata *cocci_id/* sound/soc/codecs/ab8500-codec.c 2541 */;
	struct platform_device *cocci_id/* sound/soc/codecs/ab8500-codec.c 2538 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/ab8500-codec.c 2524 */;
	long *cocci_id/* sound/soc/codecs/ab8500-codec.c 2509 */;
	struct filter_control *cocci_id/* sound/soc/codecs/ab8500-codec.c 2466 */;
	struct ab8500_codec_platform_data cocci_id/* sound/soc/codecs/ab8500-codec.c 2465 */;
	u32 cocci_id/* sound/soc/codecs/ab8500-codec.c 2407 */;
	struct ab8500_codec_platform_data *cocci_id/* sound/soc/codecs/ab8500-codec.c 2405 */;
	struct device_node *cocci_id/* sound/soc/codecs/ab8500-codec.c 2404 */;
	struct device *cocci_id/* sound/soc/codecs/ab8500-codec.c 2404 */;
	void cocci_id/* sound/soc/codecs/ab8500-codec.c 2404 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/ab8500-codec.c 2375 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/ab8500-codec.c 2370 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/ab8500-codec.c 228 */[];
	const char *constcocci_id/* sound/soc/codecs/ab8500-codec.c 225 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/ab8500-codec.c 207 */;
	unsigned int cocci_id/* sound/soc/codecs/ab8500-codec.c 2037 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/ab8500-codec.c 2036 */;
	char *cocci_id/* sound/soc/codecs/ab8500-codec.c 2007 */;
	enum ear_cm_voltage cocci_id/* sound/soc/codecs/ab8500-codec.c 2005 */;
	const struct snd_soc_dapm_route *cocci_id/* sound/soc/codecs/ab8500-codec.c 1950 */;
	u8 cocci_id/* sound/soc/codecs/ab8500-codec.c 1947 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/ab8500-codec.c 1946 */;
	struct amic_settings *cocci_id/* sound/soc/codecs/ab8500-codec.c 1944 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/ab8500-codec.c 1926 */;
	int cocci_id/* sound/soc/codecs/ab8500-codec.c 1926 */;
	enum ab8500_filter{AB8500_FILTER_ANC_FIR=0, AB8500_FILTER_ANC_IIR=1, AB8500_FILTER_SID_FIR=2,} cocci_id/* sound/soc/codecs/ab8500-codec.c 1916 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/ab8500-codec.c 191 */;
	unsigned int *cocci_id/* sound/soc/codecs/ab8500-codec.c 168 */;
	void *cocci_id/* sound/soc/codecs/ab8500-codec.c 167 */;
	struct snd_kcontrol_new cocci_id/* sound/soc/codecs/ab8500-codec.c 1611 */[];
	enum amic_type cocci_id/* sound/soc/codecs/ab8500-codec.c 150 */;
	enum amic_micbias cocci_id/* sound/soc/codecs/ab8500-codec.c 138 */;
	const char *cocci_id/* sound/soc/codecs/ab8500-codec.c 138 */;
	const  cocci_id/* sound/soc/codecs/ab8500-codec.c 1335 */(hs_gain_tlv,
								  0,3,
								  TLV_DB_SCALE_ITEM(-3200,400,0),
								  4,15,
								  TLV_DB_SCALE_ITEM(-1800,200,0));
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/ab8500-codec.c 1275 */;
	struct ab8500_codec_drvdata {
		struct regmap *regmap;
		struct mutex ctrl_lock;
		long *sid_fir_values;
		enum sid_state sid_status;
		long *anc_fir_values;
		long *anc_iir_values;
		enum anc_state anc_status;
	} cocci_id/* sound/soc/codecs/ab8500-codec.c 124 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/ab8500-codec.c 1193 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/ab8500-codec.c 1192 */;
	struct ab8500_codec_drvdata_dbg {
		struct regulator *vaud;
		struct regulator *vamic1;
		struct regulator *vamic2;
		struct regulator *vdmic;
	} cocci_id/* sound/soc/codecs/ab8500-codec.c 116 */;
	enum amic_idx{AMIC_IDX_1A, AMIC_IDX_1B, AMIC_IDX_2,} cocci_id/* sound/soc/codecs/ab8500-codec.c 110 */;
	bool cocci_id/* sound/soc/codecs/ab8500-codec.c 1086 */;
}
