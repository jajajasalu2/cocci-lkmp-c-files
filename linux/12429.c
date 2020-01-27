cocci_test_suite() {
	enum omap_dss_device_ops_flag cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 96 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 52 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 332 */;
	enum omap_display_type cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 303 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 295 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 286 */;
	struct drm_display_mode cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 266 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 244 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 243 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 242 */;
	int cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 202 */;
	struct omap_connector {
		struct drm_connector base;
		struct omap_dss_device *output;
		struct omap_dss_device *hpd;
		bool hdmi_mode;
	} cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 20 */;
	struct omap_connector cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 18 */;
	void *cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 172 */;
	struct omap_dss_device *cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 150 */;
	struct omap_connector *cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 145 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 143 */;
	void cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 143 */;
	bool cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 111 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/omapdrm/omap_connector.c 110 */;
}
