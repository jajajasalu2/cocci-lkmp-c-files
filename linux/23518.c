cocci_test_suite() {
	const struct snd_soc_dapm_route cocci_id/* sound/soc/intel/boards/skl_rt286.c 76 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/intel/boards/skl_rt286.c 65 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/intel/boards/skl_rt286.c 59 */[];
	struct platform_driver cocci_id/* sound/soc/intel/boards/skl_rt286.c 552 */;
	const struct platform_device_id cocci_id/* sound/soc/intel/boards/skl_rt286.c 546 */[];
	struct skl_rt286_private *cocci_id/* sound/soc/intel/boards/skl_rt286.c 532 */;
	struct platform_device *cocci_id/* sound/soc/intel/boards/skl_rt286.c 530 */;
	struct snd_soc_card cocci_id/* sound/soc/intel/boards/skl_rt286.c 515 */;
	char cocci_id/* sound/soc/intel/boards/skl_rt286.c 487 */[NAME_SIZE];
	struct snd_soc_component *cocci_id/* sound/soc/intel/boards/skl_rt286.c 485 */;
	struct skl_hdmi_pcm *cocci_id/* sound/soc/intel/boards/skl_rt286.c 484 */;
	struct snd_soc_card *cocci_id/* sound/soc/intel/boards/skl_rt286.c 481 */;
	struct snd_soc_jack_pin cocci_id/* sound/soc/intel/boards/skl_rt286.c 48 */[];
	enum{SKL_DPCM_AUDIO_PB=0, SKL_DPCM_AUDIO_DB_PB, SKL_DPCM_AUDIO_CP, SKL_DPCM_AUDIO_REF_CP, SKL_DPCM_AUDIO_DMIC_CP, SKL_DPCM_AUDIO_HDMI1_PB, SKL_DPCM_AUDIO_HDMI2_PB, SKL_DPCM_AUDIO_HDMI3_PB,} cocci_id/* sound/soc/intel/boards/skl_rt286.c 36 */;
	struct snd_soc_dai_link cocci_id/* sound/soc/intel/boards/skl_rt286.c 339 */[];
	struct skl_rt286_private {
		struct list_head hdmi_pcm_list;
	} cocci_id/* sound/soc/intel/boards/skl_rt286.c 32 */;
	const struct snd_soc_ops cocci_id/* sound/soc/intel/boards/skl_rt286.c 282 */;
	struct skl_hdmi_pcm {
		struct list_head head;
		struct snd_soc_dai *codec_dai;
		int device;
	} cocci_id/* sound/soc/intel/boards/skl_rt286.c 26 */;
	struct snd_interval *cocci_id/* sound/soc/intel/boards/skl_rt286.c 250 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/intel/boards/skl_rt286.c 248 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/intel/boards/skl_rt286.c 247 */;
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/skl_rt286.c 24 */[3];
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/skl_rt286.c 23 */;
	struct snd_mask *cocci_id/* sound/soc/intel/boards/skl_rt286.c 216 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/intel/boards/skl_rt286.c 183 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/intel/boards/skl_rt286.c 181 */;
	int cocci_id/* sound/soc/intel/boards/skl_rt286.c 181 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/intel/boards/skl_rt286.c 175 */;
	const unsigned int cocci_id/* sound/soc/intel/boards/skl_rt286.c 171 */[];
	struct snd_soc_dai *cocci_id/* sound/soc/intel/boards/skl_rt286.c 146 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/intel/boards/skl_rt286.c 114 */;
}
