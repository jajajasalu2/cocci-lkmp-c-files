cocci_test_suite() {
	bool cocci_id/* drivers/of/unittest.c 888 */;
	struct of_phandle_args cocci_id/* drivers/of/unittest.c 875 */;
	struct of_pci_range_parser cocci_id/* drivers/of/unittest.c 824 */;
	struct of_pci_range cocci_id/* drivers/of/unittest.c 823 */;
	struct of_changeset cocci_id/* drivers/of/unittest.c 713 */;
	struct property *cocci_id/* drivers/of/unittest.c 706 */;
	void __init cocci_id/* drivers/of/unittest.c 703 */;
	struct property cocci_id/* drivers/of/unittest.c 685 */;
	const char *cocci_id/* drivers/of/unittest.c 599 */[4];
	struct hlist_node *cocci_id/* drivers/of/unittest.c 331 */;
	struct node_hash *cocci_id/* drivers/of/unittest.c 330 */;
	struct node_hash {
		struct hlist_node node;
		struct device_node *np;
	} cocci_id/* drivers/of/unittest.c 321 */;
	struct unittest_results {
		int passed;
		int failed;
	} cocci_id/* drivers/of/unittest.c 32 */;
	char cocci_id/* drivers/of/unittest.c 291 */[16];
	int __init cocci_id/* drivers/of/unittest.c 2614 */;
	unsigned char *cocci_id/* drivers/of/unittest.c 256 */;
	struct device_node **cocci_id/* drivers/of/unittest.c 2471 */;
	u32 cocci_id/* drivers/of/unittest.c 2424 */;
	struct overlay_info *cocci_id/* drivers/of/unittest.c 2421 */;
	void *cocci_id/* drivers/of/unittest.c 2334 */;
	u64 cocci_id/* drivers/of/unittest.c 2332 */;
	void *__init cocci_id/* drivers/of/unittest.c 2332 */;
	struct overlay_info cocci_id/* drivers/of/unittest.c 2304 */[];
	struct overlay_info {
		uint8_t *dtb_begin;
		uint8_t *dtb_end;
		int expected_result;
		int overlay_id;
		char *name;
	} cocci_id/* drivers/of/unittest.c 2273 */;
	struct i2c_mux_core *cocci_id/* drivers/of/unittest.c 2046 */;
	struct i2c_driver cocci_id/* drivers/of/unittest.c 2023 */;
	const struct i2c_device_id cocci_id/* drivers/of/unittest.c 2018 */[];
	const struct i2c_device_id *cocci_id/* drivers/of/unittest.c 1994 */;
	struct i2c_adapter *cocci_id/* drivers/of/unittest.c 1928 */;
	struct unittest_i2c_bus_data *cocci_id/* drivers/of/unittest.c 1927 */;
	struct device *cocci_id/* drivers/of/unittest.c 1925 */;
	const struct i2c_algorithm cocci_id/* drivers/of/unittest.c 1918 */;
	struct i2c_msg *cocci_id/* drivers/of/unittest.c 1904 */;
	struct unittest_i2c_bus_data {
		struct platform_device *pdev;
		struct i2c_adapter adap;
	} cocci_id/* drivers/of/unittest.c 1898 */;
	char *cocci_id/* drivers/of/unittest.c 1866 */;
	int *cocci_id/* drivers/of/unittest.c 1573 */;
	unsigned long cocci_id/* drivers/of/unittest.c 1516 */[BITS_TO_LONGS(MAX_UNITTEST_OVERLAYS)];
	char cocci_id/* drivers/of/unittest.c 1503 */[256];
	enum overlay_type cocci_id/* drivers/of/unittest.c 1454 */;
	int cocci_id/* drivers/of/unittest.c 1453 */;
	enum overlay_type{PDEV_OVERLAY, I2C_OVERLAY,} cocci_id/* drivers/of/unittest.c 1448 */;
	struct i2c_client *cocci_id/* drivers/of/unittest.c 1434 */;
	struct platform_device *cocci_id/* drivers/of/unittest.c 1406 */;
	struct platform_driver cocci_id/* drivers/of/unittest.c 1378 */;
	int __init cocci_id/* drivers/of/unittest.c 1344 */(const char *overlay_name,
							    int *overlay_id);
	const int cocci_id/* drivers/of/unittest.c 1285 */;
	uint8_t cocci_id/* drivers/of/unittest.c 1283 */[];
	const char *cocci_id/* drivers/of/unittest.c 1234 */;
	unsigned long cocci_id/* drivers/of/unittest.c 1233 */;
	struct device_node *cocci_id/* drivers/of/unittest.c 1230 */;
	void cocci_id/* drivers/of/unittest.c 1230 */;
	const struct platform_device_info cocci_id/* drivers/of/unittest.c 1094 */;
	struct resource cocci_id/* drivers/of/unittest.c 1089 */;
	const struct of_device_id *cocci_id/* drivers/of/unittest.c 1061 */;
	struct {
		const char *path;
		const char *data;
	} cocci_id/* drivers/of/unittest.c 1040 */[];
	const struct of_device_id cocci_id/* drivers/of/unittest.c 1023 */[];
}
