cocci_test_suite() {
	enum ks8995_chip_variant{ks8995, ksz8864, ksz8795, max_variant,} cocci_id/* drivers/net/phy/spi_ks8995.c 97 */;
	struct spi_driver cocci_id/* drivers/net/phy/spi_ks8995.c 534 */;
	unsigned long cocci_id/* drivers/net/phy/spi_ks8995.c 468 */;
	struct spi_device *cocci_id/* drivers/net/phy/spi_ks8995.c 433 */;
	const struct bin_attribute cocci_id/* drivers/net/phy/spi_ks8995.c 422 */;
	struct ks8995_pdata *cocci_id/* drivers/net/phy/spi_ks8995.c 413 */;
	struct device_node *cocci_id/* drivers/net/phy/spi_ks8995.c 412 */;
	void cocci_id/* drivers/net/phy/spi_ks8995.c 410 */;
	struct device cocci_id/* drivers/net/phy/spi_ks8995.c 303 */;
	struct device *cocci_id/* drivers/net/phy/spi_ks8995.c 300 */;
	loff_t cocci_id/* drivers/net/phy/spi_ks8995.c 298 */;
	struct bin_attribute *cocci_id/* drivers/net/phy/spi_ks8995.c 298 */;
	struct kobject *cocci_id/* drivers/net/phy/spi_ks8995.c 297 */;
	struct file *cocci_id/* drivers/net/phy/spi_ks8995.c 297 */;
	ssize_t cocci_id/* drivers/net/phy/spi_ks8995.c 297 */;
	char cocci_id/* drivers/net/phy/spi_ks8995.c 267 */;
	u8 *cocci_id/* drivers/net/phy/spi_ks8995.c 260 */;
	struct spi_message cocci_id/* drivers/net/phy/spi_ks8995.c 209 */;
	struct spi_transfer cocci_id/* drivers/net/phy/spi_ks8995.c 208 */[2];
	size_t cocci_id/* drivers/net/phy/spi_ks8995.c 205 */;
	char *cocci_id/* drivers/net/phy/spi_ks8995.c 204 */;
	u16 cocci_id/* drivers/net/phy/spi_ks8995.c 194 */;
	unsigned cocci_id/* drivers/net/phy/spi_ks8995.c 192 */;
	__be16 cocci_id/* drivers/net/phy/spi_ks8995.c 191 */;
	struct ks8995_switch *cocci_id/* drivers/net/phy/spi_ks8995.c 191 */;
	int cocci_id/* drivers/net/phy/spi_ks8995.c 191 */;
	u8 cocci_id/* drivers/net/phy/spi_ks8995.c 170 */;
	const struct of_device_id cocci_id/* drivers/net/phy/spi_ks8995.c 162 */[];
	const struct spi_device_id cocci_id/* drivers/net/phy/spi_ks8995.c 154 */[];
	struct ks8995_switch {
		struct spi_device *spi;
		struct mutex lock;
		struct ks8995_pdata *pdata;
		struct bin_attribute regs_attr;
		const struct ks8995_chip_params *chip;
		int revision_id;
	} cocci_id/* drivers/net/phy/spi_ks8995.c 145 */;
	struct ks8995_pdata {
		int reset_gpio;
		enum of_gpio_flags reset_gpio_flags;
	} cocci_id/* drivers/net/phy/spi_ks8995.c 140 */;
	const struct ks8995_chip_params cocci_id/* drivers/net/phy/spi_ks8995.c 113 */[];
	struct ks8995_chip_params {
		char *name;
		int family_id;
		int chip_id;
		int regs_size;
		int addr_width;
		int addr_shift;
	} cocci_id/* drivers/net/phy/spi_ks8995.c 104 */;
}
