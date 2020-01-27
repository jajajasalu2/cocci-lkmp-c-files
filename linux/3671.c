cocci_test_suite() {
	struct ibft_control {
		struct ibft_hdr hdr;
		u16 extensions;
		u16 initiator_off;
		u16 nic0_off;
		u16 tgt0_off;
		u16 nic1_off;
		u16 tgt1_off;
	}__attribute__((__packed__)) cocci_id/* drivers/firmware/iscsi_ibft.c 99 */;
	struct ibft_hdr {
		u8 id;
		u8 version;
		u16 length;
		u8 index;
		u8 flags;
	}__attribute__((__packed__)) cocci_id/* drivers/firmware/iscsi_ibft.c 91 */;
	struct acpi_table_ibft *cocci_id/* drivers/firmware/iscsi_ibft.c 843 */;
	struct acpi_table_header *cocci_id/* drivers/firmware/iscsi_ibft.c 836 */;
	int cocci_id/* drivers/firmware/iscsi_ibft.c 835 */;
	void __init cocci_id/* drivers/firmware/iscsi_ibft.c 833 */;
	void cocci_id/* drivers/firmware/iscsi_ibft.c 833 */;
	const struct {
		char *sign;
	} cocci_id/* drivers/firmware/iscsi_ibft.c 821 */[];
	void __exit cocci_id/* drivers/firmware/iscsi_ibft.c 815 */;
	u16 *cocci_id/* drivers/firmware/iscsi_ibft.c 762 */;
	u16 cocci_id/* drivers/firmware/iscsi_ibft.c 746 */;
	struct ibft_control *cocci_id/* drivers/firmware/iscsi_ibft.c 741 */;
	struct pci_dev *cocci_id/* drivers/firmware/iscsi_ibft.c 632 */;
	struct iscsi_boot_kobj *cocci_id/* drivers/firmware/iscsi_ibft.c 629 */;
	struct ibft_hdr *cocci_id/* drivers/firmware/iscsi_ibft.c 627 */;
	umode_t cocci_id/* drivers/firmware/iscsi_ibft.c 603 */;
	umode_t __init cocci_id/* drivers/firmware/iscsi_ibft.c 600 */;
	int __init cocci_id/* drivers/firmware/iscsi_ibft.c 441 */;
	struct ibft_kobject *cocci_id/* drivers/firmware/iscsi_ibft.c 418 */;
	char *cocci_id/* drivers/firmware/iscsi_ibft.c 416 */;
	void *cocci_id/* drivers/firmware/iscsi_ibft.c 416 */;
	ssize_t cocci_id/* drivers/firmware/iscsi_ibft.c 416 */;
	u8 cocci_id/* drivers/firmware/iscsi_ibft.c 378 */;
	struct ibft_tgt *cocci_id/* drivers/firmware/iscsi_ibft.c 355 */;
	__be32 cocci_id/* drivers/firmware/iscsi_ibft.c 298 */;
	struct ibft_nic *cocci_id/* drivers/firmware/iscsi_ibft.c 295 */;
	struct ibft_initiator *cocci_id/* drivers/firmware/iscsi_ibft.c 254 */;
	u8 *cocci_id/* drivers/firmware/iscsi_ibft.c 193 */;
	const char cocci_id/* drivers/firmware/iscsi_ibft.c 188 */[16];
	struct iscsi_boot_kset *cocci_id/* drivers/firmware/iscsi_ibft.c 182 */;
	struct ibft_kobject {
		struct acpi_table_ibft *header;
		union {
			struct ibft_initiator *initiator;
			struct ibft_nic *nic;
			struct ibft_tgt *tgt;
			struct ibft_hdr *hdr;
		};
	} cocci_id/* drivers/firmware/iscsi_ibft.c 172 */;
	enum ibft_id{id_reserved=0, id_control=1, id_initiator=2, id_nic=3, id_target=4, id_extensions=5, id_end_marker,} cocci_id/* drivers/firmware/iscsi_ibft.c 158 */;
	struct ibft_tgt {
		struct ibft_hdr hdr;
		char ip_addr[16];
		u16 port;
		char lun[8];
		u8 chap_type;
		u8 nic_assoc;
		u16 tgt_name_len;
		u16 tgt_name_off;
		u16 chap_name_len;
		u16 chap_name_off;
		u16 chap_secret_len;
		u16 chap_secret_off;
		u16 rev_chap_name_len;
		u16 rev_chap_name_off;
		u16 rev_chap_secret_len;
		u16 rev_chap_secret_off;
	}__attribute__((__packed__)) cocci_id/* drivers/firmware/iscsi_ibft.c 135 */;
	struct ibft_nic {
		struct ibft_hdr hdr;
		char ip_addr[16];
		u8 subnet_mask_prefix;
		u8 origin;
		char gateway[16];
		char primary_dns[16];
		char secondary_dns[16];
		char dhcp[16];
		u16 vlan;
		char mac[6];
		u16 pci_bdf;
		u16 hostname_len;
		u16 hostname_off;
	}__attribute__((__packed__)) cocci_id/* drivers/firmware/iscsi_ibft.c 119 */;
	struct ibft_initiator {
		struct ibft_hdr hdr;
		char isns_server[16];
		char slp_server[16];
		char pri_radius_server[16];
		char sec_radius_server[16];
		u16 initiator_name_len;
		u16 initiator_name_off;
	}__attribute__((__packed__)) cocci_id/* drivers/firmware/iscsi_ibft.c 109 */;
}
