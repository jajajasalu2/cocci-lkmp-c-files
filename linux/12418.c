cocci_test_suite() {
	const struct omap_dss_device_ops cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 92 */;
	void (*cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 70 */)(void *cb_data,
										      enum drm_connector_status status);
	bool cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 62 */;
	void cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 51 */;
	struct panel_drv_data *cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 35 */;
	struct omap_dss_device *cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 32 */;
	int cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 32 */;
	struct panel_drv_data cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 30 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 203 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 196 */[];
	struct panel_drv_data {
		struct omap_dss_device dssdev;
		void (*hpd_cb)(void *cb_data,
			       enum drm_connector_status status);
		void *hpd_cb_data;
		struct mutex hpd_lock;
		struct gpio_desc *ct_cp_hpd_gpio;
		struct gpio_desc *ls_oe_gpio;
		struct gpio_desc *hpd_gpio;
	} cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 19 */;
	int __exit cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 184 */;
	struct gpio_desc *cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 125 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 120 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 106 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 100 */;
	void *cocci_id/* drivers/gpu/drm/omapdrm/displays/encoder-tpd12s015.c 100 */;
}
