cocci_test_suite() {
	const struct core_table_entry cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 97 */;
	const u8 cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 84 */;
	const u64 cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 84 */;
	struct core_table_entry *cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 68 */;
	void cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 68 */;
	struct kpc_uio_device cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 501 */;
	struct list_head *cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 497 */;
	struct core_table_entry cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 415 */;
	unsigned int cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 414 */;
	struct core_table_entry {
		u16 type;
		u32 offset;
		u32 length;
		bool s2c_dma_present;
		u8 s2c_dma_channel_num;
		bool c2s_dma_present;
		u8 c2s_dma_channel_num;
		u8 irq_count;
		u8 irq_base_num;
	} cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 41 */;
	struct resource cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 347 */[2];
	struct mfd_cell cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 346 */;
	struct kp2000_device *cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 344 */;
	int cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 344 */;
	size_t cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 344 */;
	s32 cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 269 */;
	irqreturn_t cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 252 */;
	struct uio_info *cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 252 */;
	u64 cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 239 */;
	u32 cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 237 */;
	struct attribute *cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 224 */[];
	struct kpc_uio_device *cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 188 */;
	char *cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 186 */;
	struct device_attribute *cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 185 */;
	struct device *cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 185 */;
	ssize_t cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 185 */;
	struct kpc_uio_device {
		struct list_head list;
		struct kp2000_device *pcard;
		struct device *dev;
		struct uio_info uioinfo;
		struct core_table_entry cte;
		u16 core_num;
	} cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 137 */;
	struct kpc_core_device_platdata cocci_id/* drivers/staging/kpc2000/kpc2000/cell_probe.c 102 */;
}
