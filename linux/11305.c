cocci_test_suite() {
	struct resource *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 856 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 855 */;
	struct dw_hdmi_plat_data *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 854 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 852 */;
	const struct meson_dw_hdmi_data *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 850 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 849 */;
	struct device *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 846 */;
	struct device_node *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 785 */;
	const struct meson_dw_hdmi_data cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 776 */;
	const struct regmap_config cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 760 */;
	unsigned int *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 740 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 729 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 677 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 676 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 671 */;
	struct meson_drm *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 615 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 613 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 612 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 611 */;
	bool cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 597 */;
	u32 cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 569 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 566 */;
	const struct dw_hdmi_phy_ops cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 559 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 531 */;
	void *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 521 */;
	struct dw_hdmi *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 520 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 410 */;
	void cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 254 */;
	unsigned long cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 230 */;
	struct meson_dw_hdmi *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 227 */;
	unsigned int cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 227 */;
	const char *cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 156 */;
	int cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 155 */;
	struct meson_dw_hdmi {
		struct drm_encoder encoder;
		struct dw_hdmi_plat_data dw_plat_data;
		struct meson_drm *priv;
		struct device *dev;
		void __iomem *hdmitx;
		const struct meson_dw_hdmi_data *data;
		struct reset_control *hdmitx_apb;
		struct reset_control *hdmitx_ctrl;
		struct reset_control *hdmitx_phy;
		struct clk *hdmi_pclk;
		struct clk *venci_clk;
		struct regulator *hdmi_supply;
		u32 irq_stat;
		struct dw_hdmi *hdmi;
	} cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 136 */;
	struct meson_dw_hdmi_data {
		unsigned int (*top_read)(struct meson_dw_hdmi *dw_hdmi,
					 unsigned int addr);
		void (*top_write)(struct meson_dw_hdmi *dw_hdmi,
				  unsigned int addr, unsigned int data);
		unsigned int (*dwc_read)(struct meson_dw_hdmi *dw_hdmi,
					 unsigned int addr);
		void (*dwc_write)(struct meson_dw_hdmi *dw_hdmi,
				  unsigned int addr, unsigned int data);
	} cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 125 */;
	struct meson_dw_hdmi cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 123 */;
	enum meson_venc_source{MESON_VENC_SOURCE_NONE=0, MESON_VENC_SOURCE_ENCI=1, MESON_VENC_SOURCE_ENCP=2,} cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 117 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 1068 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 1055 */[];
	const struct dev_pm_ops cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 1050 */;
	int __maybe_unused cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 1024 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/meson/meson_dw_hdmi.c 1005 */;
}
