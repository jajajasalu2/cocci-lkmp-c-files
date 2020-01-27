cocci_test_suite() {
	enum drm_connector_status cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 86 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 80 */;
	void *cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 80 */;
	const struct omap_dss_device_ops cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 71 */;
	void (*cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 49 */)(void *cb_data,
										   enum drm_connector_status status);
	struct panel_drv_data *cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 43 */;
	bool cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 41 */;
	void cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 36 */;
	struct omap_dss_device *cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 30 */;
	int cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 30 */;
	struct panel_drv_data cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 28 */;
	struct panel_drv_data {
		struct omap_dss_device dssdev;
		void (*hpd_cb)(void *cb_data,
			       enum drm_connector_status status);
		void *hpd_cb_data;
		struct mutex hpd_lock;
		struct device *dev;
		struct gpio_desc *hpd_gpio;
	} cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 17 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 169 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 162 */[];
	int __exit cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 153 */;
	struct gpio_desc *cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 104 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/omapdrm/displays/connector-hdmi.c 100 */;
}
