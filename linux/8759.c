cocci_test_suite() {
	struct __mux2 *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 989 */;
	struct __pollrd *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 954 */;
	struct __pollrdmwr *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 910 */;
	struct qlcnic_pex_dma_descriptor cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 795 */;
	struct qlcnic_pex_dma_descriptor *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 773 */;
	int *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 769 */;
	struct __cache *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 594 */;
	struct __ocm *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 548 */;
	void __iomem *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 547 */;
	struct __queue *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 524 */;
	struct __mux *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 506 */;
	u8 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 410 */;
	struct __ctrl *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 407 */;
	struct __crb *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 390 */;
	struct qlcnic_dump_operations {
		enum qlcnic_minidump_opcode opcode;
		u32 (*handler)(struct qlcnic_adapter *,
			       struct qlcnic_dump_entry *, __le32 *);
	} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 379 */;
	struct qlcnic_pex_dma_descriptor {
		u32 read_data_size;
		u32 dma_desc_cmd;
		u32 src_addr_low;
		u32 src_addr_high;
		u32 dma_bus_addr_low;
		u32 dma_bus_addr_high;
		u32 rsvd[6];
	}__packed cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 36 */;
	struct qlcnic_83xx_dump_template_hdr *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 342 */;
	struct qlcnic_82xx_dump_template_hdr *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 288 */;
	struct qlcnic_fw_dump *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 286 */;
	void cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 286 */;
	enum qlcnic_minidump_opcode{QLCNIC_DUMP_NOP=0, QLCNIC_DUMP_READ_CRB=1, QLCNIC_DUMP_READ_MUX=2, QLCNIC_DUMP_QUEUE=3, QLCNIC_DUMP_BRD_CONFIG=4, QLCNIC_DUMP_READ_OCM=6, QLCNIC_DUMP_PEG_REG=7, QLCNIC_DUMP_L1_DTAG=8, QLCNIC_DUMP_L1_ITAG=9, QLCNIC_DUMP_L1_DATA=11, QLCNIC_DUMP_L1_INST=12, QLCNIC_DUMP_L2_DTAG=21, QLCNIC_DUMP_L2_ITAG=22, QLCNIC_DUMP_L2_DATA=23, QLCNIC_DUMP_L2_INST=24, QLCNIC_DUMP_POLL_RD=35, QLCNIC_READ_MUX2=36, QLCNIC_READ_POLLRDMWR=37, QLCNIC_DUMP_READ_ROM=71, QLCNIC_DUMP_READ_MEM=72, QLCNIC_DUMP_READ_CTRL=98, QLCNIC_DUMP_TLHDR=99, QLCNIC_DUMP_RDEND=255,} cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 245 */;
	struct qlcnic_dump_entry {
		struct qlcnic_common_entry_hdr hdr;
		union {
			struct __crb crb;
			struct __cache cache;
			struct __ocm ocm;
			struct __mem mem;
			struct __mux mux;
			struct __queue que;
			struct __ctrl ctrl;
			struct __pollrdmwr pollrdmwr;
			struct __mux2 mux2;
			struct __pollrd pollrd;
		} region;
	}__packed cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 229 */;
	struct __pollrdmwr {
		u32 addr1;
		u32 addr2;
		u32 val1;
		u32 val2;
		u32 poll_wait;
		u32 poll_mask;
		u32 mod_mask;
		u32 data_size;
	}__packed cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 218 */;
	const u32 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 20 */[];
	struct __mux {
		u32 addr;
		u8 rsvd[4];
		u32 size;
		u32 no_ops;
		u32 val;
		u32 val_stride;
		u32 read_addr;
		u8 rsvd2[4];
	}__packed cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 147 */;
	bool cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1419 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1418 */;
	struct qlcnic_hardware_context *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1416 */;
	struct __mem {
		u32 desc_card_addr;
		u32 dma_desc_cmd;
		u32 start_dma_cmd;
		u32 rsvd[3];
		u32 addr;
		u32 size;
	}__packed cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 138 */;
	char *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1299 */[];
	char cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1298 */[64];
	struct device *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1292 */;
	struct __ocm {
		u8 rsvd[8];
		u32 size;
		u32 no_ops;
		u8 rsvd1[8];
		u32 read_addr;
		u32 read_addr_stride;
	}__packed cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 129 */;
	const struct qlcnic_dump_operations *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1288 */;
	uint32_t *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1251 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1175 */;
	struct qlcnic_cmd_args cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1174 */;
	__le32 *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1173 */;
	void *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1172 */;
	u32 cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1169 */;
	u32 *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1169 */;
	struct qlcnic_adapter *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1168 */;
	int cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1168 */;
	struct qlcnic_83xx_dump_template_hdr cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1117 */;
	struct qlcnic_cmd_args *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1115 */;
	uint64_t cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1084 */;
	uint32_t cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1082 */;
	const struct qlcnic_dump_operations cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1056 */[];
	u8 *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1027 */;
	struct __mem *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1021 */;
	struct qlcnic_dump_entry *cocci_id/* drivers/net/ethernet/qlogic/qlcnic/qlcnic_minidump.c 1018 */;
	struct qlcnic_common_entry_hdr {
		u32 type;
		u32 offset;
		u32 cap_size;
#if defined(__LITTLE_ENDIAN)
		u8 mask;
		u8 rsvd[2];
		u8 flags;
#else
		u8 flags;
		u8 rsvd[2];
		u8 mask;
#endif
	}__packed cocci_id/*  1 */;
	struct __queue {
		u32 sel_addr;
#if defined(__LITTLE_ENDIAN)
		u16 stride;
		u8 rsvd[2];
#else
		u8 rsvd[2];
		u16 stride;
#endif
		u32 size;
		u32 no_ops;
		u8 rsvd2[8];
		u32 read_addr;
#if defined(__LITTLE_ENDIAN)
		u8 read_addr_stride;
		u8 read_addr_cnt;
		u8 rsvd3[2];
#else
		u8 rsvd3[2];
		u8 read_addr_cnt;
		u8 read_addr_stride;
#endif
	}__packed cocci_id/*  1 */;
	struct __pollrd {
		u32 sel_addr;
		u32 read_addr;
		u32 sel_val;
#if defined(__LITTLE_ENDIAN)
		u16 sel_val_stride;
		u16 no_ops;
#else
		u16 no_ops;
		u16 sel_val_stride;
#endif
		u32 poll_wait;
		u32 poll_mask;
		u32 data_size;
		u8 rsvd[4];
	}__packed cocci_id/*  1 */;
	struct __mux2 {
		u32 sel_addr1;
		u32 sel_addr2;
		u32 sel_val1;
		u32 sel_val2;
		u32 no_ops;
		u32 sel_val_mask;
		u32 read_addr;
#if defined(__LITTLE_ENDIAN)
		u8 sel_val_stride;
		u8 data_size;
		u8 rsvd[2];
#else
		u8 rsvd[2];
		u8 data_size;
		u8 sel_val_stride;
#endif
	}__packed cocci_id/*  1 */;
	struct __ctrl {
		u32 addr;
#if defined(__LITTLE_ENDIAN)
		u8 stride;
		u8 index_a;
		u16 timeout;
#else
		u16 timeout;
		u8 index_a;
		u8 stride;
#endif
		u32 data_size;
		u32 no_ops;
#if defined(__LITTLE_ENDIAN)
		u8 opcode;
		u8 index_v;
		u8 shl_val;
		u8 shr_val;
#else
		u8 shr_val;
		u8 shl_val;
		u8 index_v;
		u8 opcode;
#endif
		u32 val1;
		u32 val2;
		u32 val3;
	}__packed cocci_id/*  1 */;
	struct __crb {
		u32 addr;
#if defined(__LITTLE_ENDIAN)
		u8 stride;
		u8 rsvd1[3];
#else
		u8 rsvd1[3];
		u8 stride;
#endif
		u32 data_size;
		u32 no_ops;
		u32 rsvd2[4];
	}__packed cocci_id/*  1 */;
	struct __cache {
		u32 addr;
#if defined(__LITTLE_ENDIAN)
		u16 stride;
		u16 init_tag_val;
#else
		u16 init_tag_val;
		u16 stride;
#endif
		u32 size;
		u32 no_ops;
		u32 ctrl_addr;
		u32 ctrl_val;
		u32 read_addr;
#if defined(__LITTLE_ENDIAN)
		u8 read_addr_stride;
		u8 read_addr_num;
		u8 rsvd1[2];
#else
		u8 rsvd1[2];
		u8 read_addr_num;
		u8 read_addr_stride;
#endif
	}__packed cocci_id/*  1 */;
}
