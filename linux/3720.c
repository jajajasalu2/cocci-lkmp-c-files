cocci_test_suite() {
	const u8 cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 64 */[1024]__aligned(1024);
	struct adf_admin_comms *cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 280 */;
	struct adf_accel_dev *cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 278 */;
	void cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 278 */;
	u64 cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 241 */;
	uintptr_t cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 239 */;
	void __iomem *cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 238 */;
	struct adf_bar *cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 236 */;
	struct adf_hw_device_data *cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 235 */;
	int cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 232 */;
	struct icp_qat_fw_init_admin_resp cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 195 */;
	struct icp_qat_fw_init_admin_req cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 194 */;
	void *cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 155 */;
	u32 cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 154 */;
	struct adf_admin_comms {
		dma_addr_t phy_addr;
		dma_addr_t const_tbl_addr;
		void *virt_addr;
		void *virt_tbl_addr;
		void __iomem *mailbox_addr;
		struct mutex lock;
	} cocci_id/* drivers/crypto/qat/qat_common/adf_admin.c 145 */;
}
