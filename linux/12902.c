cocci_test_suite() {
	const char *cocci_id/* drivers/edac/synopsys_edac.c 996 */;
	size_t cocci_id/* drivers/edac/synopsys_edac.c 996 */;
	char *cocci_id/* drivers/edac/synopsys_edac.c 982 */;
	struct device_attribute *cocci_id/* drivers/edac/synopsys_edac.c 981 */;
	struct device *cocci_id/* drivers/edac/synopsys_edac.c 980 */;
	ssize_t cocci_id/* drivers/edac/synopsys_edac.c 980 */;
	ulong cocci_id/* drivers/edac/synopsys_edac.c 931 */;
	struct mem_ctl_info cocci_id/* drivers/edac/synopsys_edac.c 918 */;
	const struct of_device_id cocci_id/* drivers/edac/synopsys_edac.c 901 */[];
	const struct synps_platform_data cocci_id/* drivers/edac/synopsys_edac.c 881 */;
	struct platform_device *cocci_id/* drivers/edac/synopsys_edac.c 811 */;
	struct dimm_info *cocci_id/* drivers/edac/synopsys_edac.c 781 */;
	struct csrow_info *cocci_id/* drivers/edac/synopsys_edac.c 780 */;
	enum mem_type cocci_id/* drivers/edac/synopsys_edac.c 726 */;
	struct sysinfo cocci_id/* drivers/edac/synopsys_edac.c 710 */;
	u32 cocci_id/* drivers/edac/synopsys_edac.c 708 */;
	bool cocci_id/* drivers/edac/synopsys_edac.c 662 */;
	enum dev_type cocci_id/* drivers/edac/synopsys_edac.c 599 */;
	const void __iomem *cocci_id/* drivers/edac/synopsys_edac.c 599 */;
	int cocci_id/* drivers/edac/synopsys_edac.c 573 */;
	struct synps_edac_priv *cocci_id/* drivers/edac/synopsys_edac.c 572 */;
	const struct synps_platform_data *cocci_id/* drivers/edac/synopsys_edac.c 571 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/synopsys_edac.c 569 */;
	void cocci_id/* drivers/edac/synopsys_edac.c 569 */;
	irqreturn_t cocci_id/* drivers/edac/synopsys_edac.c 534 */;
	void *cocci_id/* drivers/edac/synopsys_edac.c 534 */;
	struct ecc_error_info *cocci_id/* drivers/edac/synopsys_edac.c 476 */;
	struct synps_ecc_status *cocci_id/* drivers/edac/synopsys_edac.c 473 */;
	struct synps_platform_data {
		int (*get_error_info)(struct synps_edac_priv *priv);
		enum mem_type (*get_mtype)(const void __iomem *base);
		enum dev_type (*get_dtype)(const void __iomem *base);
		bool (*get_ecc_state)(void __iomem *base);
		int quirks;
	} cocci_id/* drivers/edac/synopsys_edac.c 343 */;
	struct synps_edac_priv {
		void __iomem *baseaddr;
		char message[SYNPS_EDAC_MSG_SIZE];
		struct synps_ecc_status stat;
		const struct synps_platform_data *p_data;
		u32 ce_cnt;
		u32 ue_cnt;
#ifdef CONFIG_EDAC_DEBUG
		ulong poison_addr;
		u32 row_shift[18];
		u32 col_shift[14];
		u32 bank_shift[3];
		u32 bankgrp_shift[2];
		u32 rank_shift[1];
#endif
	} cocci_id/* drivers/edac/synopsys_edac.c 318 */;
	struct synps_ecc_status {
		u32 ce_cnt;
		u32 ue_cnt;
		struct ecc_error_info ceinfo;
		struct ecc_error_info ueinfo;
	} cocci_id/* drivers/edac/synopsys_edac.c 296 */;
	struct ecc_error_info {
		u32 row;
		u32 col;
		u32 bank;
		u32 bitpos;
		u32 data;
		u32 bankgrpnr;
		u32 blknr;
	} cocci_id/* drivers/edac/synopsys_edac.c 279 */;
	struct platform_driver cocci_id/* drivers/edac/synopsys_edac.c 1407 */;
	struct synps_edac_priv cocci_id/* drivers/edac/synopsys_edac.c 1327 */;
	struct resource *cocci_id/* drivers/edac/synopsys_edac.c 1302 */;
	void __iomem *cocci_id/* drivers/edac/synopsys_edac.c 1301 */;
	struct edac_mc_layer cocci_id/* drivers/edac/synopsys_edac.c 1298 */[2];
	u32 cocci_id/* drivers/edac/synopsys_edac.c 1264 */[12];
	u32 *cocci_id/* drivers/edac/synopsys_edac.c 1225 */;
}
