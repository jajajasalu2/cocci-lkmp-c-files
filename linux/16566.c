cocci_test_suite() {
	struct go *cocci_id/* drivers/s390/char/sclp_early_core.c 92 */;
	struct mto *cocci_id/* drivers/s390/char/sclp_early_core.c 91 */;
	struct mdb *cocci_id/* drivers/s390/char/sclp_early_core.c 90 */;
	struct msg_buf *cocci_id/* drivers/s390/char/sclp_early_core.c 89 */;
	struct write_sccb *cocci_id/* drivers/s390/char/sclp_early_core.c 88 */;
	unsigned char *cocci_id/* drivers/s390/char/sclp_early_core.c 86 */;
	struct write_sccb {
		struct sccb_header header;
		struct msg_buf msg;
	}__packed cocci_id/* drivers/s390/char/sclp_early_core.c 78 */;
	unsigned long cocci_id/* drivers/s390/char/sclp_early_core.c 65 */;
	sclp_cmdw_t cocci_id/* drivers/s390/char/sclp_early_core.c 63 */;
	void *cocci_id/* drivers/s390/char/sclp_early_core.c 63 */;
	u16 cocci_id/* drivers/s390/char/sclp_early_core.c 311 */;
	union ctlreg0 cocci_id/* drivers/s390/char/sclp_early_core.c 31 */;
	struct read_storage_sccb *cocci_id/* drivers/s390/char/sclp_early_core.c 307 */;
	u64 cocci_id/* drivers/s390/char/sclp_early_core.c 304 */;
	void __weak __init cocci_id/* drivers/s390/char/sclp_early_core.c 304 */;
	psw_t cocci_id/* drivers/s390/char/sclp_early_core.c 30 */;
	unsigned long *cocci_id/* drivers/s390/char/sclp_early_core.c 291 */;
	int __init cocci_id/* drivers/s390/char/sclp_early_core.c 291 */;
	struct read_info_sccb *cocci_id/* drivers/s390/char/sclp_early_core.c 266 */;
	bool
sclp_mask_compat_mode
 cocci_id/* drivers/s390/char/sclp_early_core.c 25 */(.data);
	sclp_cmdw_t cocci_id/* drivers/s390/char/sclp_early_core.c 246 */[];
	int cocci_id/* drivers/s390/char/sclp_early_core.c 219 */;
	const char *cocci_id/* drivers/s390/char/sclp_early_core.c 217 */;
	unsigned int cocci_id/* drivers/s390/char/sclp_early_core.c 217 */;
	void cocci_id/* drivers/s390/char/sclp_early_core.c 217 */;
	int
sclp_init_state
 cocci_id/* drivers/s390/char/sclp_early_core.c 20 */(.data);
	struct init_sccb cocci_id/* drivers/s390/char/sclp_early_core.c 199 */;
	int *cocci_id/* drivers/s390/char/sclp_early_core.c 193 */;
	char *cocci_id/* drivers/s390/char/sclp_early_core.c 19 */;
	int cocci_id/* drivers/s390/char/sclp_early_core.c 18 */( );
	struct init_sccb *cocci_id/* drivers/s390/char/sclp_early_core.c 177 */;
	struct read_info_sccb cocci_id/* drivers/s390/char/sclp_early_core.c 17 */( );
	sccb_mask_t cocci_id/* drivers/s390/char/sclp_early_core.c 154 */;
	struct vt220_sccb *cocci_id/* drivers/s390/char/sclp_early_core.c 140 */;
	struct vt220_sccb {
		struct sccb_header header;
		struct {
			struct evbuf_header header;
			char data[];
		} msg;
	}__packed cocci_id/* drivers/s390/char/sclp_early_core.c 129 */;
	struct write_sccb cocci_id/* drivers/s390/char/sclp_early_core.c 114 */;
}
