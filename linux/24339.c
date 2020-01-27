cocci_test_suite() {
	struct smc_llc_msg_confirm_rkey {
		struct smc_llc_hdr hd;
		struct smc_rmb_rtoken rtoken[SMC_LLC_RKEYS_PER_MSG];
		u8 reserved;
	} cocci_id/* net/smc/smc_llc.c 95 */;
	struct smc_rmb_rtoken {
		union {
			u8 num_rkeys;
			u8 link_id;
		};
		__be32 rmb_key;
		__be64 rmb_vaddr;
	}__packed cocci_id/* net/smc/smc_llc.c 82 */;
	struct smc_wr_rx_handler *cocci_id/* net/smc/smc_llc.c 760 */;
	struct smc_llc_msg_test_link {
		struct smc_llc_hdr hd;
		u8 user_data[16];
		u8 reserved[24];
	} cocci_id/* net/smc/smc_llc.c 76 */;
	int __init cocci_id/* net/smc/smc_llc.c 758 */;
	void cocci_id/* net/smc/smc_llc.c 758 */;
	struct smc_wr_rx_handler cocci_id/* net/smc/smc_llc.c 724 */[];
	struct smc_llc_msg_del_link {
		struct smc_llc_hdr hd;
		u8 link_num;
		__be32 reason;
		u8 reserved[35];
	}__packed cocci_id/* net/smc/smc_llc.c 69 */;
	struct smc_buf_desc *cocci_id/* net/smc/smc_llc.c 680 */;
	u32 *cocci_id/* net/smc/smc_llc.c 630 */;
	struct smc_link_group *cocci_id/* net/smc/smc_llc.c 628 */;
	unsigned long cocci_id/* net/smc/smc_llc.c 599 */;
	struct smc_link cocci_id/* net/smc/smc_llc.c 598 */;
	union smc_llc_msg *cocci_id/* net/smc/smc_llc.c 559 */;
	struct ib_wc *cocci_id/* net/smc/smc_llc.c 556 */;
	void *cocci_id/* net/smc/smc_llc.c 556 */;
	struct smc_llc_msg_add_link {
		struct smc_llc_hdr hd;
		u8 sender_mac[ETH_ALEN];
		u8 reserved2[2];
		u8 sender_gid[SMC_GID_SIZE];
		u8 sender_qp_num[3];
		u8 link_num;
		u8 flags2;
		u8 initial_psn[3];
		u8 reserved[8];
	} cocci_id/* net/smc/smc_llc.c 54 */;
	u8 cocci_id/* net/smc/smc_llc.c 532 */;
	struct smc_llc_msg_delete_rkey *cocci_id/* net/smc/smc_llc.c 530 */;
	struct smc_llc_msg_confirm_rkey_cont *cocci_id/* net/smc/smc_llc.c 518 */;
	struct smc_llc_msg_confirm_rkey *cocci_id/* net/smc/smc_llc.c 495 */;
	struct smc_llc_msg_test_link *cocci_id/* net/smc/smc_llc.c 483 */;
	struct smc_llc_msg_confirm_link *cocci_id/* net/smc/smc_llc.c 404 */;
	struct smc_llc_send_work *cocci_id/* net/smc/smc_llc.c 389 */;
	struct smc_llc_msg_confirm_link {
		struct smc_llc_hdr hd;
		u8 sender_mac[ETH_ALEN];
		u8 sender_gid[SMC_GID_SIZE];
		u8 sender_qp_num[3];
		u8 link_num;
		u8 link_uid[SMC_LGR_ID_SIZE];
		u8 max_links;
		u8 reserved[9];
	} cocci_id/* net/smc/smc_llc.c 38 */;
	struct smc_llc_send_work cocci_id/* net/smc/smc_llc.c 370 */;
	struct work_struct *cocci_id/* net/smc/smc_llc.c 367 */;
	struct smc_llc_send_work {
		struct work_struct work;
		struct smc_link *link;
		int llclen;
		union smc_llc_msg llcbuf;
	} cocci_id/* net/smc/smc_llc.c 359 */;
	struct smc_llc_msg_test_link cocci_id/* net/smc/smc_llc.c 352 */;
	u8 cocci_id/* net/smc/smc_llc.c 339 */[16];
	bool cocci_id/* net/smc/smc_llc.c 305 */;
	struct smc_llc_msg_del_link *cocci_id/* net/smc/smc_llc.c 303 */;
	struct smc_wr_buf *cocci_id/* net/smc/smc_llc.c 289 */;
	struct smc_wr_tx_pend_priv *cocci_id/* net/smc/smc_llc.c 288 */;
	struct smc_llc_msg_add_link cocci_id/* net/smc/smc_llc.c 272 */;
	enum smc_llc_reqresp cocci_id/* net/smc/smc_llc.c 268 */;
	u8 cocci_id/* net/smc/smc_llc.c 267 */[];
	struct smc_llc_msg_add_link *cocci_id/* net/smc/smc_llc.c 266 */;
	struct smc_llc_msg_delete_rkey cocci_id/* net/smc/smc_llc.c 257 */;
	u64 cocci_id/* net/smc/smc_llc.c 236 */;
	struct smc_llc_msg_confirm_rkey cocci_id/* net/smc/smc_llc.c 232 */;
	struct smc_llc_msg_confirm_link cocci_id/* net/smc/smc_llc.c 201 */;
	struct smc_llc_tx_pend cocci_id/* net/smc/smc_llc.c 180 */;
	union smc_llc_msg cocci_id/* net/smc/smc_llc.c 174 */;
	struct smc_wr_tx_pend_priv **cocci_id/* net/smc/smc_llc.c 165 */;
	struct smc_wr_buf **cocci_id/* net/smc/smc_llc.c 164 */;
	struct smc_link *cocci_id/* net/smc/smc_llc.c 163 */;
	int cocci_id/* net/smc/smc_llc.c 163 */;
	enum ib_wc_status cocci_id/* net/smc/smc_llc.c 145 */;
	struct smc_llc_tx_pend {
	} cocci_id/* net/smc/smc_llc.c 139 */;
	union smc_llc_msg {
		struct smc_llc_msg_confirm_link confirm_link;
		struct smc_llc_msg_add_link add_link;
		struct smc_llc_msg_del_link delete_link;
		struct smc_llc_msg_confirm_rkey confirm_rkey;
		struct smc_llc_msg_confirm_rkey_cont confirm_rkey_cont;
		struct smc_llc_msg_delete_rkey delete_rkey;
		struct smc_llc_msg_test_link test_link;
		struct {
			struct smc_llc_hdr hdr;
			u8 data[SMC_LLC_DATA_LEN];
		} raw;
	} cocci_id/* net/smc/smc_llc.c 119 */;
	struct smc_llc_msg_delete_rkey {
		struct smc_llc_hdr hd;
		u8 num_rkeys;
		u8 err_mask;
		u8 reserved[2];
		__be32 rkey[8];
		u8 reserved2[4];
	} cocci_id/* net/smc/smc_llc.c 110 */;
	struct smc_llc_msg_confirm_rkey_cont {
		struct smc_llc_hdr hd;
		u8 num_rkeys;
		struct smc_rmb_rtoken rtoken[SMC_LLC_RKEYS_PER_MSG];
	} cocci_id/* net/smc/smc_llc.c 101 */;
	struct smc_llc_hdr {
		struct smc_wr_rx_hdr common;
		u8 length;
#if defined(__BIG_ENDIAN_BITFIELD)
		u8 reserved:4,add_link_rej_rsn:4;
#elif defined(__LITTLE_ENDIAN_BITFIELD)
		u8 add_link_rej_rsn:4,reserved:4;
#endif
		u8 flags;
	} cocci_id/*  1 */;
}
