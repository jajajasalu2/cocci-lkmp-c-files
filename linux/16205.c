cocci_test_suite() {
	struct spi_board_info cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 60 */[];
	struct platform_driver cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 507 */;
	struct flash_platform_data cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 48 */;
	unsigned int cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 444 */;
	struct kp_spi cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 435 */;
	struct resource *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 425 */;
	struct kp_spi *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 424 */;
	struct spi_master *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 423 */;
	struct kpc_core_device_platdata *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 422 */;
	struct platform_device *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 420 */;
	int cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 419 */;
	struct kp_spi_controller_state *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 411 */;
	struct spi_device *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 409 */;
	void cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 408 */;
	struct mtd_partition cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 32 */[];
	void *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 310 */;
	const void *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 309 */;
	struct spi_transfer *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 292 */;
	struct spi_message *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 287 */;
	union kp_spi_config cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 261 */;
	char cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 219 */;
	const u8 *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 214 */;
	u8 *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 213 */;
	unsigned cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 204 */;
	unsigned long cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 187 */;
	u64 __iomem *cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 165 */;
	u64 cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 162 */;
	union kp_spi_ffctrl {
		struct __packed spi_ffctrl_bitfield {
			unsigned int ffstart:1;
			unsigned int:31;
		} bitfield;
		u32 reg;
	} cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 151 */;
	union kp_spi_status {
		struct __packed spi_status_bitfield {
			unsigned int rx:1;
			unsigned int tx:1;
			unsigned int eo:1;
			unsigned int:1;
			unsigned int txffe:1;
			unsigned int txfff:1;
			unsigned int rxffe:1;
			unsigned int rxfff:1;
			unsigned int:24;
		} bitfield;
		u32 reg;
	} cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 136 */;
	union kp_spi_config {
		struct __packed spi_config_bitfield {
			unsigned int pha:1;
			unsigned int pol:1;
			unsigned int epol:1;
			unsigned int dpe:1;
			unsigned int wl:5;
			unsigned int:3;
			unsigned int trm:2;
			unsigned int cs:4;
			unsigned int wcnt:7;
			unsigned int ffen:1;
			unsigned int spi_en:1;
			unsigned int:5;
		} bitfield;
		u32 reg;
	} cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 116 */;
	struct kp_spi_controller_state {
		void __iomem *base;
		s64 conf_cache;
	} cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 111 */;
	struct kp_spi {
		struct spi_master *master;
		u64 __iomem *base;
		struct device *dev;
	} cocci_id/* drivers/staging/kpc2000/kpc2000_spi.c 105 */;
}
