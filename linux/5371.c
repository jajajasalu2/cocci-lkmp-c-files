cocci_test_suite() {
	struct regmap_async_spi *cocci_id/* drivers/base/regmap/regmap-spi.c 82 */;
	struct regmap_async *cocci_id/* drivers/base/regmap/regmap-spi.c 80 */;
	void cocci_id/* drivers/base/regmap/regmap-spi.c 80 */;
	struct device *cocci_id/* drivers/base/regmap/regmap-spi.c 61 */;
	struct regmap_async_spi cocci_id/* drivers/base/regmap/regmap-spi.c 59 */;
	const void *cocci_id/* drivers/base/regmap/regmap-spi.c 54 */;
	size_t cocci_id/* drivers/base/regmap/regmap-spi.c 54 */;
	void *cocci_id/* drivers/base/regmap/regmap-spi.c 53 */;
	int cocci_id/* drivers/base/regmap/regmap-spi.c 53 */;
	struct spi_transfer cocci_id/* drivers/base/regmap/regmap-spi.c 43 */[2];
	struct spi_message cocci_id/* drivers/base/regmap/regmap-spi.c 42 */;
	struct regmap_async_spi {
		struct regmap_async core;
		struct spi_message m;
		struct spi_transfer t[2];
	} cocci_id/* drivers/base/regmap/regmap-spi.c 15 */;
	const char *cocci_id/* drivers/base/regmap/regmap-spi.c 125 */;
	struct lock_class_key *cocci_id/* drivers/base/regmap/regmap-spi.c 124 */;
	const struct regmap_config *cocci_id/* drivers/base/regmap/regmap-spi.c 123 */;
	struct spi_device *cocci_id/* drivers/base/regmap/regmap-spi.c 122 */;
	struct regmap *cocci_id/* drivers/base/regmap/regmap-spi.c 122 */;
	const struct regmap_bus cocci_id/* drivers/base/regmap/regmap-spi.c 101 */;
}
