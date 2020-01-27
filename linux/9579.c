cocci_test_suite() {
	struct rx_hdr {
		__le16 status,len;
		u8 rssi[2];
		u8 rate;
		u8 freq;
		__le16 tmp[4];
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 995 */;
	struct {
		unsigned int offset:15;
		unsigned int eoc:1;
		unsigned int len:15;
		unsigned int valid:1;
		dma_addr_t host_addr;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 987 */;
	struct {
		unsigned int rid:16;
		unsigned int len:15;
		unsigned int valid:1;
		dma_addr_t host_addr;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 980 */;
	struct {
		miccntx mCtx;
		miccntx uCtx;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 975 */;
	struct {
		emmh32_context seed;
		u32 rx;
		u32 tx;
		u32 window;
		u8 valid;
		u8 key[16];
	} cocci_id/* drivers/net/wireless/cisco/airo.c 966 */;
	struct {
		__be32 coeff[((EMMH32_MSGLEN_MAX) + 3) >> 2];
		u64 accum;
		int position;
		union {
			u8 d8[4];
			__be32 d32;
		} part;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 956 */;
	struct {
		u32 size;
		u8 enabled;
		u32 rxSuccess;
		u32 rxIncorrectMIC;
		u32 rxNotMICed;
		u32 rxMICPlummed;
		u32 rxWrongSequence;
		u32 reserve[32];
	} cocci_id/* drivers/net/wireless/cisco/airo.c 945 */;
	const char cocci_id/* drivers/net/wireless/cisco/airo.c 937 */[];
	struct aironet_ioctl {
		unsigned short command;
		unsigned short len;
		unsigned short ridnum;
		unsigned char __user *data;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 930 */;
	struct {
		u8 da[ETH_ALEN];
		u8 sa[ETH_ALEN];
	} cocci_id/* drivers/net/wireless/cisco/airo.c 848 */;
	struct MICBuffer {
		__be16 typelen;
		union {
			u8 snap[8];
			struct {
				u8 dsap;
				u8 ssap;
				u8 control;
				u8 orgcode[3];
				u8 fieldtype[2];
			} llc;
		} u;
		__be32 mic;
		__be32 seq;
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 831 */;
	struct MICBuffer cocci_id/* drivers/net/wireless/cisco/airo.c 830 */;
	struct MICRid {
		__le16 len;
		__le16 state;
		__le16 multicastValid;
		u8 multicast[16];
		__le16 unicastValid;
		u8 unicast[16];
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 821 */;
	struct MICRid cocci_id/* drivers/net/wireless/cisco/airo.c 820 */;
	struct tdsRssiRid {
		u16 len;
		tdsRssiEntry x[256];
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 815 */;
	struct tdsRssiRid cocci_id/* drivers/net/wireless/cisco/airo.c 814 */;
	unsigned char cocci_id/* drivers/net/wireless/cisco/airo.c 8104 */;
	struct tdsRssiEntry {
		u8 rssipct;
		u8 rssidBm;
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 809 */;
	struct tdsRssiEntry cocci_id/* drivers/net/wireless/cisco/airo.c 808 */;
	struct {
		BSSListRid bss;
		struct list_head list;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 803 */;
	struct pci_driver cocci_id/* drivers/net/wireless/cisco/airo.c 80 */;
	aironet_ioctl *cocci_id/* drivers/net/wireless/cisco/airo.c 7952 */;
	ConfigRid *cocci_id/* drivers/net/wireless/cisco/airo.c 7924 */;
	int (*cocci_id/* drivers/net/wireless/cisco/airo.c 7842 */)(struct airo_info *,
								    u16 rid,
								    const void *,
								    int, int);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 78 */(struct pci_dev *pdev);
	struct iw_statistics *cocci_id/* drivers/net/wireless/cisco/airo.c 7747 */;
	struct BSSListRid {
		__le16 len;
		__le16 index;
#define RADIO_FH 1
#define RADIO_DS 2
#define RADIO_TMA 4
		__le16 radioType;
		u8 bssid[ETH_ALEN];
		u8 zero;
		u8 ssidLen;
		u8 ssid[32];
		__le16 dBm;
#define CAP_ESS cpu_to_le16(1 << 0)
#define CAP_IBSS cpu_to_le16(1 << 1)
#define CAP_PRIVACY cpu_to_le16(1 << 4)
#define CAP_SHORTHDR cpu_to_le16(1 << 5)
						__le16 cap;
		__le16 beaconInterval;
		u8 rates[8];
		struct {
			__le16 dwell;
			u8 hopSet;
			u8 hopPattern;
			u8 hopIndex;
			u8 fill;
		} fh;
		__le16 dsChannel;
		__le16 atimWindow;
		BSSListRidExtra extra;
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 770 */;
	int cocci_id/* drivers/net/wireless/cisco/airo.c 77 */(struct pci_dev *pdev, pm_message_t state);
	struct BSSListRid cocci_id/* drivers/net/wireless/cisco/airo.c 769 */;
	aironet_ioctl cocci_id/* drivers/net/wireless/cisco/airo.c 7634 */;
	struct BSSListRidExtra {
		__le16 unknown[4];
		u8 fixed[12];
		u8 iep[624];
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 763 */;
	struct BSSListRidExtra cocci_id/* drivers/net/wireless/cisco/airo.c 762 */;
	struct ifreq *cocci_id/* drivers/net/wireless/cisco/airo.c 7618 */;
	void cocci_id/* drivers/net/wireless/cisco/airo.c 76 */(struct pci_dev *);
	iw_handler cocci_id/* drivers/net/wireless/cisco/airo.c 7525 */;
	const iw_handler cocci_id/* drivers/net/wireless/cisco/airo.c 7523 */[];
	const struct iw_priv_args cocci_id/* drivers/net/wireless/cisco/airo.c 7515 */[];
	int cocci_id/* drivers/net/wireless/cisco/airo.c 75 */(struct pci_dev *, const struct pci_device_id *);
	SsidRid cocci_id/* drivers/net/wireless/cisco/airo.c 7487 */;
	char *cocci_id/* drivers/net/wireless/cisco/airo.c 7476 */;
	struct iw_request_info *cocci_id/* drivers/net/wireless/cisco/airo.c 7474 */;
	BSSListElement *cocci_id/* drivers/net/wireless/cisco/airo.c 7435 */;
	unsigned int cocci_id/* drivers/net/wireless/cisco/airo.c 7371 */;
	struct CapabilityRid {
		__le16 len;
		char oui[3];
		char zero;
		__le16 prodNum;
		char manName[32];
		char prodName[16];
		char prodVer[8];
		char factoryAddr[ETH_ALEN];
		char aironetAddr[ETH_ALEN];
		__le16 radioType;
		__le16 country;
		char callid[ETH_ALEN];
		char supportedRates[8];
		char rxDiversity;
		char txDiversity;
		__le16 txPowerLevels[8];
		__le16 hardVer;
		__le16 hardCap;
		__le16 tempRange;
		__le16 softVer;
		__le16 softSubVer;
		__le16 interfaceVer;
		__le16 softCap;
		__le16 bootBlockVer;
		__le16 requiredHard;
		__le16 extSoftCap;
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 732 */;
	struct CapabilityRid cocci_id/* drivers/net/wireless/cisco/airo.c 731 */;
	struct APListRid {
		__le16 len;
		u8 ap[4][ETH_ALEN];
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 726 */;
	struct iw_event cocci_id/* drivers/net/wireless/cisco/airo.c 7258 */;
	BSSListRid *cocci_id/* drivers/net/wireless/cisco/airo.c 7255 */;
	struct APListRid cocci_id/* drivers/net/wireless/cisco/airo.c 725 */;
	APListRid cocci_id/* drivers/net/wireless/cisco/airo.c 7207 */;
	struct StatsRid {
		__le16 len;
		__le16 spacer;
		__le32 vals[100];
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 719 */;
	struct iw_quality cocci_id/* drivers/net/wireless/cisco/airo.c 7186 */;
	struct sockaddr cocci_id/* drivers/net/wireless/cisco/airo.c 7185 */;
	struct StatsRid cocci_id/* drivers/net/wireless/cisco/airo.c 718 */;
	StatusRid cocci_id/* drivers/net/wireless/cisco/airo.c 7162 */;
	struct iw_quality *cocci_id/* drivers/net/wireless/cisco/airo.c 7127 */;
	struct sockaddr *cocci_id/* drivers/net/wireless/cisco/airo.c 7126 */;
	struct iw_point *cocci_id/* drivers/net/wireless/cisco/airo.c 7122 */;
	struct iw_range cocci_id/* drivers/net/wireless/cisco/airo.c 6880 */;
	struct iw_range *cocci_id/* drivers/net/wireless/cisco/airo.c 6873 */;
	__le16 cocci_id/* drivers/net/wireless/cisco/airo.c 6699 */;
	struct iw_param *cocci_id/* drivers/net/wireless/cisco/airo.c 6698 */;
	union iwreq_data *cocci_id/* drivers/net/wireless/cisco/airo.c 6695 */;
	struct StatusRid {
		__le16 len;
		u8 mac[ETH_ALEN];
		__le16 mode;
		__le16 errorCode;
		__le16 sigQuality;
		__le16 SSIDlen;
		char SSID[32];
		char apName[16];
		u8 bssid[4][ETH_ALEN];
		__le16 beaconPeriod;
		__le16 dimPeriod;
		__le16 atimDuration;
		__le16 hopPeriod;
		__le16 channelSet;
		__le16 channel;
		__le16 hopsToBackbone;
		__le16 apTotalLoad;
		__le16 generatedLoad;
		__le16 accumulatedArl;
		__le16 signalQuality;
		__le16 currentXmitRate;
		__le16 apDevExtensions;
		__le16 normalizedSignalStrength;
		__le16 shortPreamble;
		u8 apIP[4];
		u8 noisePercent;
		u8 noisedBm;
		u8 noiseAvePercent;
		u8 noiseAvedBm;
		u8 noiseMaxPercent;
		u8 noiseMaxdBm;
		__le16 load;
		u8 carrier[4];
		__le16 assocStatus;
#define STAT_NOPACKETS 0
#define STAT_NOCARRIERSET 10
#define STAT_GOTCARRIERSET 11
#define STAT_WRONGSSID 20
#define STAT_BADCHANNEL 25
#define STAT_BADBITRATES 30
#define STAT_BADPRIVACY 35
#define STAT_APFOUND 40
#define STAT_APREJECTED 50
#define STAT_AUTHENTICATING 60
#define STAT_DEAUTHENTICATED 61
#define STAT_AUTHTIMEOUT 62
#define STAT_ASSOCIATING 70
#define STAT_DEASSOCIATED 71
#define STAT_ASSOCTIMEOUT 72
#define STAT_NOTAIROAP 73
#define STAT_ASSOCIATED 80
#define STAT_LEAPING 90
#define STAT_LEAPFAILED 91
#define STAT_LEAPTIMEDOUT 92
#define STAT_LEAPCOMPLETE 93
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 660 */;
	struct StatusRid cocci_id/* drivers/net/wireless/cisco/airo.c 659 */;
	struct iw_encode_ext *cocci_id/* drivers/net/wireless/cisco/airo.c 6563 */;
	u8 cocci_id/* drivers/net/wireless/cisco/airo.c 6402 */[16];
	wep_key_t cocci_id/* drivers/net/wireless/cisco/airo.c 6317 */;
	const struct pci_device_id cocci_id/* drivers/net/wireless/cisco/airo.c 63 */[];
	__u32 *cocci_id/* drivers/net/wireless/cisco/airo.c 6262 */;
	APListRid *cocci_id/* drivers/net/wireless/cisco/airo.c 5928 */;
	unsigned cocci_id/* drivers/net/wireless/cisco/airo.c 5863 */;
	struct iw_freq *cocci_id/* drivers/net/wireless/cisco/airo.c 5817 */;
	StatusRid *cocci_id/* drivers/net/wireless/cisco/airo.c 5727 */;
	CapabilityRid *cocci_id/* drivers/net/wireless/cisco/airo.c 5727 */;
	u8 cocci_id/* drivers/net/wireless/cisco/airo.c 5712 */;
	tdsRssiEntry *cocci_id/* drivers/net/wireless/cisco/airo.c 5712 */;
	struct airo_info cocci_id/* drivers/net/wireless/cisco/airo.c 5684 */;
	void __exit cocci_id/* drivers/net/wireless/cisco/airo.c 5680 */;
	int __init cocci_id/* drivers/net/wireless/cisco/airo.c 5642 */;
	pci_power_t cocci_id/* drivers/net/wireless/cisco/airo.c 5604 */;
	pm_message_t cocci_id/* drivers/net/wireless/cisco/airo.c 5572 */;
	const struct pci_device_id *cocci_id/* drivers/net/wireless/cisco/airo.c 5542 */;
	struct proc_data cocci_id/* drivers/net/wireless/cisco/airo.c 5387 */;
	size_t cocci_id/* drivers/net/wireless/cisco/airo.c 5365 */;
	struct ConfigRid {
		__le16 len;
		__le16 opmode;
#define MODE_STA_IBSS cpu_to_le16(0)
#define MODE_STA_ESS cpu_to_le16(1)
#define MODE_AP cpu_to_le16(2)
#define MODE_AP_RPTR cpu_to_le16(3)
#define MODE_CFG_MASK cpu_to_le16(0xff)
#define MODE_ETHERNET_HOST cpu_to_le16(0 << 8)
#define MODE_LLC_HOST cpu_to_le16(1 << 8)
#define MODE_AIRONET_EXTEND cpu_to_le16(1 << 9)
#define MODE_AP_INTERFACE cpu_to_le16(1 << 10)
#define MODE_ANTENNA_ALIGN cpu_to_le16(1 << 11)
#define MODE_ETHER_LLC cpu_to_le16(1 << 12)
#define MODE_LEAF_NODE cpu_to_le16(1 << 13)
#define MODE_CF_POLLABLE cpu_to_le16(1 << 14)
#define MODE_MIC cpu_to_le16(1 << 15)
																__le16 rmode;
#define RXMODE_BC_MC_ADDR cpu_to_le16(0)
#define RXMODE_BC_ADDR cpu_to_le16(1)
#define RXMODE_ADDR cpu_to_le16(2)
#define RXMODE_RFMON cpu_to_le16(3)
#define RXMODE_RFMON_ANYBSS cpu_to_le16(4)
#define RXMODE_LANMON cpu_to_le16(5)
#define RXMODE_MASK cpu_to_le16(255)
#define RXMODE_DISABLE_802_3_HEADER cpu_to_le16(1 << 8)
#define RXMODE_FULL_MASK (RXMODE_MASK | RXMODE_DISABLE_802_3_HEADER)
#define RXMODE_NORMALIZED_RSSI cpu_to_le16(1 << 9)
												__le16 fragThresh;
		__le16 rtsThres;
		u8 macAddr[ETH_ALEN];
		u8 rates[8];
		__le16 shortRetryLimit;
		__le16 longRetryLimit;
		__le16 txLifetime;
		__le16 rxLifetime;
		__le16 stationary;
		__le16 ordering;
		__le16 u16deviceType;
		__le16 cfpRate;
		__le16 cfpDuration;
		__le16 _reserved1[3];
		__le16 scanMode;
#define SCANMODE_ACTIVE cpu_to_le16(0)
#define SCANMODE_PASSIVE cpu_to_le16(1)
#define SCANMODE_AIROSCAN cpu_to_le16(2)
					__le16 probeDelay;
		__le16 probeEnergyTimeout;
		__le16 probeResponseTimeout;
		__le16 beaconListenTimeout;
		__le16 joinNetTimeout;
		__le16 authTimeout;
		__le16 authType;
#define AUTH_OPEN cpu_to_le16(0x1)
#define AUTH_ENCRYPT cpu_to_le16(0x101)
#define AUTH_SHAREDKEY cpu_to_le16(0x102)
#define AUTH_ALLOW_UNENCRYPTED cpu_to_le16(0x200)
						__le16 associationTimeout;
		__le16 specifiedApTimeout;
		__le16 offlineScanInterval;
		__le16 offlineScanDuration;
		__le16 linkLossDelay;
		__le16 maxBeaconLostTime;
		__le16 refreshInterval;
#define DISABLE_REFRESH cpu_to_le16(0xFFFF)
			__le16 _reserved1a[1];
		__le16 powerSaveMode;
#define POWERSAVE_CAM cpu_to_le16(0)
#define POWERSAVE_PSP cpu_to_le16(1)
#define POWERSAVE_PSPCAM cpu_to_le16(2)
					__le16 sleepForDtims;
		__le16 listenInterval;
		__le16 fastListenInterval;
		__le16 listenDecay;
		__le16 fastListenDelay;
		__le16 _reserved2[2];
		__le16 beaconPeriod;
		__le16 atimDuration;
		__le16 hopPeriod;
		__le16 channelSet;
		__le16 channel;
		__le16 dtimPeriod;
		__le16 bridgeDistance;
		__le16 radioID;
		__le16 radioType;
#define RADIOTYPE_DEFAULT cpu_to_le16(0)
#define RADIOTYPE_802_11 cpu_to_le16(1)
#define RADIOTYPE_LEGACY cpu_to_le16(2)
					u8 rxDiversity;
		u8 txDiversity;
		__le16 txPower;
#define TXPOWER_DEFAULT 0
		__le16 rssiThreshold;
#define RSSI_DEFAULT 0
		__le16 modulation;
#define PREAMBLE_AUTO cpu_to_le16(0)
#define PREAMBLE_LONG cpu_to_le16(1)
#define PREAMBLE_SHORT cpu_to_le16(2)
					__le16 preamble;
		__le16 homeProduct;
		__le16 radioSpecific;
		u8 nodeName[16];
		__le16 arlThreshold;
		__le16 arlDecay;
		__le16 arlDelay;
		__le16 _reserved4[1];
		u8 magicAction;
#define MAGIC_ACTION_STSCHG 1
#define MAGIC_ACTION_RESUME 2
#define MAGIC_IGNORE_MCAST (1 << 8)
#define MAGIC_IGNORE_BCAST (1 << 9)
#define MAGIC_SWITCH_TO_PSP (0 << 10)
#define MAGIC_STAY_IN_CAM (1 << 10)
						u8 magicControl;
		__le16 autoWake;
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 536 */;
	struct ConfigRid cocci_id/* drivers/net/wireless/cisco/airo.c 535 */;
	struct ModulationRid {
		__le16 len;
		__le16 modulation;
#define MOD_DEFAULT cpu_to_le16(0)
#define MOD_CCK cpu_to_le16(1)
#define MOD_MOK cpu_to_le16(2)
				}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 527 */;
	struct ModulationRid cocci_id/* drivers/net/wireless/cisco/airo.c 526 */;
	char cocci_id/* drivers/net/wireless/cisco/airo.c 5242 */[16];
	char cocci_id/* drivers/net/wireless/cisco/airo.c 5223 */;
	struct SsidRid {
		__le16 len;
		Ssid ssids[3];
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 521 */;
	struct SsidRid cocci_id/* drivers/net/wireless/cisco/airo.c 520 */;
	const unsigned char cocci_id/* drivers/net/wireless/cisco/airo.c 5195 */[ETH_ALEN];
	WepKeyRid cocci_id/* drivers/net/wireless/cisco/airo.c 5151 */;
	struct Ssid {
		__le16 len;
		u8 ssid[32];
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 515 */;
	struct Ssid cocci_id/* drivers/net/wireless/cisco/airo.c 514 */;
	struct proc_data *cocci_id/* drivers/net/wireless/cisco/airo.c 5116 */;
	struct inode *cocci_id/* drivers/net/wireless/cisco/airo.c 5115 */;
	struct file *cocci_id/* drivers/net/wireless/cisco/airo.c 5115 */;
	struct WepKeyRid {
		__le16 len;
		__le16 kindex;
		u8 mac[ETH_ALEN];
		__le16 klen;
		u8 key[16];
	}__packed cocci_id/* drivers/net/wireless/cisco/airo.c 505 */;
	struct WepKeyRid cocci_id/* drivers/net/wireless/cisco/airo.c 504 */;
	struct {
		u16 status;
		u16 rsp0;
		u16 rsp1;
		u16 rsp2;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 489 */;
	struct {
		u16 cmd;
		u16 parm0;
		u16 parm1;
		u16 parm2;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 482 */;
	int cocci_id/* drivers/net/wireless/cisco/airo.c 4768 */(struct net_device *dev, struct iw_request_info *info, void *zwrq, char *extra);
	int *cocci_id/* drivers/net/wireless/cisco/airo.c 4755 */;
	int cocci_id/* drivers/net/wireless/cisco/airo.c 4701 */(struct inode *, struct file *, u16);
	const char __user *cocci_id/* drivers/net/wireless/cisco/airo.c 4616 */;
	loff_t *cocci_id/* drivers/net/wireless/cisco/airo.c 4600 */;
	char __user *cocci_id/* drivers/net/wireless/cisco/airo.c 4598 */;
	ssize_t cocci_id/* drivers/net/wireless/cisco/airo.c 4597 */;
	struct proc_data {
		int release_buffer;
		int readlen;
		char *rbuffer;
		int writelen;
		int maxwritelen;
		char *wbuffer;
		void (*on_close)(struct inode *, struct file *);
	} cocci_id/* drivers/net/wireless/cisco/airo.c 4494 */;
	struct proc_dir_entry *cocci_id/* drivers/net/wireless/cisco/airo.c 4492 */;
	const struct file_operations cocci_id/* drivers/net/wireless/cisco/airo.c 4465 */;
	int cocci_id/* drivers/net/wireless/cisco/airo.c 4418 */(struct inode *inode, struct file *file);
	ssize_t cocci_id/* drivers/net/wireless/cisco/airo.c 4408 */(struct file *file, const char __user *buffer, size_t len, loff_t *offset);
	ssize_t cocci_id/* drivers/net/wireless/cisco/airo.c 4403 */(struct file *file, char __user *buffer, size_t len, loff_t *offset);
	u8 cocci_id/* drivers/net/wireless/cisco/airo.c 4364 */[(30 - 10) + 2 + 6];
	u16 *cocci_id/* drivers/net/wireless/cisco/airo.c 4207 */;
	const void *cocci_id/* drivers/net/wireless/cisco/airo.c 4184 */;
	__le16 *cocci_id/* drivers/net/wireless/cisco/airo.c 4163 */;
	Rid cocci_id/* drivers/net/wireless/cisco/airo.c 4142 */;
	void *cocci_id/* drivers/net/wireless/cisco/airo.c 4118 */;
	Resp cocci_id/* drivers/net/wireless/cisco/airo.c 4102 */;
	Cmd cocci_id/* drivers/net/wireless/cisco/airo.c 4101 */;
	const __le16 *cocci_id/* drivers/net/wireless/cisco/airo.c 4087 */;
	Resp *cocci_id/* drivers/net/wireless/cisco/airo.c 3934 */;
	Cmd *cocci_id/* drivers/net/wireless/cisco/airo.c 3934 */;
	tdsRssiRid cocci_id/* drivers/net/wireless/cisco/airo.c 3840 */;
	int cocci_id/* drivers/net/wireless/cisco/airo.c 3555 */;
	unsigned short cocci_id/* drivers/net/wireless/cisco/airo.c 3547 */;
	u16 cocci_id/* drivers/net/wireless/cisco/airo.c 3546 */;
	struct airo_info *cocci_id/* drivers/net/wireless/cisco/airo.c 3546 */;
	irqreturn_t cocci_id/* drivers/net/wireless/cisco/airo.c 3469 */;
	unsigned long cocci_id/* drivers/net/wireless/cisco/airo.c 3423 */;
	etherHead *cocci_id/* drivers/net/wireless/cisco/airo.c 3368 */;
	MICBuffer cocci_id/* drivers/net/wireless/cisco/airo.c 3349 */;
	struct rx_hdr cocci_id/* drivers/net/wireless/cisco/airo.c 3281 */;
	union iwreq_data cocci_id/* drivers/net/wireless/cisco/airo.c 3233 */;
	const char *cocci_id/* drivers/net/wireless/cisco/airo.c 3183 */;
	wait_queue_entry_t cocci_id/* drivers/net/wireless/cisco/airo.c 3066 */;
	BSSListRidExtra cocci_id/* drivers/net/wireless/cisco/airo.c 2887 */;
	BSSListRid cocci_id/* drivers/net/wireless/cisco/airo.c 2880 */;
	CapabilityRid cocci_id/* drivers/net/wireless/cisco/airo.c 2769 */;
	struct device *cocci_id/* drivers/net/wireless/cisco/airo.c 2764 */;
	struct pci_dev *cocci_id/* drivers/net/wireless/cisco/airo.c 2763 */;
	struct net_device *cocci_id/* drivers/net/wireless/cisco/airo.c 2762 */;
	BSSListElement cocci_id/* drivers/net/wireless/cisco/airo.c 2712 */;
	const struct net_device_ops cocci_id/* drivers/net/wireless/cisco/airo.c 2641 */;
	const struct header_ops cocci_id/* drivers/net/wireless/cisco/airo.c 2637 */;
	unsigned char __iomem *cocci_id/* drivers/net/wireless/cisco/airo.c 2530 */;
	unsigned char *cocci_id/* drivers/net/wireless/cisco/airo.c 2529 */;
	dma_addr_t cocci_id/* drivers/net/wireless/cisco/airo.c 2528 */;
	TxFid cocci_id/* drivers/net/wireless/cisco/airo.c 2487 */;
	RxFid cocci_id/* drivers/net/wireless/cisco/airo.c 2471 */;
	const struct sk_buff *cocci_id/* drivers/net/wireless/cisco/airo.c 2422 */;
	kgid_t cocci_id/* drivers/net/wireless/cisco/airo.c 240 */;
	kuid_t cocci_id/* drivers/net/wireless/cisco/airo.c 237 */;
	struct net_device_stats *cocci_id/* drivers/net/wireless/cisco/airo.c 2267 */;
	__le32 *cocci_id/* drivers/net/wireless/cisco/airo.c 2237 */;
	StatsRid cocci_id/* drivers/net/wireless/cisco/airo.c 2236 */;
	int cocci_id/* drivers/net/wireless/cisco/airo.c 223 */[4];
	char *cocci_id/* drivers/net/wireless/cisco/airo.c 221 */[3];
	int cocci_id/* drivers/net/wireless/cisco/airo.c 220 */[8];
	s16 cocci_id/* drivers/net/wireless/cisco/airo.c 2121 */;
	netdev_tx_t cocci_id/* drivers/net/wireless/cisco/airo.c 2118 */;
	u32 *cocci_id/* drivers/net/wireless/cisco/airo.c 2098 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/cisco/airo.c 2096 */;
	char cocci_id/* drivers/net/wireless/cisco/airo.c 2069 */[0x18];
	WifiCtlHdr *cocci_id/* drivers/net/wireless/cisco/airo.c 2046 */;
	etherHead cocci_id/* drivers/net/wireless/cisco/airo.c 2011 */;
	__be16 *cocci_id/* drivers/net/wireless/cisco/airo.c 2008 */;
	WifiHdr cocci_id/* drivers/net/wireless/cisco/airo.c 1985 */;
	StatsRid *cocci_id/* drivers/net/wireless/cisco/airo.c 1858 */;
	ConfigRid cocci_id/* drivers/net/wireless/cisco/airo.c 1797 */;
	SsidRid *cocci_id/* drivers/net/wireless/cisco/airo.c 1784 */;
	WepKeyRid *cocci_id/* drivers/net/wireless/cisco/airo.c 1764 */;
	s64 cocci_id/* drivers/net/wireless/cisco/airo.c 1714 */;
	u64 cocci_id/* drivers/net/wireless/cisco/airo.c 1713 */;
	emmh32_context *cocci_id/* drivers/net/wireless/cisco/airo.c 1708 */;
	u32 cocci_id/* drivers/net/wireless/cisco/airo.c 1705 */[4];
	__be32 *cocci_id/* drivers/net/wireless/cisco/airo.c 1689 */;
	u8 cocci_id/* drivers/net/wireless/cisco/airo.c 1641 */[AES_BLOCK_SIZE];
	struct scatterlist cocci_id/* drivers/net/wireless/cisco/airo.c 1640 */;
	u32 cocci_id/* drivers/net/wireless/cisco/airo.c 1606 */;
	miccntx *cocci_id/* drivers/net/wireless/cisco/airo.c 1606 */;
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1606 */;
	s32 cocci_id/* drivers/net/wireless/cisco/airo.c 1581 */;
	mic_error cocci_id/* drivers/net/wireless/cisco/airo.c 1460 */;
	u8 cocci_id/* drivers/net/wireless/cisco/airo.c 1459 */[4];
	MICBuffer *cocci_id/* drivers/net/wireless/cisco/airo.c 1454 */;
	enum{NONE, NOMIC, NOMICPLUMMED, SEQUENCE, INCORRECTMIC,} cocci_id/* drivers/net/wireless/cisco/airo.c 1433 */;
	const u8 cocci_id/* drivers/net/wireless/cisco/airo.c 1380 */[];
	miccntx cocci_id/* drivers/net/wireless/cisco/airo.c 1374 */;
	MICRid cocci_id/* drivers/net/wireless/cisco/airo.c 1330 */;
	struct crypto_sync_skcipher *cocci_id/* drivers/net/wireless/cisco/airo.c 1304 */;
	u8 *cocci_id/* drivers/net/wireless/cisco/airo.c 1303 */;
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1301 */(struct airo_info *ai, int byte, int dwelltime);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1300 */(emmh32_context *context, u8 digest[4]);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1299 */(emmh32_context *context, u8 *pOctets, int len);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1298 */(emmh32_context *context);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1296 */(emmh32_context *context, u8 *pkey, int keylen, struct crypto_sync_skcipher *tfm);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1295 */(miccntx *context, u32 micSeq);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1294 */(struct airo_info *ai, miccntx *context, int mcast, u32 micSeq);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1270 */(struct airo_info *ai, struct net_device *dev);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1268 */(struct airo_info *ai, int matchbyte, int dwelltime);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1266 */(struct airo_info *ai);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1261 */(struct net_device *dev, struct airo_info *apriv);
	struct airo_info {
		struct net_device *dev;
		struct list_head dev_list;
#define MAX_FIDS 6
#define MPI_MAX_FIDS 1
		u32 fids[MAX_FIDS];
		ConfigRid config;
		char keyindex;
		char defindex;
		struct proc_dir_entry *proc_entry;
		spinlock_t aux_lock;
#define FLAG_RADIO_OFF 0
#define FLAG_RADIO_DOWN 1
#define FLAG_RADIO_MASK 0x03
#define FLAG_ENABLED 2
#define FLAG_ADHOC 3
#define FLAG_MIC_CAPABLE 4
#define FLAG_UPDATE_MULTI 5
#define FLAG_UPDATE_UNI 6
#define FLAG_802_11 7
#define FLAG_PROMISC 8
#define FLAG_PENDING_XMIT 9
#define FLAG_PENDING_XMIT11 10
#define FLAG_MPI 11
#define FLAG_REGISTERED 12
#define FLAG_COMMIT 13
#define FLAG_RESET 14
#define FLAG_FLASHING 15
#define FLAG_WPA_CAPABLE 16
		unsigned long flags;
#define JOB_DIE 0
#define JOB_XMIT 1
#define JOB_XMIT11 2
#define JOB_STATS 3
#define JOB_PROMISC 4
#define JOB_MIC 5
#define JOB_EVENT 6
#define JOB_AUTOWEP 7
#define JOB_WSTATS 8
#define JOB_SCAN_RESULTS 9
		unsigned long jobs;
		int (*bap_read)(struct airo_info *, __le16 *pu16Dst, int bytelen, int whichbap);
		unsigned short *flash;
		tdsRssiEntry *rssi;
		struct task_struct *list_bss_task;
		struct task_struct *airo_thread_task;
		struct semaphore sem;
		wait_queue_head_t thr_wait;
		unsigned long expires;
		struct {
			struct sk_buff *skb;
			int fid;
		} xmit,xmit11;
		struct net_device *wifidev;
		struct iw_statistics wstats;
		unsigned long scan_timeout;
		struct iw_spy_data spy_data;
		struct iw_public_data wireless_data;
		struct crypto_sync_skcipher *tfm;
		mic_module mod[2];
		mic_statistics micstats;
		HostRxDesc rxfids[MPI_MAX_FIDS];
		HostTxDesc txfids[MPI_MAX_FIDS];
		HostRidDesc config_desc;
		unsigned long ridbus;
		struct sk_buff_head txq;
		struct pci_dev *pci;
		unsigned char __iomem *pcimem;
		unsigned char __iomem *pciaux;
		unsigned char *shared;
		dma_addr_t shared_dma;
		pm_message_t power;
		SsidRid *SSID;
		APListRid APList;
#define PCI_SHARED_LEN 2 * MPI_MAX_FIDS * PKTSIZE + RIDSIZE
		char proc_name[IFNAMSIZ];
		int wep_capable;
		int max_wep_idx;
		int last_auth;
		unsigned int bssListFirst;
		unsigned int bssListNext;
		unsigned int bssListRidLen;
		struct list_head network_list;
		struct list_head network_free_list;
		BSSListElement *networks;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 1160 */;
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1158 */(struct airo_info *ai);
	u8 cocci_id/* drivers/net/wireless/cisco/airo.c 1156 */(tdsRssiEntry *rssi_rid, u8 dbm);
	u8 cocci_id/* drivers/net/wireless/cisco/airo.c 1155 */(tdsRssiEntry *rssi_rid, u8 rssi);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1153 */(struct airo_info *ai, MICBuffer *mic, etherHead *pPacket, u16 payLen);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1152 */(struct airo_info *ai, etherHead *pPacket, MICBuffer *buffer, int len);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1148 */(struct net_device *dev, aironet_ioctl *comp);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1144 */(struct airo_info *local);
	struct iw_statistics *cocci_id/* drivers/net/wireless/cisco/airo.c 1143 */(struct net_device *dev);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1142 */(struct net_device *dev, struct ifreq *rq, int cmd);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1141 */(struct net_device *dev);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1140 */(void *data);
	irqreturn_t cocci_id/* drivers/net/wireless/cisco/airo.c 1139 */(int irq, void *dev_id);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1134 */(struct pci_dev *pci);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1133 */(struct net_device *dev);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1131 */(struct airo_info *, int len, char *pPacket);
	u16 cocci_id/* drivers/net/wireless/cisco/airo.c 1129 */(struct airo_info *, int lenPayload, int raw);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1127 */(struct airo_info *, u16 rid, const void *rid_data, int len, int dummy);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1125 */(struct airo_info *, u16 rid, const void *pBuf, int len, int lock);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1124 */(struct airo_info *, u16 rid, void *pBuf, int len, int lock);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1123 */(struct airo_info *, u16 rid, u16 accmd);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1121 */(struct airo_info *, const __le16 *pu16Src, int bytelen, int whichbap);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1117 */(struct airo_info *, __le16 *pu16Dst, int bytelen, int whichbap);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1116 */(struct airo_info *, u16 rid, u16 offset, int whichbap);
	u16 cocci_id/* drivers/net/wireless/cisco/airo.c 1115 */(struct airo_info *, Cmd *pCmd, Resp *pRsp);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1114 */(struct airo_info *);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1112 */(struct airo_info *ai, int lock);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1111 */(struct airo_info *ai, int lock);
	u16 cocci_id/* drivers/net/wireless/cisco/airo.c 1110 */(struct airo_info *, u8 *mac, int lock);
	unsigned short cocci_id/* drivers/net/wireless/cisco/airo.c 1109 */(struct airo_info *, u16 reg);
	void cocci_id/* drivers/net/wireless/cisco/airo.c 1108 */(struct airo_info *, u16 reg, u16 value);
	int cocci_id/* drivers/net/wireless/cisco/airo.c 1107 */(char *buffer, int *start, int limit);
	const struct iw_handler_def cocci_id/* drivers/net/wireless/cisco/airo.c 1101 */;
	struct wep_key_t {
		u16 len;
		u8 key[16];
	} cocci_id/* drivers/net/wireless/cisco/airo.c 1095 */;
	const char *cocci_id/* drivers/net/wireless/cisco/airo.c 109 */[];
	WifiCtlHdr cocci_id/* drivers/net/wireless/cisco/airo.c 1086 */;
	struct {
		TxCtlHdr ctlhdr;
		u16 fill1;
		u16 fill2;
		WifiHdr wifihdr;
		u16 gaplen;
		u16 status;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 1077 */;
	struct {
		u16 ctl;
		u16 duration;
		char addr1[6];
		char addr2[6];
		char addr3[6];
		u16 seq;
		char addr4[6];
	} cocci_id/* drivers/net/wireless/cisco/airo.c 1066 */;
	struct {
		u16 sw0;
		u16 sw1;
		u16 status;
		u16 len;
#define HOST_SET (1 << 0)
#define HOST_INT_TX (1 << 1)
#define HOST_INT_TXERR (1 << 2)
#define HOST_LCC_PAYLOAD (1 << 4)
#define HOST_DONT_RLSE (1 << 5)
#define HOST_DONT_RETRY (1 << 6)
#define HOST_CLR_AID (1 << 7)
#define HOST_RTS (1 << 9)
#define HOST_SHORT (1 << 10)
											u16 ctl;
		u16 aid;
		u16 retries;
		u16 fill;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 1046 */;
	struct {
		unsigned char __iomem *card_ram_off;
		Rid rid_desc;
		char *virtual_host_addr;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 1038 */;
	struct {
		unsigned char __iomem *card_ram_off;
		TxFid tx_desc;
		char *virtual_host_addr;
		int pending;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 1026 */;
	struct {
		unsigned char __iomem *card_ram_off;
		RxFid rx_desc;
		char *virtual_host_addr;
		int pending;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 1014 */;
	struct {
		unsigned int ctl:15;
		unsigned int rdy:1;
		unsigned int len:15;
		unsigned int valid:1;
		dma_addr_t host_addr;
	} cocci_id/* drivers/net/wireless/cisco/airo.c 1003 */;
}
