#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd31aec96, "module_layout" },
	{ 0x7d9e8af2, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x52d1fb52, "kmalloc_caches" },
	{ 0x5348888c, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb9644612, "debugfs_create_dir" },
	{ 0x3245cbf4, "v4l2_event_queue_fh" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfb64a9ef, "vb2_mmap" },
	{ 0x817b743d, "usb_debug_root" },
	{ 0x2fbf061d, "v4l2_device_unregister" },
	{ 0x8214cdb, "no_llseek" },
	{ 0x581aa95c, "vb2_create_bufs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20d287e8, "vb2_fop_poll" },
	{ 0x57a37748, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x759ea8c3, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7f7d2d8d, "vb2_ops_wait_prepare" },
	{ 0xa13f53fd, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa5afb83e, "usb_autopm_get_interface" },
	{ 0xa864f03a, "usb_enable_autosuspend" },
	{ 0xe7cb55f8, "debugfs_create_file" },
	{ 0x82737e8, "v4l2_ctrl_merge" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1ed09ab2, "v4l2_device_register" },
	{ 0x748351c6, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdcb764ad, "memset" },
	{ 0x497cc3a7, "vb2_vmalloc_memops" },
	{ 0x9b94d4da, "usb_string" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe4641d74, "vb2_fop_mmap" },
	{ 0x4bcf248c, "vb2_ioctl_qbuf" },
	{ 0xbf2d5410, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc0e5bd54, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0x1fd08498, "video_unregister_device" },
	{ 0x75379ba3, "media_entity_pads_init" },
	{ 0x6fd70b1c, "usb_set_interface" },
	{ 0xc5cf0652, "v4l2_fh_init" },
	{ 0x88e8e5cb, "vb2_plane_vaddr" },
	{ 0xa3e988fe, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xf1d6a42f, "usb_poison_urb" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xec3f4348, "usb_control_msg" },
	{ 0xda19b8b0, "debugfs_remove" },
	{ 0xb2ec816, "usb_driver_claim_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x59dd4131, "vb2_qbuf" },
	{ 0x589c9133, "vb2_ioctl_prepare_buf" },
	{ 0xebe86565, "vb2_ioctl_create_bufs" },
	{ 0xb6cf5754, "usb_free_coherent" },
	{ 0xc5344914, "vb2_querybuf" },
	{ 0xbb345ef6, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xab102abc, "media_device_cleanup" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x1ca7fb0d, "usb_submit_urb" },
	{ 0xf50fecbc, "v4l2_ctrl_replace" },
	{ 0xafa31fdc, "vb2_streamon" },
	{ 0x1f7cf7a7, "usb_get_dev" },
	{ 0xc1dc980a, "vb2_fop_release" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x5451be24, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x23553d66, "vb2_expbuf" },
	{ 0x5c91d306, "input_register_device" },
	{ 0x7cf70c0c, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x18a844c9, "usb_clear_halt" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x49f2fa43, "cpu_hwcaps" },
	{ 0xb2c1ec19, "usb_driver_release_interface" },
	{ 0x63fbdde9, "input_free_device" },
	{ 0x63e8e4e6, "v4l2_device_register_subdev" },
	{ 0xf424b0fe, "cpu_hwcap_keys" },
	{ 0xcfa58afd, "media_create_pad_link" },
	{ 0x16ecf236, "vb2_reqbufs" },
	{ 0x9ac23f86, "kmem_cache_alloc_trace" },
	{ 0xb84d5469, "usb_get_intf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1c1765eb, "v4l2_fh_open" },
	{ 0xa7dd8aeb, "v4l2_subdev_init" },
	{ 0x7aedf485, "vb2_ioctl_querybuf" },
	{ 0xad03804e, "__media_device_register" },
	{ 0xe9d832fb, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5f0e29d1, "input_unregister_device" },
	{ 0xc2a67837, "usb_match_one_id" },
	{ 0x96848186, "scnprintf" },
	{ 0x571fd711, "usb_register_driver" },
	{ 0x989a5c18, "vb2_ops_wait_finish" },
	{ 0x4d4f7c1d, "v4l2_fh_add" },
	{ 0x9af68a65, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xcfd01ed8, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a694795, "vb2_poll" },
	{ 0xd4a9b4c0, "media_device_init" },
	{ 0xa8423b46, "usb_alloc_coherent" },
	{ 0x923b67ce, "usb_get_current_frame_number" },
	{ 0x28b12cc9, "v4l2_format_info" },
	{ 0xc5df6182, "vb2_ioctl_streamoff" },
	{ 0x3f0632f8, "vb2_queue_release" },
	{ 0x82ea9962, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x29cdaaff, "vb2_streamoff" },
	{ 0xcb855872, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x339ab461, "media_device_unregister" },
	{ 0xab1b8b71, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4b15198, "usb_autopm_put_interface" },
	{ 0x655fc02e, "usb_alloc_urb" },
	{ 0xf657826e, "usb_put_intf" },
	{ 0x24ba4708, "v4l2_fh_exit" },
	{ 0x4647203a, "input_allocate_device" },
	{ 0xaacca9e5, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-vmalloc");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AA5d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AD1d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AD2d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AD3d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AD4d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AD5d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AD6d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AF2d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AF6d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0AFFd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B00d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B01d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B07d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B0Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B0Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B3Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B3Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B48d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B49d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B4Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B4Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B5Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B5Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B64d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "36D4B257F6F6A82CA9F0E42");
