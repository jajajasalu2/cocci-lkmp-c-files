cocci_test_suite() {
	struct dpot_data {
		struct ad_dpot_bus_data bdata;
		struct mutex update_lock;
		unsigned int rdac_mask;
		unsigned int max_pos;
		unsigned long devid;
		unsigned int uid;
		unsigned int feat;
		unsigned int wipers;
		u16 rdac_cache[MAX_RDACS];
	DECLARE_BITMAP(otp_en_mask,MAX_RDACS)
		;
	} cocci_id/* drivers/misc/ad525x_dpot.c 83 */;
	struct dpot_data cocci_id/* drivers/misc/ad525x_dpot.c 687 */;
	struct dpot_data *cocci_id/* drivers/misc/ad525x_dpot.c 684 */;
	const char *cocci_id/* drivers/misc/ad525x_dpot.c 681 */;
	struct ad_dpot_bus_data *cocci_id/* drivers/misc/ad525x_dpot.c 680 */;
	unsigned long cocci_id/* drivers/misc/ad525x_dpot.c 680 */;
	void cocci_id/* drivers/misc/ad525x_dpot.c 660 */;
	unsigned int cocci_id/* drivers/misc/ad525x_dpot.c 636 */;
	struct device *cocci_id/* drivers/misc/ad525x_dpot.c 635 */;
	int cocci_id/* drivers/misc/ad525x_dpot.c 635 */;
	const struct attribute_group cocci_id/* drivers/misc/ad525x_dpot.c 631 */;
	struct attribute *cocci_id/* drivers/misc/ad525x_dpot.c 623 */[];
	const struct attribute *cocci_id/* drivers/misc/ad525x_dpot.c 567 */[];
	size_t cocci_id/* drivers/misc/ad525x_dpot.c 507 */;
	struct device_attribute *cocci_id/* drivers/misc/ad525x_dpot.c 499 */;
	char *cocci_id/* drivers/misc/ad525x_dpot.c 499 */;
	ssize_t cocci_id/* drivers/misc/ad525x_dpot.c 497 */;
	u32 cocci_id/* drivers/misc/ad525x_dpot.c 484 */;
	u16 cocci_id/* drivers/misc/ad525x_dpot.c 400 */;
	u8 cocci_id/* drivers/misc/ad525x_dpot.c 228 */;
	s32 cocci_id/* drivers/misc/ad525x_dpot.c 228 */;
}
