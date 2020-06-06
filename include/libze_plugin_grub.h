#ifndef ZECTL_LIBZE_PLUGIN_GRUB_H
#define ZECTL_LIBZE_PLUGIN_GRUB_H

#include <libze/libze_plugin_manager.h>

char const *PLUGIN_GRUB = "grub";

libze_error
libze_plugin_grub_init(libze_handle *lzeh);

libze_error
libze_plugin_grub_pre_activate(libze_handle *lzeh);

libze_error
libze_plugin_grub_mid_activate(libze_handle *lzeh, libze_activate_data *activate_data);

libze_error
libze_plugin_grub_post_activate(libze_handle *lzeh, char const be_name[LIBZE_MAX_PATH_LEN]);

libze_error
libze_plugin_grub_post_destroy(libze_handle *lzeh, char const be_name[LIBZE_MAX_PATH_LEN]);

libze_error
libze_plugin_grub_post_create(libze_handle *lzeh, libze_create_data *create_data);

libze_error
libze_plugin_grub_post_rename(libze_handle *lzeh, char const be_name_old[LIBZE_MAX_PATH_LEN],
                              char const be_name_new[LIBZE_MAX_PATH_LEN]);

// TODO: Add once marged with master, see zectl#17
//libze_error
//libze_plugin_grub_pre_snapshot(libze_handle *lzeh, libze_snap_data *snap_data);

// TODO: Add below once marged with master, see zectl#17
// .plugin_pre_snapshot = libze_plugin_grub_pre_snapshot

libze_plugin_fn_export const exported_plugin = {
        .plugin_init = libze_plugin_grub_init,
        .plugin_pre_activate = libze_plugin_grub_pre_activate,
        .plugin_mid_activate = libze_plugin_grub_mid_activate,
        .plugin_post_activate = libze_plugin_grub_post_activate,
        .plugin_post_destroy = libze_plugin_grub_post_destroy,
        .plugin_post_create = libze_plugin_grub_post_create,
        .plugin_post_rename = libze_plugin_grub_post_rename
};

#endif //ZECTL_LIBZE_PLUGIN_GRUB_H