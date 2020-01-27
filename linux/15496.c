cocci_test_suite() {
	struct pn533_poll_modulations {
		struct {
			u8 maxtg;
			u8 brty;
			union pn533_cmd_poll_initdata initiator_data;
		}__packed data;
		u8 len;
	} cocci_id/* drivers/nfc/pn533/pn533.c 94 */;
	void cocci_id/* drivers/nfc/pn533/pn533.c 896 */(struct pn533 *dev);
	struct pn533_target_type_b *cocci_id/* drivers/nfc/pn533/pn533.c 884 */;
	struct pn533_target_type_b cocci_id/* drivers/nfc/pn533/pn533.c 868 */;
	struct pn533_target_type_b {
		struct pn533_type_b_sens_res sensb_res;
		u8 attrib_res_len;
		u8 attrib_res[];
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 859 */;
	struct pn533_type_b_sens_res {
		u8 opcode;
		u8 nfcid[4];
		u8 appdata[4];
		struct pn533_type_b_prot_info prot_info;
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 850 */;
	struct pn533_type_b_prot_info {
		u8 bitrate;
		u8 fsci_type;
		u8 fwi_adc_fo;
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 840 */;
	struct pn533_target_jewel *cocci_id/* drivers/nfc/pn533/pn533.c 825 */;
	union pn533_cmd_poll_initdata {
		struct {
			u8 afi;
			u8 polling_method;
		}__packed type_b;
		struct {
			u8 opcode;
			__be16 sc;
			u8 rc;
			u8 tsn;
		}__packed felica;
	} cocci_id/* drivers/nfc/pn533/pn533.c 81 */;
	struct pn533_target_jewel cocci_id/* drivers/nfc/pn533/pn533.c 806 */;
	struct pn533_target_jewel {
		__be16 sens_res;
		u8 jewelid[4];
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 795 */;
	struct pn533_target_felica cocci_id/* drivers/nfc/pn533/pn533.c 761 */;
	struct pn533_target_felica *cocci_id/* drivers/nfc/pn533/pn533.c 758 */;
	struct pn533_target_felica {
		u8 pol_res;
		u8 opcode;
		u8 nfcid2[NFC_NFCID2_MAXSIZE];
		u8 pad[8];
		u8 syst_code[];
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 746 */;
	struct pn533_target_type_a *cocci_id/* drivers/nfc/pn533/pn533.c 715 */;
	struct pn533_target_type_a cocci_id/* drivers/nfc/pn533/pn533.c 687 */;
	struct pn533_target_type_a {
		__be16 sens_res;
		u8 sel_res;
		u8 nfcid_len;
		u8 nfcid_data[];
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 658 */;
	struct pn533_sync_cmd_response cocci_id/* drivers/nfc/pn533/pn533.c 628 */;
	struct pn533_sync_cmd_response *cocci_id/* drivers/nfc/pn533/pn533.c 599 */;
	struct pn533_sync_cmd_response {
		struct sk_buff *resp;
		struct completion done;
	} cocci_id/* drivers/nfc/pn533/pn533.c 591 */;
	struct pn533_config_timing {
		u8 rfu;
		u8 atr_res_timeout;
		u8 dep_timeout;
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 59 */;
	struct pn533_cmd cocci_id/* drivers/nfc/pn533/pn533.c 574 */;
	struct pn533 cocci_id/* drivers/nfc/pn533/pn533.c 562 */;
	struct work_struct *cocci_id/* drivers/nfc/pn533/pn533.c 560 */;
	struct pn533_config_max_retries {
		u8 mx_rty_atr;
		u8 mx_rty_psl;
		u8 mx_rty_passive_act;
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 53 */;
	struct pn533_cmd *cocci_id/* drivers/nfc/pn533/pn533.c 442 */;
	void *cocci_id/* drivers/nfc/pn533/pn533.c 440 */;
	pn533_send_async_complete_t cocci_id/* drivers/nfc/pn533/pn533.c 439 */;
	struct sk_buff *cocci_id/* drivers/nfc/pn533/pn533.c 438 */;
	u8 cocci_id/* drivers/nfc/pn533/pn533.c 437 */;
	struct pn533 *cocci_id/* drivers/nfc/pn533/pn533.c 437 */;
	int cocci_id/* drivers/nfc/pn533/pn533.c 437 */;
	struct pn533_frame_ops *cocci_id/* drivers/nfc/pn533/pn533.c 386 */;
	void cocci_id/* drivers/nfc/pn533/pn533.c 381 */;
	struct pn533_frame_ops cocci_id/* drivers/nfc/pn533/pn533.c 365 */;
	struct pn533_ext_frame *cocci_id/* drivers/nfc/pn533/pn533.c 349 */;
	struct pn533_std_frame cocci_id/* drivers/nfc/pn533/pn533.c 342 */;
	struct pn533_ext_frame cocci_id/* drivers/nfc/pn533/pn533.c 338 */;
	struct pn533_std_frame *cocci_id/* drivers/nfc/pn533/pn533.c 318 */;
	bool cocci_id/* drivers/nfc/pn533/pn533.c 316 */;
	struct device *cocci_id/* drivers/nfc/pn533/pn533.c 2861 */;
	u32 cocci_id/* drivers/nfc/pn533/pn533.c 2860 */;
	struct pn533_fw_version {
		u8 ic;
		u8 ver;
		u8 rev;
		u8 support;
	} cocci_id/* drivers/nfc/pn533/pn533.c 28 */;
	struct pn533_phy_ops *cocci_id/* drivers/nfc/pn533/pn533.c 2789 */;
	enum pn533_protocol_type cocci_id/* drivers/nfc/pn533/pn533.c 2787 */;
	struct pn533_fw_version cocci_id/* drivers/nfc/pn533/pn533.c 2764 */;
	u8 cocci_id/* drivers/nfc/pn533/pn533.c 2694 */[3];
	struct pn533_config_timing cocci_id/* drivers/nfc/pn533/pn533.c 2693 */;
	struct pn533_config_max_retries cocci_id/* drivers/nfc/pn533/pn533.c 2692 */;
	struct nfc_ops cocci_id/* drivers/nfc/pn533/pn533.c 2677 */;
	struct nfc_dev *cocci_id/* drivers/nfc/pn533/pn533.c 2623 */;
	struct pn533_fw_version *cocci_id/* drivers/nfc/pn533/pn533.c 2561 */;
	data_exchange_cb_t cocci_id/* drivers/nfc/pn533/pn533.c 2290 */;
	struct pn533_data_exchange_arg *cocci_id/* drivers/nfc/pn533/pn533.c 2136 */;
	struct pn533_data_exchange_arg {
		data_exchange_cb_t cb;
		void *cb_context;
	} cocci_id/* drivers/nfc/pn533/pn533.c 2090 */;
	u8 cocci_id/* drivers/nfc/pn533/pn533.c 1994 */[PASSIVE_DATA_LEN];
	int cocci_id/* drivers/nfc/pn533/pn533.c 1986 */(struct nfc_dev *nfc_dev,
							 u8 rf);
	struct pn533_cmd_jump_dep_response *cocci_id/* drivers/nfc/pn533/pn533.c 1928 */;
	struct pn532_autopoll_resp {
		u8 type;
		u8 ln;
		u8 tg;
		u8 tgdata[];
	} cocci_id/* drivers/nfc/pn533/pn533.c 188 */;
	struct nfc_target *cocci_id/* drivers/nfc/pn533/pn533.c 1822 */;
	u16 cocci_id/* drivers/nfc/pn533/pn533.c 1786 */;
	struct pn533_cmd_activate_response *cocci_id/* drivers/nfc/pn533/pn533.c 1785 */;
	struct pn533_cmd_jump_dep_response {
		u8 status;
		u8 tg;
		u8 nfcid3t[10];
		u8 didt;
		u8 bst;
		u8 brt;
		u8 to;
		u8 ppt;
		u8 gt[];
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 175 */;
	struct pn533_cmd_activate_response {
		u8 status;
		u8 nfcid3t[10];
		u8 didt;
		u8 bst;
		u8 brt;
		u8 to;
		u8 ppt;
		u8 gt[];
	}__packed cocci_id/* drivers/nfc/pn533/pn533.c 163 */;
	struct pn533_poll_modulations *cocci_id/* drivers/nfc/pn533/pn533.c 1573 */;
	struct nfc_target cocci_id/* drivers/nfc/pn533/pn533.c 1422 */;
	struct pn532_autopoll_resp *cocci_id/* drivers/nfc/pn533/pn533.c 1421 */;
	struct timer_list *cocci_id/* drivers/nfc/pn533/pn533.c 1249 */;
	int cocci_id/* drivers/nfc/pn533/pn533.c 1148 */(struct pn533 *dev,
							 void *arg,
							 struct sk_buff *resp);
	struct sk_buff *cocci_id/* drivers/nfc/pn533/pn533.c 1074 */(struct pn533 *dev);
	void cocci_id/* drivers/nfc/pn533/pn533.c 1073 */(struct work_struct *work);
	unsigned int cocci_id/* drivers/nfc/pn533/pn533.c 1037 */;
	u8 cocci_id/* drivers/nfc/pn533/pn533.c 1033 */[6];
	const struct pn533_poll_modulations cocci_id/* drivers/nfc/pn533/pn533.c 103 */[];
	u8 cocci_id/* drivers/nfc/pn533/pn533.c 1028 */[18];
	size_t cocci_id/* drivers/nfc/pn533/pn533.c 1026 */;
	u8 *cocci_id/* drivers/nfc/pn533/pn533.c 1023 */;
}
