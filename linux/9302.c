cocci_test_suite() {
	struct wl12xx_spi_glue {
		struct device *dev;
		struct platform_device *core;
		struct regulator *reg;
	} cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 84 */;
	const struct wilink_family_data cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 68 */;
	struct spi_driver cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 562 */;
	struct resource cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 468 */[1];
	struct wlcore_platdev_data *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 467 */;
	struct spi_device *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 464 */;
	const struct of_device_id *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 442 */;
	struct device_node *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 441 */;
	const struct of_device_id cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 415 */[];
	struct wl1271_if_operations cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 406 */;
	unsigned int cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 402 */;
	u32 cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 306 */;
	u32 *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 305 */;
	u32 cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 304 */[WSPI_MAX_NUM_OF_CHUNKS];
	struct spi_message cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 303 */;
	struct spi_transfer *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 302 */;
	struct wl12xx_spi_glue *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 301 */;
	bool cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 299 */;
	void *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 299 */;
	size_t cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 299 */;
	struct device *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 298 */;
	int cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 298 */;
	struct spi_transfer cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 236 */[2];
	struct wl1271 *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 235 */;
	int __must_check cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 231 */;
	struct spi_transfer cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 200 */[1];
	u8 *cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 124 */;
	struct spi_transfer cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 121 */;
	void cocci_id/* drivers/net/wireless/ti/wlcore/spi.c 118 */;
}
