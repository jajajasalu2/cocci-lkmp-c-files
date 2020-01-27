cocci_test_suite() {
	const char *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 938 */;
	struct nfp_nsp_command_buf_arg cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 904 */;
	bool cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 902 */;
	void *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 901 */;
	unsigned int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 901 */;
	const void *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 841 */;
	enum nfp_nsp_cmd{SPCODE_NOOP=0, SPCODE_SOFT_RESET=1, SPCODE_FW_DEFAULT=2, SPCODE_PHY_INIT=3, SPCODE_MAC_INIT=4, SPCODE_PHY_RXADAPT=5, SPCODE_FW_LOAD=6, SPCODE_ETH_RESCAN=7, SPCODE_ETH_CONTROL=8, SPCODE_NSP_WRITE_FLASH=11, SPCODE_NSP_SENSORS=12, SPCODE_NSP_IDENTIFY=13, SPCODE_FW_STORED=16, SPCODE_HWINFO_LOOKUP=17, SPCODE_HWINFO_SET=18, SPCODE_FW_LOADED=19, SPCODE_VERSIONS=21, SPCODE_READ_SFF_EEPROM=22,} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 84 */;
	const struct firmware *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 790 */;
	const char *constcocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 739 */[];
	const unsigned long cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 698 */;
	struct nfp_nsp_command_buf_arg *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 657 */;
	unsigned long cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 508 */;
	struct device *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 507 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 506 */;
	size_t cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 505 */;
	struct {
		dma_addr_t dma_addr;
		unsigned long len;
		void *chunk;
	} *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 500 */;
	struct nfp_nsp_dma_buf *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 499 */;
	const struct nfp_nsp_command_arg cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 429 */;
	u16 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 427 */;
	u32 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 363 */;
	struct nfp_cpp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 362 */;
	u64 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 361 */;
	const struct nfp_nsp_command_arg *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 359 */;
	struct nfp_nsp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 359 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 358 */;
	u64 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 320 */;
	void cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 303 */;
	struct nfp_resource *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 274 */;
	struct nfp_nsp_command_buf_arg {
		struct nfp_nsp_command_arg arg;
		const void *in_buf;
		unsigned int in_size;
		void *out_buf;
		unsigned int out_size;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 169 */;
	struct nfp_nsp_command_arg {
		u16 code;
		bool dma;
		unsigned int timeout_sec;
		u32 option;
		u64 buf;
		void (*error_cb)(struct nfp_nsp *state, u32 ret_val);
		bool error_quiet;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 151 */;
	struct nfp_nsp {
		struct nfp_cpp *cpp;
		struct nfp_resource *res;
		struct {
			u16 major;
			u16 minor;
		} ver;
		bool modified;
		unsigned int idx;
		void *entries;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 126 */;
	const struct {
		int code;
		const char *msg;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 115 */[];
	struct eeprom_buf cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 1077 */;
	struct eeprom_buf {
		u8 metalen;
		__le16 length;
		__le16 offset;
		__le16 readlen;
		u8 eth_index;
		u8 data[0];
	}__packed *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 1067 */;
	unsigned int *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 1065 */;
	struct nfp_nsp_dma_buf {
		__le32 chunk_cnt;
		__le32 reserved[3];
		struct {
			__le32 size;
			__le32 reserved;
			__le64 addr;
		} descs[];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 105 */;
	const u32 cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 1014 */[];
	const u8 *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 1012 */;
	enum nfp_nsp_versions cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp.c 1011 */;
}
