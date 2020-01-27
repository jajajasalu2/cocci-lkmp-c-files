cocci_test_suite() {
	struct kbl_codec_private *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 96 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 95 */;
	struct snd_kcontrol *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 93 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 92 */;
	int cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 92 */;
	struct snd_soc_jack_gpio cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 80 */;
	struct snd_soc_jack_pin cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 70 */;
	const struct acpi_gpio_mapping cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 63 */[];
	const struct acpi_gpio_params cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 59 */;
	struct platform_driver cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 539 */;
	const struct platform_device_id cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 530 */[];
	struct platform_device *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 512 */;
	struct snd_soc_card cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 497 */;
	char cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 468 */[NAME_SIZE];
	struct snd_soc_component *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 466 */;
	struct kbl_hdmi_pcm *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 465 */;
	enum{KBL_DPCM_AUDIO_PB=0, KBL_DPCM_AUDIO_CP, KBL_DPCM_AUDIO_HDMI1_PB, KBL_DPCM_AUDIO_HDMI2_PB, KBL_DPCM_AUDIO_HDMI3_PB,} cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 46 */;
	struct kbl_codec_private {
		struct gpio_desc *gpio_lo_mute;
		struct list_head hdmi_pcm_list;
	} cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 41 */;
	struct snd_soc_dai_link cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 359 */[];
	struct kbl_hdmi_pcm {
		struct list_head head;
		struct snd_soc_dai *codec_dai;
		int device;
	} cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 35 */;
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 32 */;
	const struct snd_soc_ops cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 316 */;
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 31 */[3];
	struct snd_soc_card *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 30 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 294 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 286 */;
	const unsigned int cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 282 */[];
	struct snd_soc_ops cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 268 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 244 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 243 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 228 */;
	struct snd_soc_dai *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 213 */;
	struct snd_mask *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 143 */;
	struct snd_interval *cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 139 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 114 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 109 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/intel/boards/kbl_rt5660.c 104 */[];
}
