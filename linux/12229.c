cocci_test_suite() {
	struct edid *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 82 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/zte/zx_vga.c 75 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/zte/zx_vga.c 70 */;
	struct zx_vga_pwrctrl *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 62 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 59 */;
	void cocci_id/* drivers/gpu/drm/zte/zx_vga.c 59 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/zte/zx_vga.c 522 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/zte/zx_vga.c 516 */[];
	const struct component_ops cocci_id/* drivers/gpu/drm/zte/zx_vga.c 500 */;
	struct zx_vga cocci_id/* drivers/gpu/drm/zte/zx_vga.c 45 */;
	struct zx_vga *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 428 */;
	struct resource *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 427 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 426 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 425 */;
	struct device *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 423 */;
	void *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 423 */;
	int cocci_id/* drivers/gpu/drm/zte/zx_vga.c 423 */;
	unsigned long cocci_id/* drivers/gpu/drm/zte/zx_vga.c 401 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/zte/zx_vga.c 362 */;
	struct zx_vga {
		struct drm_connector connector;
		struct drm_encoder encoder;
		struct zx_vga_i2c *ddc;
		struct device *dev;
		void __iomem *mmio;
		struct clk *i2c_wclk;
		struct zx_vga_pwrctrl pwrctrl;
		struct completion complete;
		bool connected;
	} cocci_id/* drivers/gpu/drm/zte/zx_vga.c 33 */;
	struct zx_vga_i2c *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 325 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 324 */;
	const struct i2c_algorithm cocci_id/* drivers/gpu/drm/zte/zx_vga.c 316 */;
	u32 cocci_id/* drivers/gpu/drm/zte/zx_vga.c 311 */;
	struct zx_vga_i2c {
		struct i2c_adapter adap;
		struct mutex lock;
	} cocci_id/* drivers/gpu/drm/zte/zx_vga.c 28 */;
	u8 *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 223 */;
	struct i2c_msg *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 220 */;
	struct zx_vga_pwrctrl {
		struct regmap *regmap;
		u32 reg;
		u32 mask;
	} cocci_id/* drivers/gpu/drm/zte/zx_vga.c 22 */;
	struct regmap *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 197 */;
	struct of_phandle_args cocci_id/* drivers/gpu/drm/zte/zx_vga.c 196 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/zte/zx_vga.c 139 */;
	bool cocci_id/* drivers/gpu/drm/zte/zx_vga.c 131 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 131 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/zte/zx_vga.c 130 */;
	struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/zte/zx_vga.c 125 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/zte/zx_vga.c 120 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/zte/zx_vga.c 118 */;
}
