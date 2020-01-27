cocci_test_suite() {
	struct sdio_cmd53 *cocci_id/* drivers/staging/wilc1000/sdio.c 92 */;
	struct sdio_cmd52 cocci_id/* drivers/staging/wilc1000/sdio.c 899 */;
	struct wilc_sdio *cocci_id/* drivers/staging/wilc1000/sdio.c 874 */;
	struct sdio_func *cocci_id/* drivers/staging/wilc1000/sdio.c 873 */;
	u32 cocci_id/* drivers/staging/wilc1000/sdio.c 871 */;
	struct wilc *cocci_id/* drivers/staging/wilc1000/sdio.c 871 */;
	int cocci_id/* drivers/staging/wilc1000/sdio.c 871 */;
	u32 *cocci_id/* drivers/staging/wilc1000/sdio.c 812 */;
	u8 cocci_id/* drivers/staging/wilc1000/sdio.c 67 */;
	bool cocci_id/* drivers/staging/wilc1000/sdio.c 667 */;
	struct sdio_func cocci_id/* drivers/staging/wilc1000/sdio.c 65 */;
	struct sdio_cmd52 *cocci_id/* drivers/staging/wilc1000/sdio.c 63 */;
	struct sdio_cmd53 cocci_id/* drivers/staging/wilc1000/sdio.c 571 */;
	u8 *cocci_id/* drivers/staging/wilc1000/sdio.c 566 */;
	const struct wilc_hif_func cocci_id/* drivers/staging/wilc1000/sdio.c 54 */;
	struct sdio_cmd53 {
		u32 read_write:1;
		u32 function:3;
		u32 block_mode:1;
		u32 increment:1;
		u32 address:17;
		u32 count:9;
		u8 *buffer;
		u32 block_size;
	} cocci_id/* drivers/staging/wilc1000/sdio.c 43 */;
	struct sdio_cmd52 {
		u32 read_write:1;
		u32 function:3;
		u32 raw:1;
		u32 address:17;
		u32 data:8;
	} cocci_id/* drivers/staging/wilc1000/sdio.c 35 */;
	struct wilc_sdio {
		bool irq_gpio;
		u32 block_size;
		int nint;
#define MAX_NUN_INT_THRPT_ENH2 (5)
			int has_thrpt_enh3;
	} cocci_id/* drivers/staging/wilc1000/sdio.c 26 */;
	void cocci_id/* drivers/staging/wilc1000/sdio.c 241 */;
	const struct sdio_device_id cocci_id/* drivers/staging/wilc1000/sdio.c 19 */[];
	struct gpio_desc *cocci_id/* drivers/staging/wilc1000/sdio.c 127 */;
	const struct sdio_device_id *cocci_id/* drivers/staging/wilc1000/sdio.c 123 */;
	struct sdio_driver cocci_id/* drivers/staging/wilc1000/sdio.c 1138 */;
	const struct dev_pm_ops cocci_id/* drivers/staging/wilc1000/sdio.c 1133 */;
	const struct of_device_id cocci_id/* drivers/staging/wilc1000/sdio.c 1127 */[];
	struct device *cocci_id/* drivers/staging/wilc1000/sdio.c 1109 */;
	void *cocci_id/* drivers/staging/wilc1000/sdio.c 108 */;
}
