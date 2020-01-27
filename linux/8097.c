cocci_test_suite() {
	enum can_state cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 996 */;
	struct can_berr_counter cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 995 */;
	struct skb_shared_hwtstamps *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 994 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 993 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 992 */;
	struct net_device_stats *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 991 */;
	struct net_device *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 990 */;
	ktime_t cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 988 */;
	const struct kvaser_err_frame_data *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 987 */;
	struct kvaser_usb_net_priv *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 986 */;
	struct kvaser_cmd_map_ch_req {
		char name[16];
		u8 channel;
		u8 reserved[11];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 94 */;
	enum can_state *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 819 */;
	const struct can_berr_counter *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 818 */;
	u8 cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 817 */;
	const struct kvaser_usb_net_priv *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 816 */;
	void cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 815 */;
	struct kvaser_usb_dev_card_data *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 702 */;
	u16 *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 700 */;
	const char *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 664 */;
	u64 cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 488 */;
	const struct kvaser_usb_dev_cfg *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 485 */;
	struct kvaser_cmd cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 463 */;
	struct kvaser_cmd_ext *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 461 */;
	struct kvaser_cmd *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 456 */;
	size_t cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 456 */;
	struct kvaser_usb_dev_card_data_hydra *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 441 */;
	unsigned long cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 439 */;
	int cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 423 */;
	const struct kvaser_cmd *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 421 */;
	const struct kvaser_usb *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 420 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 374 */;
	const struct kvaser_usb_dev_cfg cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 36 */;
	struct kvaser_cmd_ext {
		struct kvaser_cmd_header header;
		__le16 len;
		u8 cmd_no_ext;
		u8 reserved;
		union {
			struct kvaser_cmd_ext_rx_can rx_can;
			struct kvaser_cmd_ext_tx_can tx_can;
			struct kvaser_cmd_ext_tx_ack tx_ack;
		}__packed;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 349 */;
	struct kvaser_cmd_ext_tx_ack {
		__le32 flags;
		u8 reserved0[4];
		__le64 timestamp;
		u8 reserved1[8];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 341 */;
	struct kvaser_cmd_ext_tx_can {
		__le32 flags;
		__le32 id;
		__le32 kcan_id;
		__le32 kcan_header;
		u8 databytes;
		u8 dlc;
		u8 reserved[6];
		u8 kcan_payload[64];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 330 */;
	struct kvaser_cmd_ext_rx_can {
		__le32 flags;
		__le32 id;
		__le32 kcan_id;
		__le32 kcan_header;
		__le64 timestamp;
		union {
			u8 kcan_payload[64];
			struct kvaser_err_frame_data err_frame_data;
		};
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 318 */;
	struct kvaser_cmd {
		struct kvaser_cmd_header header;
		union {
			struct kvaser_cmd_map_ch_req map_ch_req;
			struct kvaser_cmd_map_ch_res map_ch_res;
			struct kvaser_cmd_card_info card_info;
			struct kvaser_cmd_sw_info sw_info;
			struct kvaser_cmd_sw_detail_req sw_detail_req;
			struct kvaser_cmd_sw_detail_res sw_detail_res;
			struct kvaser_cmd_cap_req cap_req;
			struct kvaser_cmd_cap_res cap_res;
			struct kvaser_cmd_error_event error_event;
			struct kvaser_cmd_set_busparams set_busparams_req;
			struct kvaser_cmd_chip_state_event chip_state_event;
			struct kvaser_cmd_set_ctrlmode set_ctrlmode;
			struct kvaser_cmd_rx_can rx_can;
			struct kvaser_cmd_tx_can tx_can;
		}__packed;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 264 */;
	struct kvaser_cmd_header {
		u8 cmd_no;
		u8 he_addr;
		__le16 transid;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 254 */;
	struct kvaser_cmd_tx_can {
		__le32 id;
		u8 data[8];
		u8 dlc;
		u8 flags;
		__le16 transid;
		u8 channel;
		u8 reserved[11];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 244 */;
	struct kvaser_cmd_rx_can {
		u8 cmd_len;
		u8 cmd_no;
		u8 channel;
		u8 flags;
		__le16 timestamp[3];
		u8 dlc;
		u8 padding;
		__le32 id;
		union {
			u8 data[8];
			struct kvaser_err_frame_data err_frame_data;
		};
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 227 */;
	struct kvaser_err_frame_data {
		u8 bus_status;
		u8 reserved0;
		u8 tx_err_counter;
		u8 rx_err_counter;
		u8 reserved1[4];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 219 */;
	struct kvaser_cmd_set_ctrlmode {
		u8 mode;
		u8 reserved[27];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 214 */;
	const struct kvaser_usb_dev_ops cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1993 */;
	u16 cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1979 */;
	const struct sk_buff *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1978 */;
	int *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1978 */;
	void *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1976 */;
	struct kvaser_cmd_set_busparams {
		__le32 bitrate;
		u8 tseg1;
		u8 tseg2;
		u8 sjw;
		u8 nsamples;
		u8 reserved0[4];
		__le32 bitrate_d;
		u8 tseg1_d;
		u8 tseg2_d;
		u8 sjw_d;
		u8 nsamples_d;
		u8 canfd_mode;
		u8 reserved1[7];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 195 */;
	spinlock_t *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1912 */;
	struct kvaser_cmd_chip_state_event {
		__le16 timestamp[3];
		u8 tx_err_counter;
		u8 rx_err_counter;
		u8 bus_status;
		u8 reserved[19];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 183 */;
	struct kvaser_cmd_error_event {
		__le16 timestamp[3];
		u8 reserved;
		u8 error_code;
		__le16 info1;
		__le16 info2;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 171 */;
	unsigned int cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1669 */;
	struct kvaser_cmd_cap_res {
		__le16 cap_cmd;
		__le16 status;
		__le32 mask;
		__le32 value;
		u8 reserved[16];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 160 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1590 */;
	const struct usb_host_interface *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1589 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1571 */;
	const struct net_device *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1570 */;
	struct kvaser_cmd_cap_req {
		__le16 cap_cmd;
		u8 reserved[26];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 151 */;
	struct can_bittiming *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1497 */;
	enum can_mode cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1478 */;
	struct kvaser_cmd_sw_detail_res {
		__le32 sw_flags;
		__le32 sw_version;
		__le32 sw_name;
		__le32 ean[2];
		__le32 max_bitrate;
		u8 reserved[4];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 138 */;
	struct kvaser_cmd_ext cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1363 */;
	u32 cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1356 */;
	struct canfd_frame *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1353 */;
	struct kvaser_usb *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1351 */;
	const struct kvaser_cmd_ext *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1318 */;
	struct kvaser_cmd_sw_detail_req {
		u8 use_ext_cmd;
		u8 reserved[27];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 125 */;
	struct can_frame **cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1231 */;
	struct kvaser_cmd_sw_info {
		u8 reserved0[8];
		__le16 max_outstanding_tx;
		u8 reserved1[18];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 119 */;
	bool cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1097 */;
	struct kvaser_usb_tx_urb_context *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 1094 */;
	struct kvaser_cmd_card_info {
		__le32 serial_number;
		__le32 clock_res;
		__le32 mfg_date;
		__le32 ean[2];
		u8 hw_version;
		u8 usb_mode;
		u8 hw_type;
		u8 reserved0;
		u8 nchannels;
		u8 reserved1[3];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 106 */;
	struct kvaser_cmd_map_ch_res {
		u8 he_addr;
		u8 channel;
		u8 reserved[26];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_hydra.c 100 */;
}
