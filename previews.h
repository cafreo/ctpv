#include <stdlib.h>
#include <limits.h>

#include "src/utils.h"
#include "src/preview.h"
#include "gen/previews.h"

/*
 * This file is supposed to be included in src/ctpv.c
 */

#define PNAME(n)          prev_scr_##n##_sh
#define PR(e, t, s, n, a) { #n, e, t, s, PNAME(n), 0, 0, a, LEN(PNAME(n)) }

Preview b_previews[] = {
    PR(NULL,      NULL,             NULL,             any,                     PREV_ATTR_NONE),

    PR("md",      NULL,             NULL,             glow,                    PREV_ATTR_NONE),
    PR("md",      NULL,             NULL,             mdcat,                   PREV_ATTR_NONE),


    PR("ods",     NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("fods",    NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("xls",     NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("xlsx",    NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("csv",     NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),

    PR("odt",     NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("fodt",    NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("doc",     NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("docx",    NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),

    PR("odp",     NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("fodp",    NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("ppt",     NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),
    PR("pptx",    NULL,             NULL,             libreoffice,             PREV_ATTR_NONE),

    PR(NULL,      "text",           NULL,             bat,                     PREV_ATTR_NONE),
    PR(NULL,      "text",           NULL,             highlight,               PREV_ATTR_NONE),
    PR(NULL,      "text",           NULL,             source_highlight,        PREV_ATTR_NONE),
    PR(NULL,      "text",           NULL,             cat,                     PREV_ATTR_NONE),

    PR(NULL,      "image",          NULL,             image,                   PREV_ATTR_NONE),
    PR(NULL,      "image",          "svg+xml",        svg,                     PREV_ATTR_NONE), 
    PR(NULL,      "video",          NULL,             video,                   PREV_ATTR_NONE),
    PR(NULL,      "audio",          NULL,             audio,                   PREV_ATTR_NONE),

    PR("psd",     NULL,             NULL,             psd,                     PREV_ATTR_NONE),
    PR("xcf",     NULL,             NULL,             psd,                     PREV_ATTR_NONE),

    PR(NULL,      "application",    "pdf",            pdf,                     PREV_ATTR_NONE),
    PR(NULL,      "application",    "json",           jq,                      PREV_ATTR_NONE),

    PR(NULL,      "inode",          "directory",      ls,                      PREV_ATTR_NONE),
    PR(NULL,      "inode",          "symlink",        symlink,                 PREV_ATTR_NONE),

    PR(NULL,      "text",           "html",           elinks,                  PREV_ATTR_NONE),
    PR(NULL,      "text",           "html",           lynx,                    PREV_ATTR_NONE),
    PR(NULL,      "text",           "html",           w3m,                     PREV_ATTR_NONE),

    PR(NULL,      "text",           "x-diff",         delta,                   PREV_ATTR_NONE),
    PR(NULL,      "text",           "x-patch",        delta,                   PREV_ATTR_NONE),
    PR(NULL,      "text",           "x-diff",         diff_so_fancy,           PREV_ATTR_NONE),
    PR(NULL,      "text",           "x-patch",        diff_so_fancy,           PREV_ATTR_NONE),
    PR(NULL,      "text",           "x-diff",         colordiff,               PREV_ATTR_NONE),
    PR(NULL,      "text",           "x-patch",        colordiff,               PREV_ATTR_NONE),

    PR(NULL,      "font",           NULL,             font,                    PREV_ATTR_NONE),
    PR("otf",      NULL,            NULL,             font,                    PREV_ATTR_NONE),

    PR("tar.gz",   NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tgz",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tgz",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tar.gz",   NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tgz",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tar.bz",   NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tbz",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tar.bz2",  NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tbz2",     NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tar.Z",    NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tZ",       NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tar.lzo",  NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tzo",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tar.lz",   NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tlz",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tar.xz",   NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("txz",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tar.7z",   NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("t7z",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("tar",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("zip",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("jar",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("war",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("rar",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("lha",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("lzh",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("7z",       NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("alz",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("ace",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("a",        NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("arj",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("arc",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("rpm",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("deb",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("cab",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("gz",       NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("bz",       NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("bz2",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("Z",        NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("lzma",     NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("lzo",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("lz",       NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("xz",       NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("rz",       NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("lrz",      NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("7z",       NULL,            NULL,             ouch,                    PREV_ATTR_NONE),
    PR("cpio",     NULL,            NULL,             ouch,                    PREV_ATTR_NONE),

    PR("torrent",  NULL,            NULL,             torrent,                 PREV_ATTR_EXT_SHORT),
    PR("gpg",      NULL,            NULL,             gpg,                     PREV_ATTR_EXT_SHORT),
};

/* vim: set nowrap: */
