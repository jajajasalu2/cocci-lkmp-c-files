cocci_test_suite() {
	struct connection cocci_id/* arch/um/drivers/port_kern.c 95 */;
	struct connection *cocci_id/* arch/um/drivers/port_kern.c 47 */;
	irqreturn_t cocci_id/* arch/um/drivers/port_kern.c 45 */;
	void *cocci_id/* arch/um/drivers/port_kern.c 45 */;
	int cocci_id/* arch/um/drivers/port_kern.c 45 */;
	struct connection {
		struct list_head list;
		int fd;
		int helper_pid;
		int socket[2];
		int telnetd_pid;
		struct port_list *port;
	} cocci_id/* arch/um/drivers/port_kern.c 36 */;
	struct port_dev {
		struct port_list *port;
		int helper_pid;
		int telnetd_pid;
	} cocci_id/* arch/um/drivers/port_kern.c 30 */;
	struct port_list cocci_id/* arch/um/drivers/port_kern.c 297 */;
	struct port_list *cocci_id/* arch/um/drivers/port_kern.c 294 */;
	struct list_head *cocci_id/* arch/um/drivers/port_kern.c 293 */;
	void cocci_id/* arch/um/drivers/port_kern.c 291 */;
	struct port_dev cocci_id/* arch/um/drivers/port_kern.c 203 */;
	struct port_list {
		struct list_head list;
		atomic_t wait_count;
		int has_connection;
		struct completion done;
		int port;
		int fd;
		spinlock_t lock;
		struct list_head pending;
		struct list_head connections;
	} cocci_id/* arch/um/drivers/port_kern.c 18 */;
	struct port_dev *cocci_id/* arch/um/drivers/port_kern.c 162 */;
	unsigned long cocci_id/* arch/um/drivers/port_kern.c 132 */;
	struct work_struct *cocci_id/* arch/um/drivers/port_kern.c 128 */;
}
