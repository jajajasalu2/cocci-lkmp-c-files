cocci_test_suite() {
	struct drm_crtc *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 999 */;
	struct psb_intel_sdvo_tv_format cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 901 */;
	uint8_t cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 827 */;
	struct psb_intel_sdvo_encode cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 812 */;
	const struct psb_intel_sdvo_dtd *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 778 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 729 */;
	struct psb_intel_sdvo_dtd *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 728 */;
	struct psb_intel_sdvo_preferred_input_timing_args cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 694 */;
	struct psb_intel_sdvo {
		struct gma_encoder base;
		struct i2c_adapter *i2c;
		u8 slave_addr;
		struct i2c_adapter ddc;
		int sdvo_reg;
		uint16_t controlled_output;
		struct psb_intel_sdvo_caps caps;
		int pixel_clock_min,pixel_clock_max;
		uint16_t attached_output;
		uint32_t color_range;
		bool is_tv;
		int tv_format_index;
		bool is_hdmi;
		bool has_hdmi_monitor;
		bool has_hdmi_audio;
		bool is_lvds;
		struct drm_display_mode *sdvo_lvds_fixed_mode;
		uint8_t ddc_bus;
		struct psb_intel_sdvo_dtd input_dtd;
		uint32_t saveSDVO;
	} cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 67 */;
	struct psb_intel_sdvo_pixel_clock_range cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 645 */;
	int *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 642 */;
	u16 cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 610 */;
	struct psb_intel_sdvo_get_trained_inputs_response cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 597 */;
	bool *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 595 */;
	struct psb_intel_sdvo_set_target_input_args cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 583 */;
	void *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 573 */;
	struct i2c_msg cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 439 */[MAX_ARG_LEN + 3];
	u8 cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 438 */[MAX_ARG_LEN * 2 + 2];
	const char *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 423 */[];
	u8 *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 409 */;
	const void *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 402 */;
	u8 cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 401 */;
	const struct _sdvo_cmd_name {
		u8 cmd;
		const char *name;
	} cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 281 */[];
	struct i2c_msg cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 256 */[];
	struct gma_encoder *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2517 */;
	const struct i2c_algorithm cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2495 */;
	u32 cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2489 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2489 */;
	struct i2c_msg *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2478 */;
	union {
		struct psb_intel_sdvo_enhancements_reply reply;
		uint16_t response;
	} cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2453 */;
	uint16_t cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2442 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2440 */;
	struct psb_intel_sdvo_enhancements_reply cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2438 */;
	unsigned char cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2242 */[2];
	bool cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 218 */(struct psb_intel_sdvo *psb_intel_sdvo,
								       struct psb_intel_sdvo_connector *psb_intel_sdvo_connector);
	bool cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 214 */(struct psb_intel_sdvo *psb_intel_sdvo,
								       struct psb_intel_sdvo_connector *psb_intel_sdvo_connector,
								       int type);
	struct psb_intel_sdvo_connector cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2134 */;
	struct gma_connector *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2131 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2129 */;
	int cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2127 */;
	bool cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2126 */;
	bool cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 212 */(struct psb_intel_sdvo *psb_intel_sdvo,
								       uint16_t flags);
	struct psb_intel_sdvo cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 204 */;
	struct psb_intel_sdvo_connector *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2037 */;
	void cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 2036 */;
	struct psb_intel_sdvo *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 201 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 201 */;
	struct sdvo_device_mapping *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1980 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1871 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1853 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1845 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1837 */;
	uint64_t cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1667 */;
	struct drm_property *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1666 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1588 */;
	uint32_t cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1553 */;
	struct psb_intel_sdvo_sdtv_resolution_request cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1552 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1489 */[];
	struct edid *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1421 */;
	struct psb_intel_sdvo_connector {
		struct gma_connector base;
		uint16_t output_flag;
		int force_audio;
		u8 tv_format_supported[ARRAY_SIZE(tv_format_names)];
		int format_supported_num;
		struct drm_property *tv_format;
		struct drm_property *left;
		struct drm_property *right;
		struct drm_property *top;
		struct drm_property *bottom;
		struct drm_property *hpos;
		struct drm_property *vpos;
		struct drm_property *contrast;
		struct drm_property *saturation;
		struct drm_property *hue;
		struct drm_property *sharpness;
		struct drm_property *flicker_filter;
		struct drm_property *flicker_filter_adaptive;
		struct drm_property *flicker_filter_2d;
		struct drm_property *tv_chroma_filter;
		struct drm_property *tv_luma_filter;
		struct drm_property *dot_crawl;
		struct drm_property *brightness;
		u32 left_margin,right_margin,top_margin,bottom_margin;
		u32 max_hscan,max_vscan;
		u32 max_hpos,cur_hpos;
		u32 max_vpos,cur_vpos;
		u32 cur_brightness,max_brightness;
		u32 cur_contrast,max_contrast;
		u32 cur_saturation,max_saturation;
		u32 cur_hue,max_hue;
		u32 cur_sharpness,max_sharpness;
		u32 cur_flicker_filter,max_flicker_filter;
		u32 cur_flicker_filter_adaptive,max_flicker_filter_adaptive;
		u32 cur_flicker_filter_2d,max_flicker_filter_2d;
		u32 cur_tv_chroma_filter,max_tv_chroma_filter;
		u32 cur_tv_luma_filter,max_tv_luma_filter;
		u32 cur_dot_crawl,max_dot_crawl;
	} cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 142 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1384 */;
	struct drm_psb_private *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1318 */;
	struct psb_intel_sdvo_caps *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1193 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1168 */;
	struct psb_intel_sdvo_dtd cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1004 */;
	struct psb_intel_sdvo_in_out_map cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1003 */;
	struct gma_crtc *cocci_id/* drivers/gpu/drm/gma500/psb_intel_sdvo.c 1000 */;
}
