cocci_test_suite() {
	union nl_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 909 */;
	__le16 cocci_id/* drivers/tty/ipwireless/hardware.c 872 */;
	unsigned char cocci_id/* drivers/tty/ipwireless/hardware.c 858 */[LL_MTU_MAX];
	const union nl_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 812 */;
	struct ipw_control_packet_body cocci_id/* drivers/tty/ipwireless/hardware.c 773 */;
	const struct ipw_control_packet_body *cocci_id/* drivers/tty/ipwireless/hardware.c 769 */;
	struct ipw_rx_packet cocci_id/* drivers/tty/ipwireless/hardware.c 713 */;
	struct ipw_rx_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 711 */;
	struct ipw_hardware cocci_id/* drivers/tty/ipwireless/hardware.c 706 */;
	struct work_struct *cocci_id/* drivers/tty/ipwireless/hardware.c 703 */;
	struct ipw_rx_packet **cocci_id/* drivers/tty/ipwireless/hardware.c 640 */;
	const int cocci_id/* drivers/tty/ipwireless/hardware.c 571 */;
	union nl_packet cocci_id/* drivers/tty/ipwireless/hardware.c 464 */;
	struct timing_stats {
		unsigned long last_report_time;
		unsigned long read_time;
		unsigned long write_time;
		unsigned long read_bytes;
		unsigned long write_bytes;
		unsigned long start_time;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 44 */;
	unsigned long cocci_id/* drivers/tty/ipwireless/hardware.c 408 */;
	unsigned char *cocci_id/* drivers/tty/ipwireless/hardware.c 404 */;
	void cocci_id/* drivers/tty/ipwireless/hardware.c 37 */(struct ipw_hardware *hw,
								unsigned int channel_idx,
								const unsigned char *data,
								int len);
	char cocci_id/* drivers/tty/ipwireless/hardware.c 366 */[56];
	const char *cocci_id/* drivers/tty/ipwireless/hardware.c 363 */;
	void cocci_id/* drivers/tty/ipwireless/hardware.c 36 */(struct timer_list *t);
	struct nl_packet_header *cocci_id/* drivers/tty/ipwireless/hardware.c 345 */;
	const unsigned char *cocci_id/* drivers/tty/ipwireless/hardware.c 343 */;
	char *cocci_id/* drivers/tty/ipwireless/hardware.c 343 */;
	unsigned cocci_id/* drivers/tty/ipwireless/hardware.c 343 */;
	struct ipw_rx_packet {
		struct list_head queue;
		unsigned int capacity;
		unsigned int length;
		unsigned int protocol;
		unsigned int channel_idx;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 335 */;
	struct ipw_control_packet {
		struct ipw_tx_packet header;
		struct ipw_control_packet_body body;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 330 */;
	struct ipw_control_packet_body {
		unsigned char sig_no;
		unsigned char value;
	}__attribute__((__packed__)) cocci_id/* drivers/tty/ipwireless/hardware.c 323 */;
	void cocci_id/* drivers/tty/ipwireless/hardware.c 32 */(struct ipw_hardware *ipw,
								unsigned int address,
								const unsigned char *data,
								int len,
								int is_last);
	void cocci_id/* drivers/tty/ipwireless/hardware.c 31 */(struct ipw_hardware *hw);
	struct ipw_tx_packet {
		struct list_head queue;
		unsigned char dest_addr;
		unsigned char protocol;
		unsigned short length;
		unsigned long offset;
		int fragment_count;
		void (*packet_callback)(void *cb_data,
					unsigned int packet_length);
		void *callback_data;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 294 */;
	struct ipw_hardware {
		unsigned int base_port;
		short hw_version;
		unsigned short ll_mtu;
		spinlock_t lock;
		int initializing;
		int init_loops;
		struct timer_list setup_timer;
		int tx_ready;
		int tx_queued;
		struct list_head tx_queue[NL_NUM_OF_PRIORITIES];
		int rx_bytes_queued;
		struct list_head rx_queue;
		struct list_head rx_pool;
		int rx_pool_size;
		int blocking_rx;
		int rx_ready;
		unsigned short last_memtx_serial;
		int serial_number_detected;
		struct work_struct work_rx;
		int to_setup;
		int removed;
		int irq;
		int shutting_down;
		unsigned int control_lines[NL_NUM_OF_ADDRESSES];
		struct ipw_rx_packet *packet_assembler[NL_NUM_OF_ADDRESSES];
		struct tasklet_struct tasklet;
		struct ipw_network *network;
		struct MEMINFREG __iomem *memory_info_regs;
		struct MEMCCR __iomem *memregs_CCR;
		void (*reboot_callback)(void *data);
		void *reboot_callback_data;
		unsigned short __iomem *memreg_tx;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 229 */;
	struct MEMINFREG {
		unsigned short memreg_tx_old;
		unsigned short pad1;
		unsigned short memreg_rx_done;
		unsigned short pad2;
		unsigned short memreg_rx;
		unsigned short pad3;
		unsigned short memreg_pc_interrupt_ack;
		unsigned short pad4;
		unsigned long memreg_card_present;
		unsigned short memreg_tx_new;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 204 */;
	struct MEMCCR {
		unsigned short reg_config_option;
		unsigned short reg_config_and_status;
		unsigned short reg_pin_replacement;
		unsigned short reg_socket_and_copy;
		unsigned short reg_ext_status;
		unsigned short reg_io_base;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 195 */;
	struct ipw_network *cocci_id/* drivers/tty/ipwireless/hardware.c 1767 */;
	struct timer_list *cocci_id/* drivers/tty/ipwireless/hardware.c 1677 */;
	struct MEMINFREG __iomem *cocci_id/* drivers/tty/ipwireless/hardware.c 1662 */;
	unsigned short __iomem *cocci_id/* drivers/tty/ipwireless/hardware.c 1661 */;
	struct MEMCCR __iomem *cocci_id/* drivers/tty/ipwireless/hardware.c 1660 */;
	void (*cocci_id/* drivers/tty/ipwireless/hardware.c 1650 */)(void *data);
	void __iomem *cocci_id/* drivers/tty/ipwireless/hardware.c 1647 */;
	struct TlSetupRebootMsgAck cocci_id/* drivers/tty/ipwireless/hardware.c 1584 */;
	struct ipw_setup_reboot_msg_ack cocci_id/* drivers/tty/ipwireless/hardware.c 1575 */;
	struct ipw_setup_reboot_msg_ack *cocci_id/* drivers/tty/ipwireless/hardware.c 1570 */;
	union nl_packet {
		struct nl_first_packet_header hdr_first;
		struct nl_packet_header hdr;
		unsigned char rawpkt[LL_MTU_MAX];
	}__attribute__((__packed__)) cocci_id/* drivers/tty/ipwireless/hardware.c 154 */;
	const union ipw_setup_rx_msg *cocci_id/* drivers/tty/ipwireless/hardware.c 1534 */;
	struct tl_setup_get_version_qry cocci_id/* drivers/tty/ipwireless/hardware.c 1521 */;
	struct ipw_setup_get_version_query_packet cocci_id/* drivers/tty/ipwireless/hardware.c 1516 */;
	struct ipw_setup_get_version_query_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 1513 */;
	struct tl_setup_info_msg cocci_id/* drivers/tty/ipwireless/hardware.c 1479 */;
	struct ipw_setup_info_packet cocci_id/* drivers/tty/ipwireless/hardware.c 1473 */;
	struct tl_setup_open_msg cocci_id/* drivers/tty/ipwireless/hardware.c 1442 */;
	struct ipw_setup_open_packet cocci_id/* drivers/tty/ipwireless/hardware.c 1436 */;
	struct tl_setup_config_done_msg cocci_id/* drivers/tty/ipwireless/hardware.c 1430 */;
	struct nl_packet_header {
		unsigned char protocol:3;
		unsigned char address:3;
		unsigned char packet_rank:2;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 143 */;
	struct ipw_setup_config_done_packet cocci_id/* drivers/tty/ipwireless/hardware.c 1424 */;
	struct tl_setup_config_msg cocci_id/* drivers/tty/ipwireless/hardware.c 1417 */;
	struct ipw_setup_config_packet cocci_id/* drivers/tty/ipwireless/hardware.c 1411 */;
	unsigned int cocci_id/* drivers/tty/ipwireless/hardware.c 1406 */;
	int cocci_id/* drivers/tty/ipwireless/hardware.c 1405 */;
	struct ipw_setup_info_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 1404 */;
	struct ipw_setup_open_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 1403 */;
	struct ipw_setup_config_done_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 1402 */;
	struct ipw_setup_config_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 1401 */;
	struct ipw_hardware *cocci_id/* drivers/tty/ipwireless/hardware.c 1399 */;
	void cocci_id/* drivers/tty/ipwireless/hardware.c 1399 */;
	struct ipw_setup_reboot_msg_ack {
		struct ipw_tx_packet header;
		struct TlSetupRebootMsgAck body;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 1393 */;
	struct ipw_setup_info_packet {
		struct ipw_tx_packet header;
		struct tl_setup_info_msg body;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 1388 */;
	struct ipw_setup_open_packet {
		struct ipw_tx_packet header;
		struct tl_setup_open_msg body;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 1383 */;
	struct ipw_setup_config_done_packet {
		struct ipw_tx_packet header;
		struct tl_setup_config_done_msg body;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 1378 */;
	struct ipw_setup_config_packet {
		struct ipw_tx_packet header;
		struct tl_setup_config_msg body;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 1373 */;
	struct ipw_setup_get_version_query_packet {
		struct ipw_tx_packet header;
		struct tl_setup_get_version_qry body;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 1368 */;
	struct nl_first_packet_header {
		unsigned char protocol:3;
		unsigned char address:3;
		unsigned char packet_rank:2;
		unsigned char length_lsb;
		unsigned char length_msb;
	} cocci_id/* drivers/tty/ipwireless/hardware.c 135 */;
	struct ipw_control_packet cocci_id/* drivers/tty/ipwireless/hardware.c 1323 */;
	void (*cocci_id/* drivers/tty/ipwireless/hardware.c 1296 */)(void *cb,
								     unsigned int length);
	struct ipw_tx_packet cocci_id/* drivers/tty/ipwireless/hardware.c 1288 */;
	struct ipw_control_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 1280 */;
	unsigned char cocci_id/* drivers/tty/ipwireless/hardware.c 1271 */;
	void *cocci_id/* drivers/tty/ipwireless/hardware.c 1270 */;
	struct ipw_tx_packet *cocci_id/* drivers/tty/ipwireless/hardware.c 1255 */;
	struct ipw_dev *cocci_id/* drivers/tty/ipwireless/hardware.c 1217 */;
	enum{TL_PROTOCOLID_COM_DATA=0, TL_PROTOCOLID_COM_CTRL=1, TL_PROTOCOLID_SETUP=2,} cocci_id/* drivers/tty/ipwireless/hardware.c 116 */;
	unsigned short cocci_id/* drivers/tty/ipwireless/hardware.c 1096 */;
	irqreturn_t cocci_id/* drivers/tty/ipwireless/hardware.c 1057 */;
}
