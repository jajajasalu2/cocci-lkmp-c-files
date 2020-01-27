cocci_test_suite() {
	unsigned long cocci_id/* drivers/s390/char/sclp_pci.c 87 */;
	struct pci_cfg_sccb *cocci_id/* drivers/s390/char/sclp_pci.c 60 */;
	u32 cocci_id/* drivers/s390/char/sclp_pci.c 58 */;
	sclp_cmdw_t cocci_id/* drivers/s390/char/sclp_pci.c 58 */;
	int cocci_id/* drivers/s390/char/sclp_pci.c 58 */;
	struct pci_cfg_sccb {
		struct sccb_header header;
		u8 atype;
		u8 reserved1;
		u16 reserved2;
		u32 aid;
	}__packed cocci_id/* drivers/s390/char/sclp_pci.c 50 */;
	struct err_notify_sccb {
		struct sccb_header header;
		struct err_notify_evbuf evbuf;
	}__packed cocci_id/* drivers/s390/char/sclp_pci.c 45 */;
	struct err_notify_evbuf {
		struct evbuf_header header;
		u8 action;
		u8 atype;
		u32 fh;
		u32 fid;
		u8 data[0];
	}__packed cocci_id/* drivers/s390/char/sclp_pci.c 36 */;
	struct sclp_register cocci_id/* drivers/s390/char/sclp_pci.c 32 */;
	struct sclp_req cocci_id/* drivers/s390/char/sclp_pci.c 134 */;
	struct err_notify_sccb *cocci_id/* drivers/s390/char/sclp_pci.c 133 */;
	struct err_notify_sccb cocci_id/* drivers/s390/char/sclp_pci.c 124 */;
	struct zpci_report_error_header *cocci_id/* drivers/s390/char/sclp_pci.c 110 */;
	struct completion *cocci_id/* drivers/s390/char/sclp_pci.c 105 */;
	struct sclp_req *cocci_id/* drivers/s390/char/sclp_pci.c 103 */;
	void *cocci_id/* drivers/s390/char/sclp_pci.c 103 */;
	void cocci_id/* drivers/s390/char/sclp_pci.c 103 */;
}
