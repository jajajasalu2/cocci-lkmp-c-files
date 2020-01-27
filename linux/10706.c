cocci_test_suite() {
	const struct intel_dvo_dev_ops cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 702 */;
	struct ns2501_priv *cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 694 */;
	struct intel_dvo_device *cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 692 */;
	void cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 692 */;
	bool cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 656 */;
	unsigned char cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 647 */;
	int cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 555 */;
	const struct ns2501_configuration *cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 553 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 550 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 528 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 527 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 515 */;
	struct ns2501_priv cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 479 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 473 */;
	struct i2c_msg cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 444 */;
	u8 cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 438 */;
	struct i2c_msg cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 400 */[];
	u8 cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 397 */[2];
	u8 *cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 393 */;
	struct ns2501_priv {
		bool quiet;
		const struct ns2501_configuration *conf;
	} cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 380 */;
	const struct ns2501_reg cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 299 */[];
	const struct ns2501_configuration cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 231 */[];
	struct ns2501_configuration {
		u8 sync;
		u8 conf;
		u8 syncb;
		u8 dither;
		u8 pll_a;
		u16 pll_b;
		u16 hstart;
		u16 hstop;
		u16 vstart;
		u16 vstop;
		u16 vsync;
		u16 vtotal;
		u16 hpos;
		u16 vpos;
		u16 voffs;
		u16 hscale;
		u16 vscale;
	} cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 205 */;
	struct ns2501_reg {
		u8 offset;
		u8 value;
	} cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 194 */;
	enum{MODE_640x480, MODE_800x600, MODE_1024x768,} cocci_id/* drivers/gpu/drm/i915/display/dvo_ns2501.c 188 */;
}
