# font: fontimage

font() {
    file=${f##*/}
    name=${file%.*}
    magick -size 640x400 xc:"#ffffff" -gravity center -pointsize 36 -font "${f}" -fill "#000000" -annotate +0+0 "${name}\nABCDEFGHIJKLM\nNOPQRSTUVWXYZ\nabcdefghijklm\nnopqrstuvwxyz\n1234567890\n!?%&@$€()[]{}" -flatten "jpeg:${cache_f}"
}

convert_and_show_image font
