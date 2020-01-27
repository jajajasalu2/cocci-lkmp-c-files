cocci_test_suite() {
	enum qm_debug_file cocci_id/* drivers/crypto/hisilicon/qm.c 971 */;
	struct inode *cocci_id/* drivers/crypto/hisilicon/qm.c 959 */;
	struct seq_file *cocci_id/* drivers/crypto/hisilicon/qm.c 939 */;
	struct qm_dfx_registers cocci_id/* drivers/crypto/hisilicon/qm.c 905 */[];
	struct qm_dfx_registers {
		char *reg_name;
		u64 reg_offset;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 899 */;
	const struct file_operations cocci_id/* drivers/crypto/hisilicon/qm.c 892 */;
	const char __user *cocci_id/* drivers/crypto/hisilicon/qm.c 843 */;
	char cocci_id/* drivers/crypto/hisilicon/qm.c 822 */[QM_DBG_TMP_BUF_LEN];
	loff_t *cocci_id/* drivers/crypto/hisilicon/qm.c 818 */;
	struct file *cocci_id/* drivers/crypto/hisilicon/qm.c 817 */;
	char __user *cocci_id/* drivers/crypto/hisilicon/qm.c 817 */;
	ssize_t cocci_id/* drivers/crypto/hisilicon/qm.c 817 */;
	u32 cocci_id/* drivers/crypto/hisilicon/qm.c 797 */;
	struct debugfs_file *cocci_id/* drivers/crypto/hisilicon/qm.c 797 */;
	struct hisi_qm cocci_id/* drivers/crypto/hisilicon/qm.c 768 */;
	struct qm_debug *cocci_id/* drivers/crypto/hisilicon/qm.c 766 */;
	enum vft_type cocci_id/* drivers/crypto/hisilicon/qm.c 707 */;
	const struct hisi_qm_hw_error *cocci_id/* drivers/crypto/hisilicon/qm.c 577 */;
	irqreturn_t cocci_id/* drivers/crypto/hisilicon/qm.c 575 */;
	struct qm_aeqe *cocci_id/* drivers/crypto/hisilicon/qm.c 545 */;
	struct qm_eqe *cocci_id/* drivers/crypto/hisilicon/qm.c 499 */;
	struct hisi_qp cocci_id/* drivers/crypto/hisilicon/qm.c 492 */;
	struct work_struct *cocci_id/* drivers/crypto/hisilicon/qm.c 488 */;
	struct qm_cqe *cocci_id/* drivers/crypto/hisilicon/qm.c 468 */;
	u64 cocci_id/* drivers/crypto/hisilicon/qm.c 391 */;
	unsigned long long cocci_id/* drivers/crypto/hisilicon/qm.c 357 */;
	struct qm_mailbox cocci_id/* drivers/crypto/hisilicon/qm.c 353 */;
	bool cocci_id/* drivers/crypto/hisilicon/qm.c 351 */;
	char *cocci_id/* drivers/crypto/hisilicon/qm.c 346 */;
	char __iomem *cocci_id/* drivers/crypto/hisilicon/qm.c 345 */;
	void __iomem *cocci_id/* drivers/crypto/hisilicon/qm.c 331 */;
	const char *const cocci_id/* drivers/crypto/hisilicon/qm.c 310 */[];
	const struct hisi_qm_hw_error cocci_id/* drivers/crypto/hisilicon/qm.c 293 */[];
	struct hisi_qm_hw_error {
		u32 int_msk;
		const char *msg;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 288 */;
	struct hisi_qm_hw_ops {
		int (*get_vft)(struct hisi_qm *qm, u32 *base, u32 *number);
		void (*qm_db)(struct hisi_qm *qm, u16 qn, u8 cmd, u16 index,
			      u8 priority);
		u32 (*get_irq_num)(struct hisi_qm *qm);
		int (*debug_init)(struct hisi_qm *qm);
		void (*hw_error_init)(struct hisi_qm *qm, u32 ce, u32 nfe,
				      u32 fe, u32 msi);
		pci_ers_result_t (*hw_error_handle)(struct hisi_qm *qm);
	} cocci_id/* drivers/crypto/hisilicon/qm.c 272 */;
	struct qm_doorbell {
		__le16 queue_num;
		__le16 cmd;
		__le16 index;
		__le16 priority;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 265 */;
	struct qm_mailbox {
		__le16 w0;
		__le16 queue_num;
		__le32 base_l;
		__le32 base_h;
		__le32 rsvd;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 257 */;
	struct qm_aeqc {
		__le16 head;
		__le16 tail;
		__le32 base_l;
		__le32 base_h;
		__le32 dw3;
		__le32 rsvd[2];
		__le32 dw6;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 247 */;
	struct qm_eqc {
		__le16 head;
		__le16 tail;
		__le32 base_l;
		__le32 base_h;
		__le32 dw3;
		__le32 rsvd[2];
		__le32 dw6;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 237 */;
	struct qm_cqc {
		__le16 head;
		__le16 tail;
		__le32 base_l;
		__le32 base_h;
		__le32 dw3;
		__le16 w8;
		__le16 rsvd0;
		__le16 pasid;
		__le16 w11;
		__le32 dw6;
		__le32 rsvd1;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 223 */;
	struct qm_sqc {
		__le16 head;
		__le16 tail;
		__le32 base_l;
		__le32 base_h;
		__le32 dw3;
		__le16 w8;
		__le16 rsvd0;
		__le16 pasid;
		__le16 w11;
		__le16 cq_num;
		__le16 w13;
		__le32 rsvd1;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 208 */;
	struct qm_aeqe {
		__le32 dw0;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 204 */;
	struct qm_eqe {
		__le32 dw0;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 200 */;
	enum qm_hw_ver cocci_id/* drivers/crypto/hisilicon/qm.c 1913 */;
	struct qm_cqe {
		__le32 rsvd0;
		__le16 cmd_id;
		__le16 rsvd1;
		__le16 sq_head;
		__le16 sq_num;
		__le16 rsvd2;
		__le16 w7;
	} cocci_id/* drivers/crypto/hisilicon/qm.c 190 */;
	pci_ers_result_t cocci_id/* drivers/crypto/hisilicon/qm.c 1895 */;
	enum vft_type{SQC_VFT=0, CQC_VFT,} cocci_id/* drivers/crypto/hisilicon/qm.c 185 */;
	struct qm_dfx_registers *cocci_id/* drivers/crypto/hisilicon/qm.c 1836 */;
	struct dentry *cocci_id/* drivers/crypto/hisilicon/qm.c 1806 */;
	struct qm_cqc cocci_id/* drivers/crypto/hisilicon/qm.c 1738 */;
	struct qm_sqc cocci_id/* drivers/crypto/hisilicon/qm.c 1737 */;
	struct qm_aeqe cocci_id/* drivers/crypto/hisilicon/qm.c 1736 */;
	struct qm_eqe cocci_id/* drivers/crypto/hisilicon/qm.c 1735 */;
	long cocci_id/* drivers/crypto/hisilicon/qm.c 1723 */;
	unsigned long cocci_id/* drivers/crypto/hisilicon/qm.c 1681 */;
	size_t cocci_id/* drivers/crypto/hisilicon/qm.c 1647 */;
	struct device *cocci_id/* drivers/crypto/hisilicon/qm.c 1646 */;
	struct pci_dev *cocci_id/* drivers/crypto/hisilicon/qm.c 1645 */;
	struct hisi_qm *cocci_id/* drivers/crypto/hisilicon/qm.c 1643 */;
	int cocci_id/* drivers/crypto/hisilicon/qm.c 1643 */;
	struct qm_aeqc cocci_id/* drivers/crypto/hisilicon/qm.c 1622 */;
	struct qm_eqc cocci_id/* drivers/crypto/hisilicon/qm.c 1601 */;
	dma_addr_t cocci_id/* drivers/crypto/hisilicon/qm.c 1595 */;
	struct qm_aeqc *cocci_id/* drivers/crypto/hisilicon/qm.c 1594 */;
	struct qm_eqc *cocci_id/* drivers/crypto/hisilicon/qm.c 1593 */;
	struct hisi_qm_status *cocci_id/* drivers/crypto/hisilicon/qm.c 1582 */;
	u32 *cocci_id/* drivers/crypto/hisilicon/qm.c 1539 */;
	unsigned int cocci_id/* drivers/crypto/hisilicon/qm.c 1388 */;
	void cocci_id/* drivers/crypto/hisilicon/qm.c 1386 */;
	void *cocci_id/* drivers/crypto/hisilicon/qm.c 1366 */;
	u16 cocci_id/* drivers/crypto/hisilicon/qm.c 1364 */;
	struct hisi_qp_status *cocci_id/* drivers/crypto/hisilicon/qm.c 1363 */;
	const void *cocci_id/* drivers/crypto/hisilicon/qm.c 1361 */;
	struct qm_cqc *cocci_id/* drivers/crypto/hisilicon/qm.c 1206 */;
	struct qm_sqc *cocci_id/* drivers/crypto/hisilicon/qm.c 1205 */;
	struct qm_dma *cocci_id/* drivers/crypto/hisilicon/qm.c 1184 */;
	struct qm_cqe cocci_id/* drivers/crypto/hisilicon/qm.c 1136 */;
	u8 cocci_id/* drivers/crypto/hisilicon/qm.c 1107 */;
	struct hisi_qp *cocci_id/* drivers/crypto/hisilicon/qm.c 1107 */;
	const struct hisi_qm_hw_ops cocci_id/* drivers/crypto/hisilicon/qm.c 1074 */;
}
