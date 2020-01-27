cocci_test_suite() {
	unsigned long cocci_id/* drivers/tty/hvc/hvc_vio.c 72 */;
	struct hvterm_priv *cocci_id/* drivers/tty/hvc/hvc_vio.c 65 */[MAX_NR_HVC_CONSOLES];
	struct hvterm_priv {
		u32 termno;
		hv_protocol_t proto;
		struct hvsi_priv hvsi;
		spinlock_t buf_lock;
		char buf[SIZE_VIO_GET_CHARS];
		int left;
		int offset;
	} cocci_id/* drivers/tty/hvc/hvc_vio.c 56 */;
	enum hv_protocol{HV_PROTOCOL_RAW, HV_PROTOCOL_HVSI,} cocci_id/* drivers/tty/hvc/hvc_vio.c 51 */;
	const struct vio_device_id cocci_id/* drivers/tty/hvc/hvc_vio.c 43 */[];
	const char cocci_id/* drivers/tty/hvc/hvc_vio.c 41 */[];
	const struct hv_ops *cocci_id/* drivers/tty/hvc/hvc_vio.c 388 */;
	const __be32 *cocci_id/* drivers/tty/hvc/hvc_vio.c 387 */;
	void __init cocci_id/* drivers/tty/hvc/hvc_vio.c 385 */;
	int cocci_id/* drivers/tty/hvc/hvc_vio.c 376 */;
	int __init cocci_id/* drivers/tty/hvc/hvc_vio.c 374 */;
	void cocci_id/* drivers/tty/hvc/hvc_vio.c 374 */;
	struct vio_driver cocci_id/* drivers/tty/hvc/hvc_vio.c 365 */;
	struct hvterm_priv cocci_id/* drivers/tty/hvc/hvc_vio.c 339 */;
	hv_protocol_t cocci_id/* drivers/tty/hvc/hvc_vio.c 302 */;
	struct hvterm_priv *cocci_id/* drivers/tty/hvc/hvc_vio.c 301 */;
	struct hvc_struct *cocci_id/* drivers/tty/hvc/hvc_vio.c 300 */;
	const struct vio_device_id *cocci_id/* drivers/tty/hvc/hvc_vio.c 297 */;
	struct vio_dev *cocci_id/* drivers/tty/hvc/hvc_vio.c 296 */;
	volatile unsigned long cocci_id/* drivers/tty/hvc/hvc_vio.c 287 */;
	char cocci_id/* drivers/tty/hvc/hvc_vio.c 258 */;
	unsigned char cocci_id/* drivers/tty/hvc/hvc_vio.c 230 */[16];
	const struct hv_ops cocci_id/* drivers/tty/hvc/hvc_vio.c 217 */;
	unsigned int cocci_id/* drivers/tty/hvc/hvc_vio.c 201 */;
	const char *cocci_id/* drivers/tty/hvc/hvc_vio.c 146 */;
	uint32_t cocci_id/* drivers/tty/hvc/hvc_vio.c 136 */;
	char *cocci_id/* drivers/tty/hvc/hvc_vio.c 136 */;
}
