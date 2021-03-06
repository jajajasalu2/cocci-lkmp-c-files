cocci_test_suite() {
	struct snd_soc_acpi_mach *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 950 */;
	struct kbl_rt5663_private *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 949 */;
	struct platform_device *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 947 */;
	struct snd_soc_card cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 932 */;
	char cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 886 */[NAME_SIZE];
	struct snd_soc_component *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 884 */;
	struct kbl_hdmi_pcm *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 883 */;
	struct snd_soc_dai_link cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 798 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 70 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 69 */;
	const unsigned int cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 549 */[];
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 544 */;
	struct snd_soc_ops cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 536 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 526 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 524 */;
	struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 508 */;
	enum{KBL_DPCM_AUDIO_PB=0, KBL_DPCM_AUDIO_CP, KBL_DPCM_AUDIO_HS_PB, KBL_DPCM_AUDIO_ECHO_REF_CP, KBL_DPCM_AUDIO_REF_CP, KBL_DPCM_AUDIO_DMIC_CP, KBL_DPCM_AUDIO_HDMI1_PB, KBL_DPCM_AUDIO_HDMI2_PB, KBL_DPCM_AUDIO_HDMI3_PB,} cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 50 */;
	struct snd_interval *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 457 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 455 */;
	struct kbl_rt5663_private {
		struct snd_soc_jack kabylake_headset;
		struct list_head hdmi_pcm_list;
		struct clk *mclk;
		struct clk *sclk;
	} cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 43 */;
	struct snd_soc_dai_link *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 406 */;
	struct snd_soc_dpcm cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 405 */;
	struct snd_soc_dpcm *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 404 */;
	struct snd_mask *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 403 */;
	const struct snd_soc_ops cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 392 */;
	struct kbl_hdmi_pcm {
		struct list_head head;
		struct snd_soc_dai *codec_dai;
		int device;
	} cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 37 */;
	unsigned int cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 358 */[];
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 35 */[3];
	const struct snd_pcm_hw_constraint_list *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 34 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 338 */;
	int cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 338 */;
	struct snd_soc_card *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 33 */;
	struct snd_soc_dai *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 308 */;
	struct snd_soc_jack *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 262 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 244 */;
	struct snd_soc_codec_conf cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 230 */[];
	const struct snd_soc_dapm_route cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 204 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 194 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 189 */[];
	enum{KBL_DPCM_AUDIO_5663_PB=0, KBL_DPCM_AUDIO_5663_CP, KBL_DPCM_AUDIO_5663_HDMI1_PB, KBL_DPCM_AUDIO_5663_HDMI2_PB,} cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 182 */;
	struct platform_driver cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 1014 */;
	const struct platform_device_id cocci_id/* sound/soc/intel/boards/kbl_rt5663_max98927.c 1001 */[];
}
