cocci_test_suite() {
	void *cocci_id/* arch/sparc/kernel/ldc.c 979 */;
	struct ldc_packet **cocci_id/* arch/sparc/kernel/ldc.c 976 */;
	unsigned long *cocci_id/* arch/sparc/kernel/ldc.c 976 */;
	struct ldc_channel *cocci_id/* arch/sparc/kernel/ldc.c 966 */;
	int cocci_id/* arch/sparc/kernel/ldc.c 964 */;
	struct ldc_mode_ops {
		int (*write)(struct ldc_channel *, const void *, unsigned int);
		int (*read)(struct ldc_channel *, void *, unsigned int);
	} cocci_id/* arch/sparc/kernel/ldc.c 94 */;
	struct ldc_channel cocci_id/* arch/sparc/kernel/ldc.c 92 */;
	struct ldc_version cocci_id/* arch/sparc/kernel/ldc.c 85 */[];
	struct ldc_version {
		u16 major;
		u16 minor;
	} cocci_id/* arch/sparc/kernel/ldc.c 79 */;
	irqreturn_t cocci_id/* arch/sparc/kernel/ldc.c 789 */;
	u32 cocci_id/* arch/sparc/kernel/ldc.c 761 */;
	struct ldc_version cocci_id/* arch/sparc/kernel/ldc.c 592 */;
	u16 cocci_id/* arch/sparc/kernel/ldc.c 558 */;
	struct ldc_version *cocci_id/* arch/sparc/kernel/ldc.c 558 */;
	struct ldc_packet {
		u8 type;
#define LDC_CTRL 0x01
#define LDC_DATA 0x02
#define LDC_ERR 0x10
		u8 stype;
#define LDC_INFO 0x01
#define LDC_ACK 0x02
#define LDC_NACK 0x04
		u8 ctrl;
#define LDC_VERS 0x01
#define LDC_RTS 0x02
#define LDC_RTR 0x03
#define LDC_RDX 0x04
#define LDC_CTRL_MSK 0x0f
		u8 env;
#define LDC_LEN 0x3f
#define LDC_FRAG_MASK 0xc0
#define LDC_START 0x40
#define LDC_STOP 0x80
		u32 seqid;
		union {
			u8 u_data[LDC_PACKET_SIZE - 8];
			struct {
				u32 pad;
				u32 ackid;
				u8 r_data[LDC_PACKET_SIZE - 8 - 8];
			} r;
		} u;
	} cocci_id/* arch/sparc/kernel/ldc.c 43 */;
	char cocci_id/* arch/sparc/kernel/ldc.c 36 */[];
	u8 cocci_id/* arch/sparc/kernel/ldc.c 350 */;
	const u64 *cocci_id/* arch/sparc/kernel/ldc.c 2390 */;
	struct mdesc_handle *cocci_id/* arch/sparc/kernel/ldc.c 2389 */;
	int __init cocci_id/* arch/sparc/kernel/ldc.c 2386 */;
	struct ldc_trans_cookie *cocci_id/* arch/sparc/kernel/ldc.c 2354 */;
	int *cocci_id/* arch/sparc/kernel/ldc.c 2354 */;
	unsigned int cocci_id/* arch/sparc/kernel/ldc.c 2353 */;
	struct cookie_state cocci_id/* arch/sparc/kernel/ldc.c 2154 */;
	struct scatterlist *cocci_id/* arch/sparc/kernel/ldc.c 2148 */;
	u64 cocci_id/* arch/sparc/kernel/ldc.c 2089 */;
	struct cookie_state *cocci_id/* arch/sparc/kernel/ldc.c 2084 */;
	struct cookie_state {
		struct ldc_mtable_entry *page_table;
		struct ldc_trans_cookie *cookies;
		u64 mte_base;
		u64 prev_cookie;
		u32 pte_idx;
		u32 nc;
	} cocci_id/* arch/sparc/kernel/ldc.c 2075 */;
	long cocci_id/* arch/sparc/kernel/ldc.c 2020 */;
	struct ldc_mtable_entry *cocci_id/* arch/sparc/kernel/ldc.c 2017 */;
	struct ldc_iommu *cocci_id/* arch/sparc/kernel/ldc.c 2017 */;
	unsigned long cocci_id/* arch/sparc/kernel/ldc.c 201 */;
	const void *cocci_id/* arch/sparc/kernel/ldc.c 1937 */;
	struct ldc_packet *cocci_id/* arch/sparc/kernel/ldc.c 1660 */;
	u8 *cocci_id/* arch/sparc/kernel/ldc.c 1597 */;
	const char *cocci_id/* arch/sparc/kernel/ldc.c 1486 */;
	void cocci_id/* arch/sparc/kernel/ldc.c 1486 */;
	const struct ldc_mode_ops *cocci_id/* arch/sparc/kernel/ldc.c 1125 */;
	const struct ldc_channel_config *cocci_id/* arch/sparc/kernel/ldc.c 1120 */;
	struct ldc_channel {
		spinlock_t lock;
		unsigned long id;
		u8 *mssbuf;
		u32 mssbuf_len;
		u32 mssbuf_off;
		struct ldc_packet *tx_base;
		unsigned long tx_head;
		unsigned long tx_tail;
		unsigned long tx_num_entries;
		unsigned long tx_ra;
		unsigned long tx_acked;
		struct ldc_packet *rx_base;
		unsigned long rx_head;
		unsigned long rx_tail;
		unsigned long rx_num_entries;
		unsigned long rx_ra;
		u32 rcv_nxt;
		u32 snd_nxt;
		unsigned long chan_state;
		struct ldc_channel_config cfg;
		void *event_arg;
		const struct ldc_mode_ops *mops;
		struct ldc_iommu iommu;
		struct ldc_version ver;
		u8 hs_state;
#define LDC_HS_CLOSED 0x00
#define LDC_HS_OPEN 0x01
#define LDC_HS_GOTVERS 0x02
#define LDC_HS_SENTRTR 0x03
#define LDC_HS_GOTRTR 0x04
#define LDC_HS_COMPLETE 0x10
		u8 flags;
#define LDC_FLAG_ALLOCED_QUEUES 0x01
#define LDC_FLAG_REGISTERED_QUEUES 0x02
#define LDC_FLAG_REGISTERED_IRQS 0x04
#define LDC_FLAG_RESET 0x10
		u8 mss;
		u8 state;
#define LDC_IRQ_NAME_MAX 32
		char rx_irq_name[LDC_IRQ_NAME_MAX];
		char tx_irq_name[LDC_IRQ_NAME_MAX];
		struct hlist_head mh_list;
		struct hlist_node list;
	} cocci_id/* arch/sparc/kernel/ldc.c 112 */;
	struct ldc_mtable_entry cocci_id/* arch/sparc/kernel/ldc.c 1051 */;
	struct ldc_iommu {
		spinlock_t lock;
		struct ldc_mtable_entry *page_table;
		struct iommu_map_table iommu_map_table;
	} cocci_id/* arch/sparc/kernel/ldc.c 105 */;
	struct iommu_map_table *cocci_id/* arch/sparc/kernel/ldc.c 1045 */;
	const struct ldc_mode_ops cocci_id/* arch/sparc/kernel/ldc.c 100 */;
}
