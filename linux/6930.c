cocci_test_suite() {
	u16 cocci_id/* drivers/w1/slaves/w1_ds250x.c 92 */;
	u8 cocci_id/* drivers/w1/slaves/w1_ds250x.c 90 */[6];
	u8 cocci_id/* drivers/w1/slaves/w1_ds250x.c 52 */;
	u8 cocci_id/* drivers/w1/slaves/w1_ds250x.c 51 */[3];
	struct w1_eprom_data *cocci_id/* drivers/w1/slaves/w1_ds250x.c 48 */;
	struct w1_slave *cocci_id/* drivers/w1/slaves/w1_ds250x.c 46 */;
	int cocci_id/* drivers/w1/slaves/w1_ds250x.c 46 */;
	struct w1_eprom_data {
		size_t size;
		int (*read)(struct w1_slave *sl, int pageno);
		u8 eprom[W1_DS2505_SIZE];
	DECLARE_BITMAP(page_present,W1_DS2505_SIZE/W1_PAGE_SIZE)
		;
		char nvmem_name[64];
	} cocci_id/* drivers/w1/slaves/w1_ds250x.c 38 */;
	void __exit cocci_id/* drivers/w1/slaves/w1_ds250x.c 273 */;
	void cocci_id/* drivers/w1/slaves/w1_ds250x.c 273 */;
	int __init cocci_id/* drivers/w1/slaves/w1_ds250x.c 242 */;
	struct w1_family cocci_id/* drivers/w1/slaves/w1_ds250x.c 222 */;
	struct w1_family_ops cocci_id/* drivers/w1/slaves/w1_ds250x.c 218 */;
	unsigned long long cocci_id/* drivers/w1/slaves/w1_ds250x.c 204 */;
	struct w1_eprom_data cocci_id/* drivers/w1/slaves/w1_ds250x.c 179 */;
	struct nvmem_config cocci_id/* drivers/w1/slaves/w1_ds250x.c 169 */;
	struct nvmem_device *cocci_id/* drivers/w1/slaves/w1_ds250x.c 168 */;
	void *cocci_id/* drivers/w1/slaves/w1_ds250x.c 140 */;
	unsigned int cocci_id/* drivers/w1/slaves/w1_ds250x.c 140 */;
	size_t cocci_id/* drivers/w1/slaves/w1_ds250x.c 140 */;
}
