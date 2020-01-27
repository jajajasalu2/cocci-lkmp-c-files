cocci_test_suite() {
	const u32 cocci_id/* drivers/mmc/host/dw_mmc.c 985 */[];
	unsigned int cocci_id/* drivers/mmc/host/dw_mmc.c 984 */;
	const struct dw_mci_dma_ops cocci_id/* drivers/mmc/host/dw_mmc.c 859 */;
	struct idmac_desc {
		__le32 des0;
#define IDMAC_DES0_DIC BIT(1)
#define IDMAC_DES0_LD BIT(2)
#define IDMAC_DES0_FD BIT(3)
#define IDMAC_DES0_CH BIT(4)
#define IDMAC_DES0_ER BIT(5)
#define IDMAC_DES0_CES BIT(30)
#define IDMAC_DES0_OWN BIT(31)
									__le32 des1;
#define IDMAC_SET_BUFFER1_SIZE (d, s)((d)->des1 = ((d)->des1 & cpu_to_le32(0x03ffe000)) | (cpu_to_le32((s) & 0x1fff)))
				__le32 des2;
		__le32 des3;
	} cocci_id/* drivers/mmc/host/dw_mmc.c 84 */;
	struct dw_mci_dma_slave cocci_id/* drivers/mmc/host/dw_mmc.c 832 */;
	struct scatterlist *cocci_id/* drivers/mmc/host/dw_mmc.c 777 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mmc/host/dw_mmc.c 776 */;
	struct dma_slave_config cocci_id/* drivers/mmc/host/dw_mmc.c 775 */;
	struct idmac_desc_64addr {
		u32 des0;
#define IDMAC_OWN_CLR64 (x)!((x) & cpu_to_le32(IDMAC_DES0_OWN))
				u32 des1;
		u32 des2;
#define IDMAC_64ADDR_SET_BUFFER1_SIZE (d, s)((d)->des2 = ((d)->des2 & cpu_to_le32(0x03ffe000)) | ((cpu_to_le32(s)) & cpu_to_le32(0x1fff)))
				u32 des3;
		u32 des4;
		u32 des5;
		u32 des6;
		u32 des7;
	} cocci_id/* drivers/mmc/host/dw_mmc.c 63 */;
	struct idmac_desc cocci_id/* drivers/mmc/host/dw_mmc.c 532 */;
	struct idmac_desc *cocci_id/* drivers/mmc/host/dw_mmc.c 529 */;
	u64 cocci_id/* drivers/mmc/host/dw_mmc.c 513 */;
	struct idmac_desc_64addr cocci_id/* drivers/mmc/host/dw_mmc.c 504 */;
	struct idmac_desc_64addr *cocci_id/* drivers/mmc/host/dw_mmc.c 501 */;
	void *cocci_id/* drivers/mmc/host/dw_mmc.c 469 */;
	void __exit cocci_id/* drivers/mmc/host/dw_mmc.c 3489 */;
	int __init cocci_id/* drivers/mmc/host/dw_mmc.c 3483 */;
	struct mmc_command cocci_id/* drivers/mmc/host/dw_mmc.c 326 */;
	struct dw_mci_board *cocci_id/* drivers/mmc/host/dw_mmc.c 3090 */;
	struct timer_list *cocci_id/* drivers/mmc/host/dw_mmc.c 2969 */;
	struct device *cocci_id/* drivers/mmc/host/dw_mmc.c 2880 */;
	struct dw_mci_slot cocci_id/* drivers/mmc/host/dw_mmc.c 2799 */;
	irqreturn_t cocci_id/* drivers/mmc/host/dw_mmc.c 2614 */;
	struct sg_mapping_iter *cocci_id/* drivers/mmc/host/dw_mmc.c 2485 */;
	u64 *cocci_id/* drivers/mmc/host/dw_mmc.c 2456 */;
	u64 cocci_id/* drivers/mmc/host/dw_mmc.c 2440 */[16];
	u32 *cocci_id/* drivers/mmc/host/dw_mmc.c 2371 */;
	u32 cocci_id/* drivers/mmc/host/dw_mmc.c 2356 */[32];
	u16 *cocci_id/* drivers/mmc/host/dw_mmc.c 2288 */;
	u16 cocci_id/* drivers/mmc/host/dw_mmc.c 2273 */[64];
	enum dw_mci_state cocci_id/* drivers/mmc/host/dw_mmc.c 1960 */;
	bool cocci_id/* drivers/mmc/host/dw_mmc.c 1924 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/dw_mmc.c 1773 */;
	struct dentry *cocci_id/* drivers/mmc/host/dw_mmc.c 171 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/dw_mmc.c 1694 */;
	const struct dw_mci_drv_data *cocci_id/* drivers/mmc/host/dw_mmc.c 1685 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/dw_mmc.c 1674 */;
	u32 cocci_id/* drivers/mmc/host/dw_mmc.c 1645 */;
	unsigned long cocci_id/* drivers/mmc/host/dw_mmc.c 1644 */;
	struct dw_mci *cocci_id/* drivers/mmc/host/dw_mmc.c 1643 */;
	struct dw_mci_slot *cocci_id/* drivers/mmc/host/dw_mmc.c 1641 */;
	int cocci_id/* drivers/mmc/host/dw_mmc.c 1641 */;
	void cocci_id/* drivers/mmc/host/dw_mmc.c 1641 */;
	const u32 cocci_id/* drivers/mmc/host/dw_mmc.c 1618 */;
	struct mmc_card *cocci_id/* drivers/mmc/host/dw_mmc.c 1607 */;
	struct seq_file *cocci_id/* drivers/mmc/host/dw_mmc.c 148 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/dw_mmc.c 1283 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/dw_mmc.c 1282 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/dw_mmc.c 1280 */;
	u8 cocci_id/* drivers/mmc/host/dw_mmc.c 1027 */;
	u16 cocci_id/* drivers/mmc/host/dw_mmc.c 1026 */;
}
