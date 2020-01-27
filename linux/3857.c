cocci_test_suite() {
	u32 cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 923 */[10];
	struct sec_bd_info *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 685 */;
	struct sec_out_bd_info *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 684 */;
	struct sec_queue_ring_cq *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 683 */;
	struct sec_queue_ring_cmd *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 682 */;
	irqreturn_t cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 679 */;
	void *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 679 */;
	int cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 633 */;
	struct sec_queue *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 631 */;
	struct sec_dev_info *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 631 */;
	u64 cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 578 */;
	u32 cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 448 */[];
	bool cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 409 */;
	struct iommu_domain *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 373 */;
	u32 cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 361 */;
	void __iomem *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 360 */;
	struct sec_dev_info *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 224 */[SEC_MAX_DEVICES];
	struct sec_out_bd_info {
#define SEC_OUT_BD_INFO_Q_ID_M GENMASK(11, 0)
#define SEC_OUT_BD_INFO_ECC_2BIT_ERR BIT(14)
				u16 data;
	} cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 217 */;
	struct sec_debug_bd_info {
#define SEC_DEBUG_BD_INFO_SOFT_ERR_CHECK_M GENMASK(22, 0)
			u32 soft_err_check;
#define SEC_DEBUG_BD_INFO_HARD_ERR_CHECK_M GENMASK(9, 0)
			u32 hard_err_check;
		u32 icv_mac1st_word;
#define SEC_DEBUG_BD_INFO_GET_ID_M GENMASK(19, 0)
			u32 sec_get_id;
		u32 reserv_left[12];
	} cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 205 */;
	struct platform_driver cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1306 */;
	const __maybe_unused struct acpi_device_id cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1300 */[];
	const __maybe_unused struct of_device_id cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1293 */[];
	struct sec_hw_sgl cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1222 */;
	struct device *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1204 */;
	struct sec_queue_ring_db *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1082 */;
	struct sec_debug_bd_info cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1075 */;
	struct sec_out_bd_info cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1073 */;
	struct sec_bd_info cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1071 */;
	void cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1064 */;
	struct platform_device *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1036 */;
	struct resource *cocci_id/* drivers/crypto/hisilicon/sec/sec_drv.c 1011 */;
}
