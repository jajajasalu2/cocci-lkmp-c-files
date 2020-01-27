cocci_test_suite() {
	const u8 *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 930 */;
	u8 cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 929 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 927 */;
	struct net_device_stats *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 909 */;
	struct kvaser_usb_err_summary cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 872 */;
	bool cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 794 */;
	unsigned int cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 793 */;
	struct kvaser_usb_err_summary *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 790 */;
	enum can_state cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 701 */;
	struct can_frame cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 696 */;
	const struct kvaser_usb_err_summary *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 693 */;
	unsigned long cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 548 */;
	struct kvaser_usb_tx_urb_context *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 546 */;
	struct kvaser_cmd cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 522 */;
	struct kvaser_cmd_simple cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 464 */;
	struct kvaser_cmd_tx_can cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 359 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 351 */;
	u8 *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 350 */;
	struct kvaser_usb *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 348 */;
	u16 cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 346 */;
	const struct sk_buff *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 345 */;
	int *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 345 */;
	const struct kvaser_usb_net_priv *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 344 */;
	void *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 343 */;
	struct kvaser_usb_err_summary {
		u8 channel,status,txerr,rxerr;
		union {
			struct {
				u8 error_factor;
			} leaf;
			struct {
				u8 other_ch_status;
				u8 error_state;
			} usbcan;
		};
	} cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 330 */;
	const struct kvaser_usb_dev_cfg cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 32 */;
	struct kvaser_cmd {
		u8 len;
		u8 id;
		union {
			struct kvaser_cmd_simple simple;
			struct kvaser_cmd_cardinfo cardinfo;
			struct kvaser_cmd_busparams busparams;
			struct kvaser_cmd_rx_can_header rx_can_header;
			struct kvaser_cmd_tx_acknowledge_header tx_acknowledge_header;
			union {
				struct leaf_cmd_softinfo softinfo;
				struct leaf_cmd_rx_can rx_can;
				struct leaf_cmd_chip_state_event chip_state_event;
				struct leaf_cmd_error_event error_event;
				struct leaf_cmd_log_message log_message;
			}__packed leaf;
			union {
				struct usbcan_cmd_softinfo softinfo;
				struct usbcan_cmd_rx_can rx_can;
				struct usbcan_cmd_chip_state_event chip_state_event;
				struct usbcan_cmd_error_event error_event;
			}__packed usbcan;
			struct kvaser_cmd_tx_can tx_can;
			struct kvaser_cmd_ctrl_mode ctrl_mode;
			struct kvaser_cmd_flush_queue flush_queue;
		} u;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 288 */;
	struct leaf_cmd_log_message {
		u8 channel;
		u8 flags;
		__le16 time[3];
		u8 dlc;
		u8 time_offset;
		__le32 id;
		u8 data[8];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 278 */;
	struct kvaser_cmd_flush_queue {
		u8 tid;
		u8 channel;
		u8 flags;
		u8 padding[3];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 271 */;
	struct kvaser_cmd_ctrl_mode {
		u8 tid;
		u8 channel;
		u8 ctrl_mode;
		u8 padding[3];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 264 */;
	struct usbcan_cmd_error_event {
		u8 tid;
		u8 padding;
		u8 tx_errors_count_ch0;
		u8 rx_errors_count_ch0;
		u8 tx_errors_count_ch1;
		u8 rx_errors_count_ch1;
		u8 status_ch0;
		u8 status_ch1;
		__le16 time;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 252 */;
	struct leaf_cmd_error_event {
		u8 tid;
		u8 flags;
		__le16 time[3];
		u8 channel;
		u8 padding;
		u8 tx_errors_count;
		u8 rx_errors_count;
		u8 status;
		u8 error_factor;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 240 */;
	struct kvaser_cmd_tx_acknowledge_header {
		u8 channel;
		u8 tid;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 235 */;
	struct usbcan_cmd_chip_state_event {
		u8 tid;
		u8 channel;
		u8 tx_errors_count;
		u8 rx_errors_count;
		__le16 time;
		u8 status;
		u8 padding[3];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 223 */;
	struct leaf_cmd_chip_state_event {
		u8 tid;
		u8 channel;
		__le16 time[3];
		u8 tx_errors_count;
		u8 rx_errors_count;
		u8 status;
		u8 padding[3];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 211 */;
	struct usbcan_cmd_rx_can {
		u8 channel;
		u8 flag;
		u8 data[14];
		__le16 time;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 203 */;
	struct leaf_cmd_rx_can {
		u8 channel;
		u8 flag;
		__le16 time[3];
		u8 data[14];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 195 */;
	struct kvaser_cmd_rx_can_header {
		u8 channel;
		u8 flag;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 190 */;
	struct kvaser_cmd_tx_can {
		u8 channel;
		u8 tid;
		u8 data[14];
		union {
			struct {
				u8 padding;
				u8 flags;
			}__packed leaf;
			struct {
				u8 flags;
				u8 padding;
			}__packed usbcan;
		}__packed;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 174 */;
	struct kvaser_cmd_busparams {
		u8 tid;
		u8 channel;
		__le32 bitrate;
		u8 tseg1;
		u8 tseg2;
		u8 sjw;
		u8 no_samp;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 164 */;
	struct usbcan_cmd_softinfo {
		u8 tid;
		u8 fw_name[5];
		__le16 max_outstanding_tx;
		u8 padding[6];
		__le32 fw_version;
		__le16 checksum;
		__le16 sw_options;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 154 */;
	struct leaf_cmd_softinfo {
		u8 tid;
		u8 padding0;
		__le32 sw_options;
		__le32 fw_version;
		__le16 max_outstanding_tx;
		__le16 padding1[9];
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 145 */;
	const struct kvaser_usb_dev_ops cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1332 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1310 */;
	const struct usb_host_interface *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1309 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1298 */;
	const struct net_device *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1297 */;
	enum can_mode cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1279 */;
	struct kvaser_cmd_busparams cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1259 */;
	struct kvaser_cmd_cardinfo {
		u8 tid;
		u8 nchannels;
		__le32 serial_number;
		__le32 padding0;
		__le32 clock_resolution;
		__le32 mfgdate;
		u8 ean[8];
		u8 hw_revision;
		union {
			struct {
				u8 usb_hs_mode;
			}__packed leaf1;
			struct {
				u8 padding;
			}__packed usbcan1;
		}__packed;
		__le16 padding1;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 125 */;
	struct can_bittiming *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1249 */;
	struct net_device *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1246 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1234 */;
	struct kvaser_usb_dev_card_data *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1226 */;
	struct kvaser_cmd_flush_queue cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1214 */;
	struct kvaser_cmd *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1206 */;
	struct kvaser_usb_net_priv *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1204 */;
	int cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1204 */;
	struct kvaser_cmd_simple {
		u8 tid;
		u8 channel;
	}__packed cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 120 */;
	struct kvaser_cmd_ctrl_mode cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1148 */;
	const struct kvaser_cmd *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1053 */;
	const struct kvaser_usb *cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1052 */;
	void cocci_id/* drivers/net/can/usb/kvaser_usb/kvaser_usb_leaf.c 1052 */;
}
