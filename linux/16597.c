cocci_test_suite() {
	void *cocci_id/* drivers/s390/char/sclp_cmd.c 94 */;
	struct read_cpu_info_sccb *cocci_id/* drivers/s390/char/sclp_cmd.c 90 */;
	struct sclp_core_info *cocci_id/* drivers/s390/char/sclp_cmd.c 87 */;
	int cocci_id/* drivers/s390/char/sclp_cmd.c 87 */;
	struct chp_info_sccb *cocci_id/* drivers/s390/char/sclp_cmd.c 639 */;
	struct sclp_chp_info *cocci_id/* drivers/s390/char/sclp_cmd.c 637 */;
	struct chp_info_sccb {
		struct sccb_header header;
		u8 recognized[SCLP_CHP_INFO_MASK_SIZE];
		u8 standby[SCLP_CHP_INFO_MASK_SIZE];
		u8 configured[SCLP_CHP_INFO_MASK_SIZE];
		u8 ccm;
		u8 reserved[6];
		u8 cssid;
	}__attribute__((packed)) cocci_id/* drivers/s390/char/sclp_cmd.c 619 */;
	struct chp_id cocci_id/* drivers/s390/char/sclp_cmd.c 602 */;
	struct chp_cfg_sccb *cocci_id/* drivers/s390/char/sclp_cmd.c 565 */;
	struct chp_cfg_sccb {
		struct sccb_header header;
		u8 ccm;
		u8 reserved[6];
		u8 cssid;
	}__attribute__((packed)) cocci_id/* drivers/s390/char/sclp_cmd.c 556 */;
	struct read_storage_sccb *cocci_id/* drivers/s390/char/sclp_cmd.c 477 */;
	struct platform_device *cocci_id/* drivers/s390/char/sclp_cmd.c 476 */;
	int __init cocci_id/* drivers/s390/char/sclp_cmd.c 474 */;
	struct completion cocci_id/* drivers/s390/char/sclp_cmd.c 47 */;
	struct platform_driver cocci_id/* drivers/s390/char/sclp_cmd.c 467 */;
	const struct dev_pm_ops cocci_id/* drivers/s390/char/sclp_cmd.c 463 */;
	struct device *cocci_id/* drivers/s390/char/sclp_cmd.c 455 */;
	struct list_head *cocci_id/* drivers/s390/char/sclp_cmd.c 428 */;
	void cocci_id/* drivers/s390/char/sclp_cmd.c 415 */;
	unsigned long long cocci_id/* drivers/s390/char/sclp_cmd.c 385 */;
	u16 cocci_id/* drivers/s390/char/sclp_cmd.c 383 */;
	void __init cocci_id/* drivers/s390/char/sclp_cmd.c 383 */;
	unsigned long long *cocci_id/* drivers/s390/char/sclp_cmd.c 368 */;
	struct notifier_block cocci_id/* drivers/s390/char/sclp_cmd.c 364 */;
	struct completion *cocci_id/* drivers/s390/char/sclp_cmd.c 35 */;
	struct sclp_req *cocci_id/* drivers/s390/char/sclp_cmd.c 33 */;
	unsigned char cocci_id/* drivers/s390/char/sclp_cmd.c 323 */;
	struct memory_notify *cocci_id/* drivers/s390/char/sclp_cmd.c 322 */;
	struct notifier_block *cocci_id/* drivers/s390/char/sclp_cmd.c 318 */;
	struct memory_increment *cocci_id/* drivers/s390/char/sclp_cmd.c 303 */;
	bool cocci_id/* drivers/s390/char/sclp_cmd.c 301 */;
	struct attach_storage_sccb *cocci_id/* drivers/s390/char/sclp_cmd.c 248 */;
	u8 cocci_id/* drivers/s390/char/sclp_cmd.c 246 */;
	struct attach_storage_sccb {
		struct sccb_header header;
		u16:16;
		u16 assigned;
		u32:32;
		u32 entries[0];
	}__packed cocci_id/* drivers/s390/char/sclp_cmd.c 238 */;
	struct assign_storage_sccb *cocci_id/* drivers/s390/char/sclp_cmd.c 194 */;
	sclp_cmdw_t cocci_id/* drivers/s390/char/sclp_cmd.c 192 */;
	struct assign_storage_sccb {
		struct sccb_header header;
		u16 rn;
	}__packed cocci_id/* drivers/s390/char/sclp_cmd.c 175 */;
	struct memory_increment {
		struct list_head list;
		u16 rn;
		int standby;
	} cocci_id/* drivers/s390/char/sclp_cmd.c 169 */;
	struct cpu_configure_sccb *cocci_id/* drivers/s390/char/sclp_cmd.c 120 */;
	struct cpu_configure_sccb {
		struct sccb_header header;
	}__attribute__((packed,aligned(8))) cocci_id/* drivers/s390/char/sclp_cmd.c 114 */;
	unsigned long cocci_id/* drivers/s390/char/sclp_cmd.c 110 */;
}
