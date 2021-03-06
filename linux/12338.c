cocci_test_suite() {
	struct snd_soc_dai_driver cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 999 */;
	const struct snd_soc_dai_ops cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 991 */;
	const struct snd_soc_component_driver cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 978 */;
	const struct snd_soc_dapm_route cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 974 */[];
	const struct snd_soc_dapm_widget cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 970 */[];
	const struct snd_kcontrol_new cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 959 */[];
	struct snd_ctl_elem_value *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 948 */;
	struct snd_kcontrol *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 947 */;
	struct snd_ctl_elem_info *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 936 */;
	struct snd_soc_component *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 928 */;
	struct device *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 825 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 824 */;
	struct snd_pcm_hw_params *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 819 */;
	struct snd_pcm_substream *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 818 */;
	struct snd_soc_card *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 748 */;
	struct vc4_hdmi *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 746 */;
	struct snd_soc_dai *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 746 */;
	u64 cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 726 */;
	struct vc4_hdmi {
		struct platform_device *pdev;
		struct drm_encoder *encoder;
		struct drm_connector *connector;
		struct vc4_hdmi_audio audio;
		struct i2c_adapter *ddc;
		void __iomem *hdmicore_regs;
		void __iomem *hd_regs;
		int hpd_gpio;
		bool hpd_active_low;
		struct cec_adapter *cec_adap;
		struct cec_msg cec_rx_msg;
		bool cec_tx_ok;
		bool cec_irq_was_rx;
		struct clk *pixel_clock;
		struct clk *hsm_clock;
		struct debugfs_regset32 hdmi_regset;
		struct debugfs_regset32 hd_regset;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 71 */;
	unsigned long cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 703 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 691 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 679 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 677 */;
	struct vc4_hdmi_audio {
		struct snd_soc_card card;
		struct snd_soc_dai_link link;
		struct snd_soc_dai_link_component cpu;
		struct snd_soc_dai_link_component codec;
		struct snd_soc_dai_link_component platform;
		int samplerate;
		int channels;
		struct snd_dmaengine_dai_dma_data dma_data;
		struct snd_pcm_substream *substream;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 58 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 468 */;
	union hdmi_infoframe cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 427 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 383 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 382 */;
	ssize_t cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 337 */;
	uint8_t cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 336 */[VC4_HDMI_PACKET_STRIDE];
	union hdmi_infoframe *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 330 */;
	enum hdmi_infoframe_type cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 316 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 311 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 265 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 256 */;
	struct edid *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 234 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 196 */;
	struct drm_printer cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 188 */;
	struct drm_info_node *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 184 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 182 */;
	const struct debugfs_reg32 cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 171 */[];
	struct platform_driver cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1502 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1497 */[];
	const struct component_ops cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1481 */;
	enum of_gpio_flags cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1369 */;
	struct device_node *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1293 */;
	struct vc4_hdmi_connector cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 129 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1288 */;
	struct cec_connector_info cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1286 */;
	const struct cec_adap_ops cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1276 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 127 */;
	struct vc4_hdmi_connector *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 126 */;
	u8 cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1241 */;
	const u32 cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1202 */;
	bool cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1198 */;
	struct cec_adapter *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1198 */;
	u32 cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1174 */;
	struct vc4_dev *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1172 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1170 */;
	void *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1170 */;
	int cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1170 */;
	struct vc4_hdmi_connector {
		struct drm_connector base;
		struct drm_encoder *encoder;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 116 */;
	unsigned int cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1156 */;
	struct cec_msg *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1155 */;
	void cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1153 */;
	struct vc4_hdmi_encoder cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 112 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 110 */;
	struct vc4_hdmi_encoder *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 109 */;
	const __be32 *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1052 */;
	struct snd_soc_dai_link *cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1049 */;
	const struct snd_dmaengine_pcm_config cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 1042 */;
	struct vc4_hdmi_encoder {
		struct vc4_encoder base;
		bool hdmi_monitor;
		bool limited_rgb_range;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_hdmi.c 103 */;
}
