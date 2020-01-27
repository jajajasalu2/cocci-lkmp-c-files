cocci_test_suite() {
	bool cocci_id/* sound/soc/soc-dapm.c 864 */;
	struct snd_card *cocci_id/* sound/soc/soc-dapm.c 859 */;
	struct snd_kcontrol **cocci_id/* sound/soc/soc-dapm.c 829 */;
	const char *cocci_id/* sound/soc/soc-dapm.c 811 */;
	struct snd_soc_dapm_path *cocci_id/* sound/soc/soc-dapm.c 811 */;
	unsigned int cocci_id/* sound/soc/soc-dapm.c 740 */;
	struct soc_enum *cocci_id/* sound/soc/soc-dapm.c 739 */;
	const struct snd_kcontrol_new *cocci_id/* sound/soc/soc-dapm.c 738 */;
	const int cocci_id/* sound/soc/soc-dapm.c 641 */;
	struct snd_soc_dapm_wcache *cocci_id/* sound/soc/soc-dapm.c 637 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/soc-dapm.c 57 */(struct snd_soc_dapm_context *dapm,
									  const struct snd_soc_dapm_widget *widget);
	struct list_head *cocci_id/* sound/soc/soc-dapm.c 521 */;
	int cocci_id/* sound/soc/soc-dapm.c 51 */(struct snd_soc_dapm_context *dapm,
						  struct snd_soc_dapm_widget *wsource,
						  struct snd_soc_dapm_widget *wsink,
						  const char *control,
						  int (*connected)(struct snd_soc_dapm_widget *source, struct snd_soc_dapm_widget *sink));
	struct dapm_kcontrol_data *cocci_id/* sound/soc/soc-dapm.c 506 */;
	const struct snd_kcontrol *cocci_id/* sound/soc/soc-dapm.c 503 */;
	struct snd_soc_dapm_widget_list *cocci_id/* sound/soc/soc-dapm.c 481 */;
	struct snd_pcm_str *cocci_id/* sound/soc/soc-dapm.c 4285 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/soc-dapm.c 4284 */;
	struct snd_soc_dai *cocci_id/* sound/soc/soc-dapm.c 4280 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/soc-dapm.c 4278 */;
	struct snd_soc_card *cocci_id/* sound/soc/soc-dapm.c 4277 */;
	struct snd_kcontrol_new cocci_id/* sound/soc/soc-dapm.c 4089 */;
	struct soc_enum cocci_id/* sound/soc/soc-dapm.c 4080 */;
	struct snd_kcontrol_new cocci_id/* sound/soc/soc-dapm.c 4045 */[];
	struct soc_enum cocci_id/* sound/soc/soc-dapm.c 4042 */[];
	unsigned long *cocci_id/* sound/soc/soc-dapm.c 4040 */;
	const char **cocci_id/* sound/soc/soc-dapm.c 4039 */;
	struct snd_kcontrol_new *cocci_id/* sound/soc/soc-dapm.c 4035 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/soc-dapm.c 3986 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/soc-dapm.c 3786 */;
	const struct snd_soc_pcm_stream *cocci_id/* sound/soc/soc-dapm.c 3785 */;
	struct snd_soc_dapm_widget cocci_id/* sound/soc/soc-dapm.c 377 */;
	struct soc_mixer_control *cocci_id/* sound/soc/soc-dapm.c 354 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/soc-dapm.c 3517 */;
	struct snd_soc_dapm_update cocci_id/* sound/soc/soc-dapm.c 3462 */;
	unsigned int *cocci_id/* sound/soc/soc-dapm.c 3459 */;
	struct dapm_kcontrol_data {
		unsigned int value;
		struct snd_soc_dapm_widget *widget;
		struct list_head paths;
		struct snd_soc_dapm_widget_list *wlist;
	} cocci_id/* sound/soc/soc-dapm.c 343 */;
	const struct snd_soc_dapm_widget *cocci_id/* sound/soc/soc-dapm.c 321 */;
	char cocci_id/* sound/soc/soc-dapm.c 2881 */[80];
	const struct snd_soc_dapm_route *cocci_id/* sound/soc/soc-dapm.c 2875 */;
	struct snd_soc_dapm_path cocci_id/* sound/soc/soc-dapm.c 2808 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/soc-dapm.c 2778 */[2];
	int (*cocci_id/* sound/soc/soc-dapm.c 2775 */)(struct snd_soc_dapm_widget *source,
						       struct snd_soc_dapm_widget *sink);
	struct snd_pcm_hw_params *cocci_id/* sound/soc/soc-dapm.c 2618 */;
	struct attribute *cocci_id/* sound/soc/soc-dapm.c 2447 */[];
	struct snd_soc_component *cocci_id/* sound/soc/soc-dapm.c 2435 */;
	struct device_attribute *cocci_id/* sound/soc/soc-dapm.c 2426 */;
	struct device *cocci_id/* sound/soc/soc-dapm.c 2425 */;
	struct dentry *cocci_id/* sound/soc/soc-dapm.c 2185 */;
	const struct file_operations cocci_id/* sound/soc/soc-dapm.c 2178 */;
	char *cocci_id/* sound/soc/soc-dapm.c 2153 */;
	loff_t *cocci_id/* sound/soc/soc-dapm.c 2150 */;
	size_t cocci_id/* sound/soc/soc-dapm.c 2150 */;
	struct file *cocci_id/* sound/soc/soc-dapm.c 2149 */;
	char __user *cocci_id/* sound/soc/soc-dapm.c 2149 */;
	ssize_t cocci_id/* sound/soc/soc-dapm.c 2149 */;
	enum snd_soc_bias_level cocci_id/* sound/soc/soc-dapm.c 1939 */;
	async_cookie_t cocci_id/* sound/soc/soc-dapm.c 1803 */;
	void *cocci_id/* sound/soc/soc-dapm.c 1803 */;
	struct snd_soc_dapm_update *cocci_id/* sound/soc/soc-dapm.c 1716 */;
	va_list cocci_id/* sound/soc/soc-dapm.c 163 */;
	u32 cocci_id/* sound/soc/soc-dapm.c 161 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/soc-dapm.c 148 */;
	void cocci_id/* sound/soc/soc-dapm.c 148 */;
	unsigned long cocci_id/* sound/soc/soc-dapm.c 1479 */;
	int *cocci_id/* sound/soc/soc-dapm.c 1455 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/soc-dapm.c 1446 */;
	int cocci_id/* sound/soc/soc-dapm.c 1446 */;
	struct snd_kcontrol *cocci_id/* sound/soc/soc-dapm.c 1376 */;
	struct pinctrl_state *cocci_id/* sound/soc/soc-dapm.c 1355 */;
	struct pinctrl *cocci_id/* sound/soc/soc-dapm.c 1354 */;
	struct snd_soc_dapm_pinctrl_priv *cocci_id/* sound/soc/soc-dapm.c 1353 */;
	bool (*cocci_id/* sound/soc/soc-dapm.c 1249 */)(struct snd_soc_dapm_widget *i,
							enum snd_soc_dapm_direction);
	bool (*cocci_id/* sound/soc/soc-dapm.c 1171 */)(struct snd_soc_dapm_widget *,
							enum snd_soc_dapm_direction);
	int (*cocci_id/* sound/soc/soc-dapm.c 1168 */)(struct snd_soc_dapm_widget *,
						       struct list_head *,
						       bool (*custom_stop_condition)(struct snd_soc_dapm_widget *, enum snd_soc_dapm_direction));
	struct snd_soc_dapm_widget_list **cocci_id/* sound/soc/soc-dapm.c 1108 */;
	int cocci_id/* sound/soc/soc-dapm.c 107 */[];
	enum snd_soc_dapm_direction cocci_id/* sound/soc/soc-dapm.c 1001 */;
}
