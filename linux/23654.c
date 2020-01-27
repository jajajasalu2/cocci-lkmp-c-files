cocci_test_suite() {
	const struct snd_soc_component_driver cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 995 */;
	unsigned int cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 948 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 946 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 944 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 943 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 841 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 637 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 456 */[];
	struct snd_soc_dapm_update *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 437 */;
	struct snd_soc_component *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 416 */;
	struct soc_mixer_control *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 413 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 411 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 409 */;
	struct snd_kcontrol *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 408 */;
	void cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 387 */;
	int cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 368 */;
	struct session_data *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 367 */;
	struct msm_routing_data *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 367 */;
	struct q6copp *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 313 */;
	struct route_payload cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 312 */;
	struct msm_routing_data {
		struct session_data sessions[MAX_SESSIONS];
		struct session_data port_data[AFE_MAX_PORTS];
		struct device *dev;
		struct mutex lock;
	} cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 289 */;
	struct session_data {
		int state;
		int port_id;
		int path_type;
		int app_type;
		int acdb_id;
		int sample_rate;
		int bits_per_sample;
		int channels;
		int perf_mode;
		int numcopps;
		int fedai_id;
		unsigned long copp_map;
		struct q6copp *copps[MAX_COPPS_PER_PORT];
	} cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 273 */;
	struct platform_driver cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 1036 */;
	const struct of_device_id cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 1030 */[];
	struct device *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 1007 */;
	struct platform_device *cocci_id/* sound/soc/qcom/qdsp6/q6routing.c 1005 */;
}
