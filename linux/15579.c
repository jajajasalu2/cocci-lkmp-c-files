cocci_test_suite() {
	struct tty_port *cocci_id/* drivers/staging/fwserial/fwserial.c 975 */;
	struct fwtty_port **cocci_id/* drivers/staging/fwserial/fwserial.c 860 */;
	struct fwtty_transaction {
		struct fw_transaction fw_txn;
		fwtty_transaction_cb callback;
		struct fwtty_port *port;
		union {
			struct dma_pending dma_pended;
		};
	} cocci_id/* drivers/staging/fwserial/fwserial.c 86 */;
	struct kref *cocci_id/* drivers/staging/fwserial/fwserial.c 857 */;
	void (*cocci_id/* drivers/staging/fwserial/fwserial.c 82 */)(struct fw_card *card,
								     int rcode,
								     void *data,
								     size_t length,
								     struct fwtty_transaction *txn);
	struct dentry *cocci_id/* drivers/staging/fwserial/fwserial.c 79 */;
	struct tty_driver *cocci_id/* drivers/staging/fwserial/fwserial.c 77 */;
	struct kmem_cache *cocci_id/* drivers/staging/fwserial/fwserial.c 74 */;
	unsigned int *cocci_id/* drivers/staging/fwserial/fwserial.c 626 */;
	struct fwtty_port *cocci_id/* drivers/staging/fwserial/fwserial.c 62 */[MAX_TOTAL_PORTS];
	unsigned char *cocci_id/* drivers/staging/fwserial/fwserial.c 528 */;
	const char cocci_id/* drivers/staging/fwserial/fwserial.c 501 */[16];
	struct fwtty_port *cocci_id/* drivers/staging/fwserial/fwserial.c 387 */;
	unsigned int cocci_id/* drivers/staging/fwserial/fwserial.c 387 */;
	 cocci_id/* drivers/staging/fwserial/fwserial.c 38 */(loop,
							      create_loop_dev,
							      bool,0644);
	 cocci_id/* drivers/staging/fwserial/fwserial.c 37 */(auto,
							      auto_connect,
							      bool,0644);
	bool cocci_id/* drivers/staging/fwserial/fwserial.c 33 */;
	 cocci_id/* drivers/staging/fwserial/fwserial.c 2891 */(loop,
								"Create a loopback device, fwloop<n>, with ttys");
	 cocci_id/* drivers/staging/fwserial/fwserial.c 2890 */(auto,
								"Auto-connect a tty to each firewire node discovered");
	void __exit cocci_id/* drivers/staging/fwserial/fwserial.c 2867 */;
	struct fwserial_mgmt_pkt cocci_id/* drivers/staging/fwserial/fwserial.c 2819 */;
	struct fwtty_transaction cocci_id/* drivers/staging/fwserial/fwserial.c 2805 */;
	int __init cocci_id/* drivers/staging/fwserial/fwserial.c 2742 */;
	void *cocci_id/* drivers/staging/fwserial/fwserial.c 2713 */;
	struct fw_request *cocci_id/* drivers/staging/fwserial/fwserial.c 2709 */;
	struct fw_address_handler cocci_id/* drivers/staging/fwserial/fwserial.c 2464 */;
	const struct fw_address_region cocci_id/* drivers/staging/fwserial/fwserial.c 2459 */;
	u32 *cocci_id/* drivers/staging/fwserial/fwserial.c 2452 */;
	u32 cocci_id/* drivers/staging/fwserial/fwserial.c 2450 */;
	struct fw_descriptor cocci_id/* drivers/staging/fwserial/fwserial.c 2449 */;
	struct fwserial_unit_directory_data cocci_id/* drivers/staging/fwserial/fwserial.c 2434 */;
	struct fwserial_unit_directory_data {
		u32 len_crc;
		u32 unit_specifier;
		u32 unit_sw_version;
		u32 unit_addr_offset;
		u32 desc1_ofs;
		u32 desc1_len_crc;
		u32 desc1_data[5];
	}__packed cocci_id/* drivers/staging/fwserial/fwserial.c 2424 */;
	struct fw_driver cocci_id/* drivers/staging/fwserial/fwserial.c 2402 */;
	const struct ieee1394_device_id cocci_id/* drivers/staging/fwserial/fwserial.c 2392 */[];
	const struct ieee1394_device_id *cocci_id/* drivers/staging/fwserial/fwserial.c 2318 */;
	fwtty_transaction_cb cocci_id/* drivers/staging/fwserial/fwserial.c 229 */;
	u64 cocci_id/* drivers/staging/fwserial/fwserial.c 22 */;
	__be32 cocci_id/* drivers/staging/fwserial/fwserial.c 22 */;
	struct fwtty_transaction *cocci_id/* drivers/staging/fwserial/fwserial.c 217 */;
	struct virt_plug_params cocci_id/* drivers/staging/fwserial/fwserial.c 2060 */;
	struct fw_csr_iterator cocci_id/* drivers/staging/fwserial/fwserial.c 1999 */;
	struct device *cocci_id/* drivers/staging/fwserial/fwserial.c 1996 */;
	struct fw_unit *cocci_id/* drivers/staging/fwserial/fwserial.c 1994 */;
	struct work_struct *cocci_id/* drivers/staging/fwserial/fwserial.c 1961 */;
	unsigned long long cocci_id/* drivers/staging/fwserial/fwserial.c 1954 */;
	int cocci_id/* drivers/staging/fwserial/fwserial.c 1950 */;
	struct fwtty_peer *cocci_id/* drivers/staging/fwserial/fwserial.c 1943 */;
	struct fw_serial *cocci_id/* drivers/staging/fwserial/fwserial.c 1942 */;
	struct fw_card *cocci_id/* drivers/staging/fwserial/fwserial.c 1940 */;
	void cocci_id/* drivers/staging/fwserial/fwserial.c 1940 */;
	struct fw_device *cocci_id/* drivers/staging/fwserial/fwserial.c 185 */;
	struct timer_list *cocci_id/* drivers/staging/fwserial/fwserial.c 1750 */;
	struct fwserial_mgmt_pkt *cocci_id/* drivers/staging/fwserial/fwserial.c 1589 */;
	size_t cocci_id/* drivers/staging/fwserial/fwserial.c 1580 */;
	struct virt_plug_params *cocci_id/* drivers/staging/fwserial/fwserial.c 1575 */;
	const struct fwserial_mgmt_pkt cocci_id/* drivers/staging/fwserial/fwserial.c 1555 */;
	__be16 cocci_id/* drivers/staging/fwserial/fwserial.c 1553 */;
	const struct tty_operations cocci_id/* drivers/staging/fwserial/fwserial.c 1531 */;
	const struct tty_port_operations cocci_id/* drivers/staging/fwserial/fwserial.c 1501 */;
	struct seq_file *cocci_id/* drivers/staging/fwserial/fwserial.c 1435 */;
	char cocci_id/* drivers/staging/fwserial/fwserial.c 142 */[10];
	struct stats cocci_id/* drivers/staging/fwserial/fwserial.c 1417 */;
	struct serial_icounter_struct *cocci_id/* drivers/staging/fwserial/fwserial.c 1376 */;
	struct stats *cocci_id/* drivers/staging/fwserial/fwserial.c 136 */;
	long cocci_id/* drivers/staging/fwserial/fwserial.c 1314 */;
	struct ktermios *cocci_id/* drivers/staging/fwserial/fwserial.c 1272 */;
	struct fwtty_peer *cocci_id/* drivers/staging/fwserial/fwserial.c 124 */(struct fw_card *card,
										 int generation,
										 int id);
	struct serial_struct *cocci_id/* drivers/staging/fwserial/fwserial.c 1216 */;
	struct async_icount cocci_id/* drivers/staging/fwserial/fwserial.c 1190 */;
	struct async_icount *cocci_id/* drivers/staging/fwserial/fwserial.c 1188 */;
	unsigned long cocci_id/* drivers/staging/fwserial/fwserial.c 1187 */;
	char cocci_id/* drivers/staging/fwserial/fwserial.c 1144 */;
	const unsigned char *cocci_id/* drivers/staging/fwserial/fwserial.c 1093 */;
	struct tty_struct *cocci_id/* drivers/staging/fwserial/fwserial.c 1080 */;
	struct file *cocci_id/* drivers/staging/fwserial/fwserial.c 1045 */;
}
