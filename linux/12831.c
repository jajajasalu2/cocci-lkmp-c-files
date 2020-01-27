cocci_test_suite() {
	u32 *cocci_id/* drivers/memory/mvebu-devbus.c 89 */;
	const char *cocci_id/* drivers/memory/mvebu-devbus.c 88 */;
	struct devbus {
		struct device *dev;
		void __iomem *base;
		unsigned long tick_ps;
	} cocci_id/* drivers/memory/mvebu-devbus.c 80 */;
	struct devbus_write_params {
		u32 sync_enable;
		u32 wr_high;
		u32 wr_low;
		u32 ale_wr;
	} cocci_id/* drivers/memory/mvebu-devbus.c 73 */;
	struct devbus_read_params {
		u32 bus_width;
		u32 badr_skew;
		u32 turn_off;
		u32 acc_first;
		u32 acc_next;
		u32 rd_setup;
		u32 rd_hold;
	} cocci_id/* drivers/memory/mvebu-devbus.c 63 */;
	int __init cocci_id/* drivers/memory/mvebu-devbus.c 341 */;
	struct platform_driver cocci_id/* drivers/memory/mvebu-devbus.c 333 */;
	const struct of_device_id cocci_id/* drivers/memory/mvebu-devbus.c 326 */[];
	struct devbus cocci_id/* drivers/memory/mvebu-devbus.c 275 */;
	unsigned long cocci_id/* drivers/memory/mvebu-devbus.c 272 */;
	struct clk *cocci_id/* drivers/memory/mvebu-devbus.c 271 */;
	struct resource *cocci_id/* drivers/memory/mvebu-devbus.c 270 */;
	struct devbus_write_params cocci_id/* drivers/memory/mvebu-devbus.c 268 */;
	struct devbus_read_params cocci_id/* drivers/memory/mvebu-devbus.c 267 */;
	struct device *cocci_id/* drivers/memory/mvebu-devbus.c 265 */;
	struct platform_device *cocci_id/* drivers/memory/mvebu-devbus.c 263 */;
	u32 cocci_id/* drivers/memory/mvebu-devbus.c 233 */;
	struct devbus_write_params *cocci_id/* drivers/memory/mvebu-devbus.c 231 */;
	struct devbus_read_params *cocci_id/* drivers/memory/mvebu-devbus.c 230 */;
	struct device_node *cocci_id/* drivers/memory/mvebu-devbus.c 229 */;
	struct devbus *cocci_id/* drivers/memory/mvebu-devbus.c 228 */;
	void cocci_id/* drivers/memory/mvebu-devbus.c 228 */;
	int cocci_id/* drivers/memory/mvebu-devbus.c 108 */;
}
