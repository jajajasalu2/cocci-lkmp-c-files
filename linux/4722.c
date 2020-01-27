cocci_test_suite() {
	enum xp_retval (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 87 */)(short,
									 void *);
	void (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 86 */)(short, int,
							       void *);
	enum xp_retval (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 84 */)(short,
									 int,
									 u32,
									 void *,
									 u16,
									 xpc_notify_func,
									 void *);
	enum xp_retval (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 83 */)(short,
									 int,
									 u32,
									 void *,
									 u16);
	void (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 81 */)(int);
	struct xpc_interface cocci_id/* drivers/misc/sgi-xp/xp_main.c 74 */;
	struct xpc_registration cocci_id/* drivers/misc/sgi-xp/xp_main.c 68 */[XPC_MAX_NCHANNELS];
	enum xp_retval (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 57 */)(unsigned long phys_addr,
									 unsigned long size);
	int (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 54 */)(int cpuid);
	enum xp_retval (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 50 */)(unsigned long dst_gpa,
									 const unsigned long src_gpa,
									 size_t len);
	unsigned long (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 47 */)(unsigned long gpa);
	unsigned long (*cocci_id/* drivers/misc/sgi-xp/xp_main.c 44 */)(void *addr);
	u8 cocci_id/* drivers/misc/sgi-xp/xp_main.c 41 */;
	short cocci_id/* drivers/misc/sgi-xp/xp_main.c 35 */;
	struct device *cocci_id/* drivers/misc/sgi-xp/xp_main.c 32 */;
	struct device cocci_id/* drivers/misc/sgi-xp/xp_main.c 27 */;
	void cocci_id/* drivers/misc/sgi-xp/xp_main.c 250 */;
	void __exit cocci_id/* drivers/misc/sgi-xp/xp_main.c 249 */;
	int cocci_id/* drivers/misc/sgi-xp/xp_main.c 230 */;
	struct device_driver cocci_id/* drivers/misc/sgi-xp/xp_main.c 23 */;
	enum xp_retval cocci_id/* drivers/misc/sgi-xp/xp_main.c 229 */;
	int __init cocci_id/* drivers/misc/sgi-xp/xp_main.c 226 */;
	struct xpc_registration *cocci_id/* drivers/misc/sgi-xp/xp_main.c 136 */;
	u32 cocci_id/* drivers/misc/sgi-xp/xp_main.c 134 */;
	xpc_channel_func cocci_id/* drivers/misc/sgi-xp/xp_main.c 133 */;
	u16 cocci_id/* drivers/misc/sgi-xp/xp_main.c 133 */;
	void *cocci_id/* drivers/misc/sgi-xp/xp_main.c 133 */;
}
