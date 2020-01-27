cocci_test_suite() {
	struct opa_port_info *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 804 */;
	struct lcb_datum cocci_id/* drivers/infiniband/hw/hfi1/mad.c 752 */[];
	struct lcb_datum {
		u32 off;
		u64 val;
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 747 */;
	struct ib_node_info *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 646 */;
	struct trap_node {
		struct list_head list;
		struct opa_mad_notice_attr data;
		__be64 tid;
		int len;
		u32 retry;
		u8 in_use;
		u8 repress;
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 63 */;
	unsigned cocci_id/* drivers/infiniband/hw/hfi1/mad.c 609 */;
	struct opa_node_info *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 607 */;
	struct opa_node_description *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 586 */;
	struct hfi1_ibdev *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 521 */;
	struct rvt_dev_info *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 518 */;
	struct opa_mad *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4925 */;
	size_t *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4919 */;
	struct ib_mad *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4877 */;
	const struct ib_mad *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4876 */;
	const struct ib_grh *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4875 */;
	struct ib_grh cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4868 */;
	struct trap_node *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 483 */;
	__be64 cocci_id/* drivers/infiniband/hw/hfi1/mad.c 481 */;
	__be32 cocci_id/* drivers/infiniband/hw/hfi1/mad.c 481 */;
	u8 cocci_id/* drivers/infiniband/hw/hfi1/mad.c 481 */[];
	struct ib_class_port_info *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4681 */;
	struct ib_smp *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4621 */;
	const struct ib_wc *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4494 */;
	const struct opa_mad *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4493 */;
	const struct opa_smp *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4400 */;
	__be16 cocci_id/* drivers/infiniband/hw/hfi1/mad.c 431 */;
	struct opa_aggregate *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4252 */;
	struct timer_list *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 412 */;
	struct opa_led_info cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4064 */;
	struct opa_led_info *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4045 */;
	struct opa_led_info {
		__be32 rsvd_led_mask;
		__be32 rsvd;
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 4031 */;
	u16 cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3942 */;
	struct cc_state *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3941 */;
	struct ib_cc_table_entry_shadow *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3938 */;
	struct hfi1_ibport *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3934 */;
	struct ib_cc_table_attr *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3932 */;
	struct opa_hfi1_cong_log cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3923 */;
	struct opa_hfi1_cong_log_event_internal *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3890 */;
	u64 cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3869 */;
	struct opa_hfi1_cong_log *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3868 */;
	struct opa_congestion_setting_entry cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3813 */;
	struct ib_cc_table_entry cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3808 */;
	struct opa_congestion_setting_entry_shadow *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3738 */;
	struct opa_congestion_setting_attr *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3734 */;
	struct opa_congestion_info_attr *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3709 */;
	struct opa_congestion_info_attr {
		__be16 congestion_info;
		u8 control_table_cap;
		u8 congestion_log_length;
	}__packed cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3699 */;
	struct opa_clear_port_status *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3474 */;
	struct opa_port_error_info_msg cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3399 */;
	struct opa_port_error_info_msg *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3377 */;
	struct _port_ei *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3376 */;
	struct _port_ectrs cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3291 */;
	struct ib_pma_portcounters *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3289 */;
	struct ib_pma_mad *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3286 */;
	struct _vls_ectrs *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3210 */;
	struct opa_port_error_counters64_msg *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3203 */;
	struct ib_mad_agent *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 316 */;
	struct _port_ectrs *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3155 */;
	struct ib_mad_send_buf *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 315 */;
	struct _port_dctrs cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3131 */;
	struct ib_pma_portcounters_ext *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3129 */;
	unsigned long *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 3024 */;
	struct _vls_dctrs *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2985 */;
	struct opa_port_data_counters_msg *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2979 */;
	struct rvt_qp *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 297 */;
	struct rdma_ah_attr cocci_id/* drivers/infiniband/hw/hfi1/mad.c 295 */;
	struct _port_dctrs *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2931 */;
	struct ib_ah *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 293 */;
	struct rvt_ah *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 276 */;
	struct _vls_pctrs *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2738 */;
	struct opa_port_status_req *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2728 */;
	struct ib_global_route *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 264 */;
	struct opa_port_status_rsp *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2628 */;
	struct opa_class_port_info *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2606 */;
	struct opa_pma_mad *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2603 */;
	enum error_info_selects{ES_PORT_RCV_ERROR_INFO=(1 << 31), ES_EXCESSIVE_BUFFER_OVERRUN_INFO=(1 << 30), ES_PORT_XMIT_CONSTRAINT_ERROR_INFO=(1 << 29), ES_PORT_RCV_CONSTRAINT_ERROR_INFO=(1 << 28), ES_PORT_RCV_SWITCH_RELAY_ERROR_INFO=(1 << 27), ES_UNCORRECTABLE_ERROR_INFO=(1 << 26), ES_FM_CONFIG_ERROR_INFO=(1 << 25),} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2593 */;
	struct rdma_ah_attr *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 259 */;
	struct opa_port_error_info_msg {
		__be64 port_select_mask[4];
		__be32 error_info_select_mask;
		__be32 reserved1;
		struct _port_ei {
			u8 port_number;
			u8 reserved2[7];
			struct {
				u8 status_and_code;
				union {
					u8 raw[17];
					struct {
						u8 packet_flit1[8];
						u8 packet_flit2[8];
						u8 remaining_flit_bits12;
					} ei1to12;
					struct {
						u8 packet_bytes[8];
						u8 remaining_flit_bits;
					} ei13;
				} ei;
				u8 reserved3[6];
			}__packed port_rcv_ei;
			struct {
				u8 status_and_sc;
				u8 reserved4[7];
			}__packed excessive_buffer_overrun_ei;
			struct {
				u8 status;
				u8 reserved5;
				__be16 pkey;
				__be32 slid;
			}__packed port_xmit_constraint_ei;
			struct {
				u8 status;
				u8 reserved6;
				__be16 pkey;
				__be32 slid;
			}__packed port_rcv_constraint_ei;
			struct {
				u8 status_and_code;
				u8 reserved7[3];
				__u32 error_info;
			}__packed port_rcv_switch_relay_ei;
			struct {
				u8 status_and_code;
				u8 reserved8;
			}__packed uncorrectable_ei;
			struct {
				u8 status_and_code;
				u8 error_info;
			}__packed fm_config_ei;
			__u32 reserved9;
		} port[1];
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2521 */;
	struct opa_port_error_counters64_msg {
		__be64 port_select_mask[4];
		__be32 vl_select_mask;
		__be32 reserved1;
		struct _port_ectrs {
			u8 port_number;
			u8 reserved2[7];
			__be64 port_rcv_constraint_errors;
			__be64 port_rcv_switch_relay_errors;
			__be64 port_xmit_discards;
			__be64 port_xmit_constraint_errors;
			__be64 port_rcv_remote_physical_errors;
			__be64 local_link_integrity_errors;
			__be64 port_rcv_errors;
			__be64 excessive_buffer_overruns;
			__be64 fm_config_errors;
			__be32 link_error_recovery;
			__be32 link_downed;
			u8 uncorrectable_errors;
			u8 reserved3[7];
			struct _vls_ectrs {
				__be64 port_vl_xmit_discards;
			} vls[0];
		} port[1];
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2488 */;
	struct opa_port_data_counters_msg {
		__be64 port_select_mask[4];
		__be32 vl_select_mask;
		__be32 resolution;
		struct _port_dctrs {
			u8 port_number;
			u8 reserved2[3];
			__be32 link_quality_indicator;
			__be64 port_xmit_data;
			__be64 port_rcv_data;
			__be64 port_xmit_pkts;
			__be64 port_rcv_pkts;
			__be64 port_multicast_xmit_pkts;
			__be64 port_multicast_rcv_pkts;
			__be64 port_xmit_wait;
			__be64 sw_port_congestion;
			__be64 port_rcv_fecn;
			__be64 port_rcv_becn;
			__be64 port_xmit_time_cong;
			__be64 port_xmit_wasted_bw;
			__be64 port_xmit_wait_data;
			__be64 port_rcv_bubble;
			__be64 port_mark_fecn;
			__be64 port_error_counter_summary;
			struct _vls_dctrs {
				__be64 port_vl_xmit_data;
				__be64 port_vl_rcv_data;
				__be64 port_vl_xmit_pkts;
				__be64 port_vl_rcv_pkts;
				__be64 port_vl_xmit_wait;
				__be64 sw_port_vl_congestion;
				__be64 port_vl_rcv_fecn;
				__be64 port_vl_rcv_becn;
				__be64 port_xmit_time_cong;
				__be64 port_vl_xmit_wasted_bw;
				__be64 port_vl_xmit_wait_data;
				__be64 port_vl_rcv_bubble;
				__be64 port_vl_mark_fecn;
			} vls[0];
		} port[1];
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2437 */;
	struct opa_aggregate {
		__be16 attr_id;
		__be16 err_reqlength;
		__be32 attr_mod;
		u8 data[0];
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2422 */;
	struct opa_clear_port_status {
		__be64 port_select_mask[4];
		__be32 counter_select_mask;
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2417 */;
	enum counter_selects{CS_PORT_XMIT_DATA=(1 << 31), CS_PORT_RCV_DATA=(1 << 30), CS_PORT_XMIT_PKTS=(1 << 29), CS_PORT_RCV_PKTS=(1 << 28), CS_PORT_MCAST_XMIT_PKTS=(1 << 27), CS_PORT_MCAST_RCV_PKTS=(1 << 26), CS_PORT_XMIT_WAIT=(1 << 25), CS_SW_PORT_CONGESTION=(1 << 24), CS_PORT_RCV_FECN=(1 << 23), CS_PORT_RCV_BECN=(1 << 22), CS_PORT_XMIT_TIME_CONG=(1 << 21), CS_PORT_XMIT_WASTED_BW=(1 << 20), CS_PORT_XMIT_WAIT_DATA=(1 << 19), CS_PORT_RCV_BUBBLE=(1 << 18), CS_PORT_MARK_FECN=(1 << 17), CS_PORT_RCV_CONSTRAINT_ERRORS=(1 << 16), CS_PORT_RCV_SWITCH_RELAY_ERRORS=(1 << 15), CS_PORT_XMIT_DISCARDS=(1 << 14), CS_PORT_XMIT_CONSTRAINT_ERRORS=(1 << 13), CS_PORT_RCV_REMOTE_PHYSICAL_ERRORS=(1 << 12), CS_LOCAL_LINK_INTEGRITY_ERRORS=(1 << 11), CS_PORT_RCV_ERRORS=(1 << 10), CS_EXCESSIVE_BUFFER_OVERRUNS=(1 << 9), CS_FM_CONFIG_ERRORS=(1 << 8), CS_LINK_ERROR_RECOVERY=(1 << 7), CS_LINK_DOWNED=(1 << 6), CS_UNCORRECTABLE_ERRORS=(1 << 5),} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2387 */;
	struct opa_port_status_rsp {
		__u8 port_num;
		__u8 reserved[3];
		__be32 vl_select_mask;
		__be64 port_xmit_data;
		__be64 port_rcv_data;
		__be64 port_xmit_pkts;
		__be64 port_rcv_pkts;
		__be64 port_multicast_xmit_pkts;
		__be64 port_multicast_rcv_pkts;
		__be64 port_xmit_wait;
		__be64 sw_port_congestion;
		__be64 port_rcv_fecn;
		__be64 port_rcv_becn;
		__be64 port_xmit_time_cong;
		__be64 port_xmit_wasted_bw;
		__be64 port_xmit_wait_data;
		__be64 port_rcv_bubble;
		__be64 port_mark_fecn;
		__be64 port_rcv_constraint_errors;
		__be64 port_rcv_switch_relay_errors;
		__be64 port_xmit_discards;
		__be64 port_xmit_constraint_errors;
		__be64 port_rcv_remote_physical_errors;
		__be64 local_link_integrity_errors;
		__be64 port_rcv_errors;
		__be64 excessive_buffer_overruns;
		__be64 fm_config_errors;
		__be32 link_error_recovery;
		__be32 link_downed;
		u8 uncorrectable_errors;
		u8 link_quality_indicator;
		u8 res2[6];
		struct _vls_pctrs {
			__be64 port_vl_xmit_data;
			__be64 port_vl_rcv_data;
			__be64 port_vl_xmit_pkts;
			__be64 port_vl_rcv_pkts;
			__be64 port_vl_xmit_wait;
			__be64 sw_port_vl_congestion;
			__be64 port_vl_rcv_fecn;
			__be64 port_vl_rcv_becn;
			__be64 port_xmit_time_cong;
			__be64 port_vl_xmit_wasted_bw;
			__be64 port_vl_xmit_wait_data;
			__be64 port_vl_rcv_bubble;
			__be64 port_vl_mark_fecn;
			__be64 port_vl_xmit_discards;
		} vls[0];
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2331 */;
	struct opa_port_status_req {
		__u8 port_num;
		__u8 reserved[3];
		__be32 vl_select_mask;
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2323 */;
	struct opa_pma_mad {
		struct ib_mad_hdr mad_hdr;
		u8 data[2024];
	}__packed cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2318 */;
	struct ib_mad_hdr *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2198 */;
	struct buffer_control cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2194 */;
	struct buffer_control *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2193 */;
	struct hfi1_pportdata *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2192 */;
	struct hfi1_devdata *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2191 */;
	struct trap_node cocci_id/* drivers/infiniband/hw/hfi1/mad.c 219 */;
	u8 cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2187 */;
	u32 *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2187 */;
	struct ib_device *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2187 */;
	u32 cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2186 */;
	u8 *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2186 */;
	struct opa_smp *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2186 */;
	int cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2186 */;
	struct opa_port_state_info cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2081 */;
	struct opa_port_state_info *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 2053 */;
	struct sc2vlnt cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1995 */;
	void *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1994 */;
	u64 *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1816 */;
	bool cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1779 */;
	unsigned int cocci_id/* drivers/infiniband/hw/hfi1/mad.c 164 */;
	struct trap_list *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 160 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1523 */;
	unsigned long cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1361 */;
	struct ib_event cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1356 */;
	struct list_head cocci_id/* drivers/infiniband/hw/hfi1/mad.c 129 */;
	const struct {
		u8 allowed[__N_LOGICAL_STATES][__N_LOGICAL_STATES];
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1137 */;
	const struct {
		u8 allowed[__N_PHYSTATES][__N_PHYSTATES];
	} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1106 */;
	enum{__D=HFI_TRANSITION_DISALLOWED, __I=HFI_TRANSITION_IGNORED, __A=HFI_TRANSITION_ALLOWED, __U=HFI_TRANSITION_UNDEFINED,} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1087 */;
	enum{HFI_TRANSITION_DISALLOWED, HFI_TRANSITION_IGNORED, HFI_TRANSITION_ALLOWED, HFI_TRANSITION_UNDEFINED,} cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1076 */;
	size_t cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1033 */;
	u16 *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1029 */;
	__be16 *cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1028 */;
	struct opa_port_info cocci_id/* drivers/infiniband/hw/hfi1/mad.c 1001 */;
}
