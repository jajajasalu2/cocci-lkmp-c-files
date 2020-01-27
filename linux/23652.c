cocci_test_suite() {
	struct q6afe_slim_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 81 */;
	struct q6afe_dai_data {
		struct q6afe_port *port[AFE_PORT_MAX];
		struct q6afe_port_config port_config[AFE_PORT_MAX];
		bool is_port_started[AFE_PORT_MAX];
		struct q6afe_dai_priv_data priv[AFE_PORT_MAX];
	} cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 68 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 622 */[];
	struct q6afe_port *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 600 */;
	struct q6afe_dai_data *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 599 */;
	struct snd_soc_dai *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 597 */;
	int cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 597 */;
	struct q6afe_dai_priv_data {
		uint32_t sd_line_mask;
		uint32_t sync_mode;
		uint32_t sync_src;
		uint32_t data_out_enable;
		uint32_t invert_sync;
		uint32_t data_delay;
		uint32_t data_align;
	} cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 58 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 567 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 447 */[];
	unsigned int cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 417 */;
	struct q6afe_port_config *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 384 */;
	unsigned int *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 380 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 327 */;
	struct q6afe_tdm_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 299 */;
	struct q6afe_i2s_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 159 */;
	struct platform_driver cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1453 */;
	const struct of_device_id cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1447 */[];
	struct platform_device *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1430 */;
	struct q6afe_dai_priv_data *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1357 */;
	unsigned int cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1356 */[Q6AFE_MAX_MI2S_LINES];
	struct device_node *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1352 */;
	struct device *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1349 */;
	void cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1349 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1339 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1136 */[];
	const char **cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1119 */;
	struct of_phandle_args *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1118 */;
	struct snd_soc_component *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 1117 */;
	struct q6afe_hdmi_cfg *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 111 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/qcom/qdsp6/q6afe-dai.c 106 */;
}
