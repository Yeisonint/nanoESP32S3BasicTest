# nanoESP32-S3 board testing

This repository has been created to serve as a base for other projects with [nanoESP32-S3 board](https://github.com/wuxx/nanoESP32-S3).

> **WARNING**: I can't debug with onboard ESPLink, so i decide to use USB-JTAG from ESP, the SDCard test fail if you are running USB debugging because the CS pin is the same than D+ (i think it's a issue from this board).

## Compile project

```bash
cd ./nanoESP32-S3
idf.py set-target esp32s3
idf.py menuconfig
idf.py build
idf.py -p PORT [-b BAUD] flash
```