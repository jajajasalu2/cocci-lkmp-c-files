cocci_test_suite() {
	enum tx_csum_stat{TX_CSUM_SUCCESS=0, TX_CSUM_TSO, TX_CSUM_NONE,} cocci_id/* drivers/net/usb/r8152.c 992 */;
	enum rtl_version{RTL_VER_UNKNOWN=0, RTL_VER_01, RTL_VER_02, RTL_VER_03, RTL_VER_04, RTL_VER_05, RTL_VER_06, RTL_VER_07, RTL_VER_08, RTL_VER_09, RTL_VER_MAX,} cocci_id/* drivers/net/usb/r8152.c 978 */;
	enum rtl_fw_type{RTL_FW_END=0, RTL_FW_PLA, RTL_FW_USB, RTL_FW_PHY_START, RTL_FW_PHY_STOP, RTL_FW_PHY_NC,} cocci_id/* drivers/net/usb/r8152.c 969 */;
	struct fw_phy_nc {
		struct fw_block blk_hdr;
		__le16 fw_offset;
		__le16 fw_reg;
		__le16 ba_reg;
		__le16 ba_data;
		__le16 patch_en_addr;
		__le16 patch_en_value;
		__le16 mode_reg;
		__le16 mode_pre;
		__le16 mode_post;
		__le16 reserved;
		__le16 bp_start;
		__le16 bp_num;
		__le16 bp[4];
		char info[0];
	}__packed cocci_id/* drivers/net/usb/r8152.c 951 */;
	struct fw_phy_patch_key {
		struct fw_block blk_hdr;
		__le16 key_reg;
		__le16 key_data;
		__le32 reserved;
	}__packed cocci_id/* drivers/net/usb/r8152.c 923 */;
	struct fw_mac {
		struct fw_block blk_hdr;
		__le16 fw_offset;
		__le16 fw_reg;
		__le16 bp_ba_addr;
		__le16 bp_ba_value;
		__le16 bp_en_addr;
		__le16 bp_en_value;
		__le16 bp_start;
		__le16 bp_num;
		__le16 bp[16];
		__le32 reserved;
		__le16 fw_ver_reg;
		u8 fw_ver_data;
		char info[0];
	}__packed cocci_id/* drivers/net/usb/r8152.c 900 */;
	struct fw_header {
		u8 checksum[32];
		char version[RTL_VER_SIZE];
		struct fw_block blocks[0];
	}__packed cocci_id/* drivers/net/usb/r8152.c 872 */;
	struct fw_block {
		__le32 type;
		__le32 length;
	}__packed cocci_id/* drivers/net/usb/r8152.c 859 */;
	struct r8152 {
		unsigned long flags;
		struct usb_device *udev;
		struct napi_struct napi;
		struct usb_interface *intf;
		struct net_device *netdev;
		struct urb *intr_urb;
		struct tx_agg tx_info[RTL8152_MAX_TX];
		struct list_head rx_info,rx_used;
		struct list_head rx_done,tx_free;
		struct sk_buff_head tx_queue,rx_queue;
		spinlock_t rx_lock,tx_lock;
		struct delayed_work schedule,hw_phy_work;
		struct mii_if_info mii;
		struct mutex control;
#ifdef CONFIG_PM_SLEEP
		struct notifier_block pm_notifier;
#endif
		struct tasklet_struct tx_tl;
		struct rtl_ops {
			void (*init)(struct r8152 *tp);
			int (*enable)(struct r8152 *tp);
			void (*disable)(struct r8152 *tp);
			void (*up)(struct r8152 *tp);
			void (*down)(struct r8152 *tp);
			void (*unload)(struct r8152 *tp);
			int (*eee_get)(struct r8152 *tp,
				       struct ethtool_eee *eee);
			int (*eee_set)(struct r8152 *tp,
				       struct ethtool_eee *eee);
			bool (*in_nway)(struct r8152 *tp);
			void (*hw_phy_cfg)(struct r8152 *tp);
			void (*autosuspend_en)(struct r8152 *tp, bool enable);
		} rtl_ops;
		struct ups_info {
			u32 _10m_ckdiv:1;
			u32 _250m_ckdiv:1;
			u32 aldps:1;
			u32 lite_mode:2;
			u32 speed_duplex:4;
			u32 eee:1;
			u32 eee_lite:1;
			u32 eee_ckdiv:1;
			u32 eee_plloff_100:1;
			u32 eee_plloff_giga:1;
			u32 eee_cmod_lv:1;
			u32 green:1;
			u32 flow_control:1;
			u32 ctap_short_off:1;
		} ups_info;
#define RTL_VER_SIZE 32
		struct rtl_fw {
			const char *fw_name;
			const struct firmware *fw;
			char version[RTL_VER_SIZE];
			int (*pre_fw)(struct r8152 *tp);
			int (*post_fw)(struct r8152 *tp);
			bool retry;
		} rtl_fw;
		atomic_t rx_count;
		bool eee_en;
		int intr_interval;
		u32 saved_wolopts;
		u32 msg_enable;
		u32 tx_qlen;
		u32 coalesce;
		u32 advertising;
		u32 rx_buf_sz;
		u32 rx_copybreak;
		u32 rx_pending;
		u16 ocp_base;
		u16 speed;
		u16 eee_adv;
		u8 *intr_buff;
		u8 version;
		u8 duplex;
		u8 autoneg;
	} cocci_id/* drivers/net/usb/r8152.c 767 */;
	struct tx_agg {
		struct list_head list;
		struct urb *urb;
		struct r8152 *context;
		void *buffer;
		void *head;
		u32 skb_num;
		u32 skb_len;
	} cocci_id/* drivers/net/usb/r8152.c 757 */;
	struct rx_agg {
		struct list_head list,info_list;
		struct urb *urb;
		struct r8152 *context;
		struct page *page;
		void *buffer;
	} cocci_id/* drivers/net/usb/r8152.c 749 */;
	struct tx_desc {
		__le32 opts1;
#define TX_FS BIT(31)
#define TX_LS BIT(30)
#define GTSENDV4 BIT(28)
#define GTSENDV6 BIT(27)
#define GTTCPHO_SHIFT 18
#define GTTCPHO_MAX 0x7fU
#define TX_LEN_MAX 0x3ffffU
						__le32 opts2;
#define UDP_CS BIT(31)
#define TCP_CS BIT(30)
#define IPV4_CS BIT(29)
#define IPV6_CS BIT(28)
#define MSS_SHIFT 17
#define MSS_MAX 0x7ffU
#define TCPHO_SHIFT 17
#define TCPHO_MAX 0x7ffU
#define TX_VLAN_TAG BIT(16)
						} cocci_id/* drivers/net/usb/r8152.c 725 */;
	struct rx_desc {
		__le32 opts1;
#define RX_LEN_MASK 0x7fff
		__le32 opts2;
#define RD_UDP_CS BIT(23)
#define RD_TCP_CS BIT(22)
#define RD_IPV6_CS BIT(20)
#define RD_IPV4_CS BIT(19)
						__le32 opts3;
#define IPF BIT(23)
#define UDPF BIT(22)
#define TCPF BIT(21)
#define RX_VLAN_TAG BIT(16)
						__le32 opts4;
		__le32 opts5;
		__le32 opts6;
	} cocci_id/* drivers/net/usb/r8152.c 704 */;
	struct tally_counter {
		__le64 tx_packets;
		__le64 rx_packets;
		__le64 tx_errors;
		__le32 rx_errors;
		__le16 rx_missed;
		__le16 align_errors;
		__le32 tx_one_collision;
		__le32 tx_multi_collision;
		__le64 rx_unicast;
		__le64 rx_broadcast;
		__le32 rx_multicast;
		__le16 tx_aborted;
		__le16 tx_underrun;
	} cocci_id/* drivers/net/usb/r8152.c 688 */;
	struct usb_driver cocci_id/* drivers/net/usb/r8152.c 6802 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/r8152.c 6779 */[];
	enum rtl8152_flags{RTL8152_UNPLUG=0, RTL8152_SET_RX_MODE, WORK_ENABLE, RTL8152_LINK_CHG, SELECTIVE_SUSPEND, PHY_RESET, SCHEDULE_TASKLET, GREEN_ETHERNET, DELL_TB_RX_AGG_BUG, LENOVO_MACPASSTHRU,} cocci_id/* drivers/net/usb/r8152.c 663 */;
	struct usb_device *cocci_id/* drivers/net/usb/r8152.c 6586 */;
	const struct usb_device_id *cocci_id/* drivers/net/usb/r8152.c 6584 */;
	__le32 *cocci_id/* drivers/net/usb/r8152.c 6528 */;
	struct rtl_ops *cocci_id/* drivers/net/usb/r8152.c 6413 */;
	const struct net_device_ops cocci_id/* drivers/net/usb/r8152.c 6372 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/usb/r8152.c 6292 */;
	struct ifreq *cocci_id/* drivers/net/usb/r8152.c 6289 */;
	const struct ethtool_ops cocci_id/* drivers/net/usb/r8152.c 6266 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/usb/r8152.c 6235 */;
	enum rtl_register_content{_1000bps=0x10, _100bps=0x08, _10bps=0x04, LINK_STATUS=0x02, FULL_DUP=0x01,} cocci_id/* drivers/net/usb/r8152.c 621 */;
	const void *cocci_id/* drivers/net/usb/r8152.c 6201 */;
	u32 *cocci_id/* drivers/net/usb/r8152.c 6190 */;
	const struct ethtool_tunable *cocci_id/* drivers/net/usb/r8152.c 6184 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/usb/r8152.c 6118 */;
	struct ethtool_eee *cocci_id/* drivers/net/usb/r8152.c 5992 */;
	struct tally_counter cocci_id/* drivers/net/usb/r8152.c 5959 */;
	u64 *cocci_id/* drivers/net/usb/r8152.c 5956 */;
	struct ethtool_stats *cocci_id/* drivers/net/usb/r8152.c 5956 */;
	const char cocci_id/* drivers/net/usb/r8152.c 5929 */[][ETH_GSTRING_LEN];
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/usb/r8152.c 5876 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/usb/r8152.c 5851 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/usb/r8152.c 5837 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/usb/r8152.c 5774 */;
	pm_message_t cocci_id/* drivers/net/usb/r8152.c 5729 */;
	bool cocci_id/* drivers/net/usb/r8152.c 5574 */;
	struct sockaddr cocci_id/* drivers/net/usb/r8152.c 5538 */;
	struct notifier_block *cocci_id/* drivers/net/usb/r8152.c 5162 */;
	struct work_struct *cocci_id/* drivers/net/usb/r8152.c 5128 */;
	enum spd_duplex{NWAY_10M_HALF, NWAY_10M_FULL, NWAY_100M_HALF, NWAY_100M_FULL, NWAY_1000M_FULL, FORCE_10M_HALF, FORCE_10M_FULL, FORCE_100M_HALF, FORCE_100M_FULL,} cocci_id/* drivers/net/usb/r8152.c 498 */;
	struct fw_phy_nc *cocci_id/* drivers/net/usb/r8152.c 4054 */;
	struct fw_mac *cocci_id/* drivers/net/usb/r8152.c 4041 */;
	struct fw_block *cocci_id/* drivers/net/usb/r8152.c 4034 */;
	struct fw_header cocci_id/* drivers/net/usb/r8152.c 4033 */;
	struct fw_phy_patch_key *cocci_id/* drivers/net/usb/r8152.c 4020 */;
	struct fw_header *cocci_id/* drivers/net/usb/r8152.c 4019 */;
	const struct firmware *cocci_id/* drivers/net/usb/r8152.c 4018 */;
	struct rtl_fw *cocci_id/* drivers/net/usb/r8152.c 4017 */;
	long cocci_id/* drivers/net/usb/r8152.c 3784 */;
	struct shash_desc *cocci_id/* drivers/net/usb/r8152.c 3742 */;
	struct crypto_shash *cocci_id/* drivers/net/usb/r8152.c 3741 */;
	unsigned char cocci_id/* drivers/net/usb/r8152.c 3740 */[sizeof(fw_hdr->checksum)];
	size_t cocci_id/* drivers/net/usb/r8152.c 3738 */;
	u8 cocci_id/* drivers/net/usb/r8152.c 3051 */[8];
	void cocci_id/* drivers/net/usb/r8152.c 2990 */;
	u32 cocci_id/* drivers/net/usb/r8152.c 2966 */;
	struct r8152 *cocci_id/* drivers/net/usb/r8152.c 2966 */;
	struct list_head cocci_id/* drivers/net/usb/r8152.c 2683 */;
	netdev_tx_t cocci_id/* drivers/net/usb/r8152.c 2590 */;
	int cocci_id/* drivers/net/usb/r8152.c 2559 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/usb/r8152.c 2554 */;
	__le32 cocci_id/* drivers/net/usb/r8152.c 2533 */[2];
	u32 cocci_id/* drivers/net/usb/r8152.c 2532 */[2];
	struct net_device *cocci_id/* drivers/net/usb/r8152.c 2529 */;
	usb_complete_t cocci_id/* drivers/net/usb/r8152.c 2466 */;
	struct r8152 cocci_id/* drivers/net/usb/r8152.c 2438 */;
	struct napi_struct *cocci_id/* drivers/net/usb/r8152.c 2436 */;
	struct rx_desc cocci_id/* drivers/net/usb/r8152.c 2279 */;
	struct rx_agg cocci_id/* drivers/net/usb/r8152.c 2270 */;
	struct rx_agg *cocci_id/* drivers/net/usb/r8152.c 2193 */;
	void *cocci_id/* drivers/net/usb/r8152.c 2193 */;
	struct rx_desc *cocci_id/* drivers/net/usb/r8152.c 2159 */;
	struct tx_desc *cocci_id/* drivers/net/usb/r8152.c 2077 */;
	struct tx_desc cocci_id/* drivers/net/usb/r8152.c 2076 */;
	struct tcphdr *cocci_id/* drivers/net/usb/r8152.c 1941 */;
	const struct ipv6hdr *cocci_id/* drivers/net/usb/r8152.c 1940 */;
	struct sk_buff *cocci_id/* drivers/net/usb/r8152.c 1938 */;
	struct net_device_stats *cocci_id/* drivers/net/usb/r8152.c 1925 */;
	struct sk_buff_head cocci_id/* drivers/net/usb/r8152.c 1900 */;
	netdev_features_t cocci_id/* drivers/net/usb/r8152.c 1899 */;
	struct sk_buff_head *cocci_id/* drivers/net/usb/r8152.c 1896 */;
	struct tx_agg cocci_id/* drivers/net/usb/r8152.c 1884 */;
	struct list_head *cocci_id/* drivers/net/usb/r8152.c 1880 */;
	struct tx_agg *cocci_id/* drivers/net/usb/r8152.c 1870 */;
	u8 *cocci_id/* drivers/net/usb/r8152.c 1821 */;
	struct urb *cocci_id/* drivers/net/usb/r8152.c 1820 */;
	struct usb_host_endpoint *cocci_id/* drivers/net/usb/r8152.c 1800 */;
	struct usb_host_interface *cocci_id/* drivers/net/usb/r8152.c 1799 */;
	struct usb_interface *cocci_id/* drivers/net/usb/r8152.c 1798 */;
	unsigned long cocci_id/* drivers/net/usb/r8152.c 1729 */;
	gfp_t cocci_id/* drivers/net/usb/r8152.c 1723 */;
	uintptr_t cocci_id/* drivers/net/usb/r8152.c 1704 */;
	__le16 *cocci_id/* drivers/net/usb/r8152.c 1642 */;
	struct sockaddr *cocci_id/* drivers/net/usb/r8152.c 1481 */;
	acpi_object_type cocci_id/* drivers/net/usb/r8152.c 1413 */;
	char *cocci_id/* drivers/net/usb/r8152.c 1412 */;
	unsigned char cocci_id/* drivers/net/usb/r8152.c 1411 */[6];
	union acpi_object *cocci_id/* drivers/net/usb/r8152.c 1408 */;
	struct acpi_buffer cocci_id/* drivers/net/usb/r8152.c 1407 */;
	acpi_status cocci_id/* drivers/net/usb/r8152.c 1406 */;
	int cocci_id/* drivers/net/usb/r8152.c 1369 */(struct r8152 *tp, struct rx_agg *agg, gfp_t mem_flags);
	__le32 cocci_id/* drivers/net/usb/r8152.c 1254 */;
	u8 cocci_id/* drivers/net/usb/r8152.c 1251 */;
	u16 cocci_id/* drivers/net/usb/r8152.c 1064 */;
	unsigned int cocci_id/* drivers/net/usb/r8152.c 1009 */;
	const int cocci_id/* drivers/net/usb/r8152.c 1008 */;
}
