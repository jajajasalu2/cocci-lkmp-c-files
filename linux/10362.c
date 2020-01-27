cocci_test_suite() {
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 91 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 87 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 81 */;
	struct tfp410_encoder cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 50 */;
	struct tfp410_encoder {
		struct drm_encoder base;
		struct tfp410_module *mod;
		int dpms;
	} cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 45 */;
	void __exit cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 376 */;
	int __init cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 371 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 361 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 356 */[];
	const struct tilcdc_panel_info cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 29 */;
	uint32_t cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 279 */;
	struct pinctrl *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 278 */;
	struct device_node *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 274 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 272 */;
	const struct tilcdc_module_ops cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 264 */;
	struct tfp410_module cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 26 */;
	struct tilcdc_drm_private *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 245 */;
	struct tilcdc_module *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 242 */;
	struct tfp410_module {
		struct tilcdc_module base;
		struct i2c_adapter *i2c;
		int gpio;
	} cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 21 */;
	int cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 205 */;
	struct tfp410_module *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 201 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 200 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 195 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 186 */;
	struct tfp410_connector *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 182 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 180 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 179 */;
	struct edid *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 164 */;
	bool cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 151 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 149 */;
	void cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 143 */;
	struct tfp410_connector cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 140 */;
	struct tfp410_connector {
		struct drm_connector base;
		struct drm_encoder *encoder;
		struct tfp410_module *mod;
	} cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 134 */;
	struct tfp410_encoder *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_tfp410.c 101 */;
}
