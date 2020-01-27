cocci_test_suite() {
	struct ports_bmp {
		u64 status;
		u64 unused[3];
	}__attribute__((aligned(32))) cocci_id/* drivers/ps3/ps3-vuart.c 97 */;
	struct ports_bmp cocci_id/* drivers/ps3/ps3-vuart.c 917 */;
	struct vuart_bus_priv *cocci_id/* drivers/ps3/ps3-vuart.c 879 */;
	irqreturn_t cocci_id/* drivers/ps3/ps3-vuart.c 877 */;
	struct vuart_bus_priv {
		struct ports_bmp *bmp;
		unsigned int virq;
		struct mutex probe_mutex;
		int use_count;
		struct ps3_system_bus_device *devices[PORT_COUNT];
	} cocci_id/* drivers/ps3/ps3-vuart.c 861 */;
	unsigned long cocci_id/* drivers/ps3/ps3-vuart.c 782 */;
	struct list_buffer *cocci_id/* drivers/ps3/ps3-vuart.c 723 */;
	struct ps3_system_bus_device *cocci_id/* drivers/ps3/ps3-vuart.c 704 */;
	struct work_struct *cocci_id/* drivers/ps3/ps3-vuart.c 661 */;
	struct ps3_vuart_port_priv {
		u64 interrupt_mask;
		struct {
			spinlock_t lock;
			struct list_head head;
		} tx_list;
		struct {
			struct ps3_vuart_work work;
			unsigned long bytes_held;
			spinlock_t lock;
			struct list_head head;
		} rx_list;
		struct ps3_vuart_stats stats;
	} cocci_id/* drivers/ps3/ps3-vuart.c 66 */;
	struct list_buffer cocci_id/* drivers/ps3/ps3-vuart.c 567 */;
	enum vuart_interrupt_mask{INTERRUPT_MASK_TX=1, INTERRUPT_MASK_RX=2, INTERRUPT_MASK_DISCONNECT=4,} cocci_id/* drivers/ps3/ps3-vuart.c 56 */;
	enum vuart_interrupt_bit{INTERRUPT_BIT_TX=0, INTERRUPT_BIT_RX=1, INTERRUPT_BIT_DISCONNECT=2,} cocci_id/* drivers/ps3/ps3-vuart.c 50 */;
	struct list_buffer {
		struct list_head link;
		const unsigned char *head;
		const unsigned char *tail;
		unsigned long dbg_number;
		unsigned char data[];
	} cocci_id/* drivers/ps3/ps3-vuart.c 456 */;
	void *cocci_id/* drivers/ps3/ps3-vuart.c 420 */;
	struct ps3_vuart_port_priv *cocci_id/* drivers/ps3/ps3-vuart.c 418 */;
	enum vuart_param{PARAM_TX_TRIGGER=0, PARAM_RX_TRIGGER=1, PARAM_INTERRUPT_MASK=2, PARAM_RX_BUF_SIZE=3, PARAM_RX_BYTES=4, PARAM_TX_BUF_SIZE=5, PARAM_TX_BYTES=6, PARAM_INTERRUPT_STATUS=7,} cocci_id/* drivers/ps3/ps3-vuart.c 39 */;
	enum{PORT_COUNT=3,} cocci_id/* drivers/ps3/ps3-vuart.c 37 */;
	const void *cocci_id/* drivers/ps3/ps3-vuart.c 352 */;
	unsigned long *cocci_id/* drivers/ps3/ps3-vuart.c 269 */;
	u64 *cocci_id/* drivers/ps3/ps3-vuart.c 226 */;
	struct vuart_triggers *cocci_id/* drivers/ps3/ps3-vuart.c 143 */;
	u64 cocci_id/* drivers/ps3/ps3-vuart.c 126 */;
	struct ps3_vuart_port_driver *cocci_id/* drivers/ps3/ps3-vuart.c 1224 */;
	void __exit cocci_id/* drivers/ps3/ps3-vuart.c 1212 */;
	void cocci_id/* drivers/ps3/ps3-vuart.c 1212 */;
	int __init cocci_id/* drivers/ps3/ps3-vuart.c 1200 */;
	const char *cocci_id/* drivers/ps3/ps3-vuart.c 114 */[];
	const char *cocci_id/* drivers/ps3/ps3-vuart.c 111 */;
	int cocci_id/* drivers/ps3/ps3-vuart.c 111 */;
	unsigned int cocci_id/* drivers/ps3/ps3-vuart.c 110 */;
	void __maybe_unused cocci_id/* drivers/ps3/ps3-vuart.c 110 */;
	const struct ports_bmp *cocci_id/* drivers/ps3/ps3-vuart.c 104 */;
	struct ps3_vuart_port_priv cocci_id/* drivers/ps3/ps3-vuart.c 1019 */;
}
