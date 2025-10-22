# psd: imagemagick

psd() {
    magick "${f}"[0] -flatten "${cache_f}.jpg" 2> /dev/null &&
    mv -- "${cache_f}.jpg" "${cache_f}"
}

convert_and_show_image psd
