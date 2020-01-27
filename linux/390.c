cocci_test_suite() {
	struct inode *cocci_id/* kernel/printk/printk.c 995 */;
	__poll_t cocci_id/* kernel/printk/printk.c 972 */;
	poll_table *cocci_id/* kernel/printk/printk.c 972 */;
	struct lockdep_map cocci_id/* kernel/printk/printk.c 97 */;
	struct devkmsg_user *cocci_id/* kernel/printk/printk.c 936 */;
	loff_t cocci_id/* kernel/printk/printk.c 934 */;
	struct file *cocci_id/* kernel/printk/printk.c 934 */;
	loff_t *cocci_id/* kernel/printk/printk.c 869 */;
	char __user *cocci_id/* kernel/printk/printk.c 868 */;
	ssize_t cocci_id/* kernel/printk/printk.c 868 */;
	struct kiocb *cocci_id/* kernel/printk/printk.c 805 */;
	struct iov_iter *cocci_id/* kernel/printk/printk.c 805 */;
	va_list cocci_id/* kernel/printk/printk.c 795 */;
	struct devkmsg_user {
		u64 seq;
		u32 idx;
		struct ratelimit_state rs;
		struct mutex lock;
		char buf[CONSOLE_EXT_LOG_MAX];
	} cocci_id/* kernel/printk/printk.c 784 */;
	unsigned char cocci_id/* kernel/printk/printk.c 744 */;
	char cocci_id/* kernel/printk/printk.c 718 */[20];
	atomic_t cocci_id/* kernel/printk/printk.c 71 */;
	char **cocci_id/* kernel/printk/printk.c 708 */;
	char cocci_id/* kernel/printk/printk.c 708 */;
	int cocci_id/* kernel/printk/printk.c 63 */[4];
	u16 cocci_id/* kernel/printk/printk.c 606 */;
	u16 *cocci_id/* kernel/printk/printk.c 585 */;
	const char cocci_id/* kernel/printk/printk.c 583 */[];
	u32 *cocci_id/* kernel/printk/printk.c 566 */;
	struct printk_log cocci_id/* kernel/printk/printk.c 484 */;
	const struct printk_log *cocci_id/* kernel/printk/printk.c 482 */;
	char cocci_id/* kernel/printk/printk.c 459 */[__LOG_BUF_LEN]__aligned(LOG_ALIGN);
	u32 cocci_id/* kernel/printk/printk.c 443 */;
	u64 cocci_id/* kernel/printk/printk.c 442 */;
	struct printk_log {
		u64 ts_nsec;
		u16 len;
		u16 text_len;
		u16 dict_len;
		u8 facility;
		u8 flags:5;
		u8 level:3;

#ifdef CONFIG_PRINTK_CALLER

		u32 caller_id;

#endif

	}

#ifdef CONFIG_HAVE_EFFICIENT_UNALIGNED_ACCESS

__packed __aligned(4)

#endif
 cocci_id/* kernel/printk/printk.c 368 */;
	enum log_flags{LOG_NEWLINE=2, LOG_CONT=8,} cocci_id/* kernel/printk/printk.c 363 */;
	struct kmsg_dumper *cocci_id/* kernel/printk/printk.c 3114 */;
	enum kmsg_dump_reason cocci_id/* kernel/printk/printk.c 3112 */;
	bool cocci_id/* kernel/printk/printk.c 3101 */;
	unsigned long *cocci_id/* kernel/printk/printk.c 3030 */;
	const char *cocci_id/* kernel/printk/printk.c 3015 */;
	struct irq_work *cocci_id/* kernel/printk/printk.c 2948 */;
	enum con_msg_format_flags{MSG_FORMAT_DEFAULT=0, MSG_FORMAT_SYSLOG=(1 << 0),} cocci_id/* kernel/printk/printk.c 289 */;
	initcall_entry_t *cocci_id/* kernel/printk/printk.c 2870 */;
	initcall_t cocci_id/* kernel/printk/printk.c 2869 */;
	void __init cocci_id/* kernel/printk/printk.c 2866 */;
	struct console_cmdline cocci_id/* kernel/printk/printk.c 280 */[MAX_CMDLINECONSOLES];
	int __read_mostly cocci_id/* kernel/printk/printk.c 2617 */;
	struct tty_driver *cocci_id/* kernel/printk/printk.c 2579 */;
	int *cocci_id/* kernel/printk/printk.c 2579 */;
	enum con_flush_mode cocci_id/* kernel/printk/printk.c 2553 */;
	void __sched cocci_id/* kernel/printk/printk.c 2518 */;
	void cocci_id/* kernel/printk/printk.c 247 */;
	struct printk_log *cocci_id/* kernel/printk/printk.c 2409 */;
	char cocci_id/* kernel/printk/printk.c 2370 */[LOG_LINE_MAX + PREFIX_MAX];
	char cocci_id/* kernel/printk/printk.c 2369 */[CONSOLE_EXT_LOG_MAX];
	unsigned int cocci_id/* kernel/printk/printk.c 2267 */;
	unsigned long cocci_id/* kernel/printk/printk.c 226 */;
	char cocci_id/* kernel/printk/printk.c 2164 */[sizeof(console_cmdline[0].name) + 4];
	struct console_cmdline *cocci_id/* kernel/printk/printk.c 2120 */;
	char *cocci_id/* kernel/printk/printk.c 2117 */;
	int cocci_id/* kernel/printk/printk.c 2117 */;
	char cocci_id/* kernel/printk/printk.c 2103 */[512];
	char cocci_id/* kernel/printk/printk.c 1908 */[LOG_LINE_MAX];
	const u32 cocci_id/* kernel/printk/printk.c 1873 */;
	enum log_flags cocci_id/* kernel/printk/printk.c 1842 */;
	struct cont {
		char buf[LOG_LINE_MAX];
		size_t len;
		u32 caller_id;
		u64 ts_nsec;
		u8 level;
		u8 facility;
		enum log_flags flags;
	} cocci_id/* kernel/printk/printk.c 1821 */;
	struct console *cocci_id/* kernel/printk/printk.c 1771 */;
	size_t *cocci_id/* kernel/printk/printk.c 176 */;
	void __user *cocci_id/* kernel/printk/printk.c 176 */;
	struct ctl_table *cocci_id/* kernel/printk/printk.c 175 */;
	char cocci_id/* kernel/printk/printk.c 173 */[DEVKMSG_STR_MAX_SIZE];
	struct task_struct *cocci_id/* kernel/printk/printk.c 1635 */;
	const size_t cocci_id/* kernel/printk/printk.c 1316 */;
	char cocci_id/* kernel/printk/printk.c 1315 */[PREFIX_MAX];
	char cocci_id/* kernel/printk/printk.c 1278 */[12];
	unsigned long long cocci_id/* kernel/printk/printk.c 1229 */;
	size_t cocci_id/* kernel/printk/printk.c 121 */;
	int __init cocci_id/* kernel/printk/printk.c 1209 */;
	bool __read_mostly cocci_id/* kernel/printk/printk.c 1184 */;
	unsigned int __read_mostly cocci_id/* kernel/printk/printk.c 117 */;
	unsigned long __initdata cocci_id/* kernel/printk/printk.c 1084 */;
	enum devkmsg_log_masks{DEVKMSG_LOG_MASK_ON=BIT(__DEVKMSG_LOG_BIT_ON), DEVKMSG_LOG_MASK_OFF=BIT(__DEVKMSG_LOG_BIT_OFF), DEVKMSG_LOG_MASK_LOCK=BIT(__DEVKMSG_LOG_BIT_LOCK),} cocci_id/* kernel/printk/printk.c 108 */;
	const struct file_operations cocci_id/* kernel/printk/printk.c 1043 */;
	enum devkmsg_log_bits{__DEVKMSG_LOG_BIT_ON=0, __DEVKMSG_LOG_BIT_OFF, __DEVKMSG_LOG_BIT_LOCK,} cocci_id/* kernel/printk/printk.c 102 */;
	struct devkmsg_user cocci_id/* kernel/printk/printk.c 1011 */;
	__typeof__(struct irq_work) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
