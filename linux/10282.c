cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 930 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 923 */[];
	const struct component_ops cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 906 */;
	struct resource *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 815 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 813 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 812 */;
	void *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 810 */;
	struct device *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 809 */;
	int cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 809 */;
	const char cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 78 */[][24];
	struct inno_hdmi_i2c *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 776 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 773 */;
	const struct i2c_algorithm cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 768 */;
	enum{CSC_ITU601_16_235_TO_RGB_0_255_8BIT, CSC_ITU601_0_255_TO_RGB_0_255_8BIT, CSC_ITU709_16_235_TO_RGB_0_255_8BIT, CSC_RGB_0_255_TO_ITU601_16_235_8BIT, CSC_RGB_0_255_TO_ITU709_16_235_8BIT, CSC_RGB_0_255_TO_RGB_16_235_8BIT,} cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 69 */;
	u8 *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 682 */;
	struct i2c_msg *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 679 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 652 */;
	struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 598 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 589 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 583 */;
	uint32_t cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 578 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 569 */;
	struct edid *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 551 */;
	bool cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 540 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 539 */;
	struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 535 */;
	struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 527 */;
	struct rockchip_crtc_state *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 519 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 517 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 516 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 515 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 508 */;
	struct inno_hdmi {
		struct device *dev;
		struct drm_device *drm_dev;
		int irq;
		struct clk *pclk;
		void __iomem *regs;
		struct drm_connector connector;
		struct drm_encoder encoder;
		struct inno_hdmi_i2c *i2c;
		struct i2c_adapter *ddc;
		unsigned int tmds_rate;
		struct hdmi_data_info hdmi_data;
		struct drm_display_mode previous_mode;
	} cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 49 */;
	struct inno_hdmi_i2c {
		struct i2c_adapter adap;
		u8 ddc_addr;
		u8 segment_addr;
		struct mutex lock;
		struct completion cmp;
	} cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 39 */;
	struct hdmi_data_info *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 305 */;
	struct hdmi_data_info {
		int vic;
		bool sink_is_hdmi;
		bool sink_has_audio;
		unsigned int enc_in_format;
		unsigned int enc_out_format;
		unsigned int colorimetry;
	} cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 30 */;
	union hdmi_infoframe cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 286 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 284 */;
	struct inno_hdmi cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 28 */;
	ssize_t cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 251 */;
	u8 cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 250 */[HDMI_MAXIMUM_INFO_FRAME_SIZE];
	union hdmi_infoframe *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 241 */;
	u8 cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 161 */;
	u32 cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 159 */;
	u16 cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 158 */;
	struct inno_hdmi *cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 158 */;
	void cocci_id/* drivers/gpu/drm/rockchip/inno_hdmi.c 158 */;
}
