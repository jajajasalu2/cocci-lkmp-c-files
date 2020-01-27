cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/gpu/drm/bridge/sii9234.c 959 */;
	const struct i2c_device_id cocci_id/* drivers/gpu/drm/bridge/sii9234.c 953 */[];
	const struct of_device_id cocci_id/* drivers/gpu/drm/bridge/sii9234.c 947 */[];
	struct device *cocci_id/* drivers/gpu/drm/bridge/sii9234.c 892 */;
	const struct i2c_device_id *cocci_id/* drivers/gpu/drm/bridge/sii9234.c 888 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/bridge/sii9234.c 883 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/bridge/sii9234.c 875 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/bridge/sii9234.c 874 */;
	struct sii9234 cocci_id/* drivers/gpu/drm/bridge/sii9234.c 871 */;
	struct sii9234 *cocci_id/* drivers/gpu/drm/bridge/sii9234.c 869 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/bridge/sii9234.c 869 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/bridge/sii9234.c 819 */;
	struct i2c_client *cocci_id/* drivers/gpu/drm/bridge/sii9234.c 817 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/bridge/sii9234.c 751 */;
	void *cocci_id/* drivers/gpu/drm/bridge/sii9234.c 751 */;
	enum sii9234_state cocci_id/* drivers/gpu/drm/bridge/sii9234.c 688 */;
	int cocci_id/* drivers/gpu/drm/bridge/sii9234.c 590 */;
	void cocci_id/* drivers/gpu/drm/bridge/sii9234.c 389 */;
	u8 cocci_id/* drivers/gpu/drm/bridge/sii9234.c 309 */;
	bool cocci_id/* drivers/gpu/drm/bridge/sii9234.c 309 */;
	const char *const cocci_id/* drivers/gpu/drm/bridge/sii9234.c 187 */[];
	enum sii9234_client_id{I2C_MHL, I2C_TPI, I2C_HDMI, I2C_CBUS,} cocci_id/* drivers/gpu/drm/bridge/sii9234.c 180 */;
	struct sii9234 {
		struct i2c_client *client[4];
		struct drm_bridge bridge;
		struct device *dev;
		struct gpio_desc *gpio_reset;
		int i2c_error;
		struct regulator_bulk_data supplies[4];
		struct mutex lock;
		enum sii9234_state state;
	} cocci_id/* drivers/gpu/drm/bridge/sii9234.c 168 */;
	enum sii9234_state{ST_OFF, ST_D3, ST_RGND_INIT, ST_RGND_1K, ST_RSEN_HIGH, ST_MHL_ESTABLISHED, ST_FAILURE_DISCOVERY, ST_FAILURE,} cocci_id/* drivers/gpu/drm/bridge/sii9234.c 157 */;
}
