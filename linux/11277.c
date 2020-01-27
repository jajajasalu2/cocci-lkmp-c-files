cocci_test_suite() {
	struct cdv_intel_dp_m_n cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 995 */;
	struct drm_mode_config *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 991 */;
	struct cdv_intel_dp_m_n *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 974 */;
	uint32_t *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 954 */;
	struct cdv_intel_dp_m_n {
		uint32_t tu;
		uint32_t gmch_m;
		uint32_t gmch_n;
		uint32_t link_m;
		uint32_t link_n;
	} cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 945 */;
	int cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 904 */[2];
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 895 */;
	const char *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 848 */;
	struct gma_connector *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 847 */;
	u16 cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 80 */;
	unsigned cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 761 */;
	uint8_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 760 */[2];
	uint8_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 759 */[5];
	struct cdv_intel_dp cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 755 */;
	struct i2c_algo_dp_aux_data *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 753 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 750 */;
	uint8_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 717 */[20];
	uint8_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 715 */[4];
	uint16_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 713 */;
	uint32_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 574 */;
	uint8_t *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 570 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 509 */;
	struct i2c_algo_dp_aux_data {
		bool running;
		u16 address;
		int (*aux_ch)(struct i2c_adapter *adapter, int mode,
			      uint8_t write_byte, uint8_t *read_byte);
	} cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 49 */;
	void cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 320 */(struct gma_encoder *encoder);
	uint32_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 300 */[];
	struct ddi_regoff cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 291 */[];
	struct ddi_regoff {
		uint32_t PreEmph1;
		uint32_t PreEmph2;
		uint32_t VSwing1;
		uint32_t VSwing2;
		uint32_t VSwing3;
		uint32_t VSwing4;
		uint32_t VSwing5;
	} cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 281 */;
	struct cdv_intel_dp {
		uint32_t output_reg;
		uint32_t DP;
		uint8_t link_configuration[DP_LINK_CONFIGURATION_SIZE];
		bool has_audio;
		int force_audio;
		uint32_t color_range;
		uint8_t link_bw;
		uint8_t lane_count;
		uint8_t dpcd[4];
		struct gma_encoder *encoder;
		struct i2c_adapter adapter;
		struct i2c_algo_dp_aux_data algo;
		uint8_t train_set[4];
		uint8_t link_status[DP_LINK_STATUS_SIZE];
		int panel_power_up_delay;
		int panel_power_down_delay;
		int panel_power_cycle_delay;
		int backlight_on_delay;
		int backlight_off_delay;
		struct drm_display_mode *panel_fixed_mode;
		bool panel_on;
	} cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 257 */;
	unsigned long cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 237 */;
	struct edp_power_seq cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 2066 */;
	struct gma_connector cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 2008 */;
	struct gma_encoder cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 2005 */;
	struct psb_intel_mode_device *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1995 */;
	const struct i2c_algorithm cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 199 */;
	u32 cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1979 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1977 */;
	void cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1977 */;
	struct child_device_config *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1956 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1946 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1941 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1935 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1927 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1919 */;
	uint64_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1844 */;
	struct drm_property *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1843 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1786 */;
	struct drm_psb_private *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1781 */;
	struct edid *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1734 */;
	struct cdv_intel_dp *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1705 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1703 */;
	struct gma_encoder *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1703 */;
	struct i2c_msg *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 152 */;
	struct ddi_regoff *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1437 */;
	u8 *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 138 */;
	int cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1370 */;
	uint8_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1368 */;
	bool cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1364 */;
	uint8_t cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1347 */[DP_LINK_STATUS_SIZE];
	u8 cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 121 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1156 */;
	struct gma_crtc *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1044 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/gma500/cdv_intel_dp.c 1043 */;
}
