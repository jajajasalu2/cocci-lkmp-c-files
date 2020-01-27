cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/net/can/m_can/tcan4x5x.c 505 */;
	const struct spi_device_id cocci_id/* drivers/net/can/m_can/tcan4x5x.c 496 */[];
	const struct of_device_id cocci_id/* drivers/net/can/m_can/tcan4x5x.c 490 */[];
	struct m_can_classdev *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 404 */;
	struct tcan4x5x_priv *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 403 */;
	struct m_can_ops cocci_id/* drivers/net/can/m_can/tcan4x5x.c 392 */;
	const struct regmap_config cocci_id/* drivers/net/can/m_can/tcan4x5x.c 385 */;
	struct regulator *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 270 */;
	struct regmap_bus cocci_id/* drivers/net/can/m_can/tcan4x5x.c 224 */;
	u32 *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 221 */;
	struct regmap_async *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 207 */;
	void cocci_id/* drivers/net/can/m_can/tcan4x5x.c 207 */;
	const void *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 200 */;
	size_t cocci_id/* drivers/net/can/m_can/tcan4x5x.c 200 */;
	void *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 199 */;
	int cocci_id/* drivers/net/can/m_can/tcan4x5x.c 199 */;
	const u32 *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 194 */;
	u16 *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 182 */;
	struct spi_transfer cocci_id/* drivers/net/can/m_can/tcan4x5x.c 177 */[2];
	u32 cocci_id/* drivers/net/can/m_can/tcan4x5x.c 176 */;
	struct spi_message cocci_id/* drivers/net/can/m_can/tcan4x5x.c 175 */;
	struct spi_device *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 174 */;
	struct device *cocci_id/* drivers/net/can/m_can/tcan4x5x.c 173 */;
	struct can_bittiming_const cocci_id/* drivers/net/can/m_can/tcan4x5x.c 131 */;
	struct tcan4x5x_priv {
		struct regmap *regmap;
		struct spi_device *spi;
		struct m_can_classdev *mcan_dev;
		struct gpio_desc *reset_gpio;
		struct gpio_desc *device_wake_gpio;
		struct gpio_desc *device_state_gpio;
		struct regulator *power;
		int mram_start;
		int reg_offset;
	} cocci_id/* drivers/net/can/m_can/tcan4x5x.c 115 */;
}
